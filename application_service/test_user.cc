#include "support.h"
#include "certifier.h"
#include "simulated_enclave.h"
#include "application_enclave.h"
#include "certifier.pb.h"
#include <mutex>
#include <thread>

#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <openssl/ssl.h>
#include <openssl/rsa.h>
#include <openssl/x509.h>
#include <openssl/evp.h>
#include <openssl/rand.h>
#include <openssl/hmac.h>
#include <openssl/err.h>

int main(int an, char**av) {
  string enclave("application-enclave");
  string id("1");

  int in_fd = 5;
  int out_fd = 8;
  if (an >= 3) {
    in_fd = atoi(av[1]);
    out_fd = atoi(av[2]);
  }
  string parent_enclave_type("simulated-enclave");
  if (!application_Init(parent_enclave_type, in_fd, out_fd)) {
    printf("Can't init application-enclave\n");
    return 1;
  }

  printf("***test_user.exe\n" );

  string secret("abc");
  int out_size = 128;
  byte out[out_size];
  string sealed;
  string unsealed;

  printf("secret  : ");
  print_bytes((int)secret.size(), (byte*)secret.data());
  printf("\n");
 
  int t_out = out_size; 
  if (!Seal(enclave, id, (int)secret.size(), (byte*)secret.data(), &t_out, out)) {
    printf("Application seal failed\n");
    return 1;
  }
  sealed.assign((char*)out, t_out);

  printf("sealed  : ");
  print_bytes((int)sealed.size(), (byte*)sealed.data());
  printf("\n");

  t_out = out_size; 
  if (!Unseal(enclave, id, (int)sealed.size(), (byte*)sealed.data(), &t_out, out)) {
    printf("Application unseal failed\n");
    return 1;
  }
  unsealed.assign((char*)out, t_out);

  printf("\ntest_user.exe SUCCEEDED\n");
  printf("unsealed: ");
  print_bytes((int)unsealed.size(), (byte*)unsealed.data());
  printf("\n");
  return 0;
}