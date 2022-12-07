// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mp_options.proto

#include "mp_options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr motion_planning_task::motion_planning_task(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : scenario_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , algorithm_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , env_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , robot_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , start_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , goal_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , min_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , max_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct motion_planning_taskDefaultTypeInternal {
  constexpr motion_planning_taskDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~motion_planning_taskDefaultTypeInternal() {}
  union {
    motion_planning_task _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT motion_planning_taskDefaultTypeInternal _motion_planning_task_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mp_5foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mp_5foptions_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mp_5foptions_2eproto = nullptr;

const uint32_t TableStruct_mp_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, scenario_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, algorithm_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, env_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, robot_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, start_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, goal_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, min_),
  PROTOBUF_FIELD_OFFSET(::motion_planning_task, max_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, -1, sizeof(::motion_planning_task)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_motion_planning_task_default_instance_),
};

const char descriptor_table_protodef_mp_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020mp_options.proto\"\216\001\n\024motion_planning_t"
  "ask\022\020\n\010scenario\030\001 \001(\t\022\021\n\talgorithm\030\002 \001(\t"
  "\022\013\n\003env\030\003 \001(\t\022\r\n\005robot\030\004 \001(\t\022\r\n\005start\030\005 "
  "\001(\t\022\014\n\004goal\030\006 \001(\t\022\013\n\003min\030\007 \001(\t\022\013\n\003max\030\010 "
  "\001(\t"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mp_5foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mp_5foptions_2eproto = {
  false, false, 163, descriptor_table_protodef_mp_5foptions_2eproto, "mp_options.proto", 
  &descriptor_table_mp_5foptions_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_mp_5foptions_2eproto::offsets,
  file_level_metadata_mp_5foptions_2eproto, file_level_enum_descriptors_mp_5foptions_2eproto, file_level_service_descriptors_mp_5foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mp_5foptions_2eproto_getter() {
  return &descriptor_table_mp_5foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mp_5foptions_2eproto(&descriptor_table_mp_5foptions_2eproto);

// ===================================================================

class motion_planning_task::_Internal {
 public:
  using HasBits = decltype(std::declval<motion_planning_task>()._has_bits_);
  static void set_has_scenario(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_algorithm(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_env(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_robot(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_start(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_goal(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_min(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_max(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
};

motion_planning_task::motion_planning_task(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:motion_planning_task)
}
motion_planning_task::motion_planning_task(const motion_planning_task& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  scenario_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    scenario_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_scenario()) {
    scenario_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_scenario(), 
      GetArenaForAllocation());
  }
  algorithm_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    algorithm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_algorithm()) {
    algorithm_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_algorithm(), 
      GetArenaForAllocation());
  }
  env_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    env_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_env()) {
    env_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_env(), 
      GetArenaForAllocation());
  }
  robot_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    robot_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_robot()) {
    robot_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_robot(), 
      GetArenaForAllocation());
  }
  start_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    start_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_start()) {
    start_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_start(), 
      GetArenaForAllocation());
  }
  goal_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    goal_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_goal()) {
    goal_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_goal(), 
      GetArenaForAllocation());
  }
  min_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    min_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_min()) {
    min_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_min(), 
      GetArenaForAllocation());
  }
  max_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    max_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_max()) {
    max_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_max(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:motion_planning_task)
}

inline void motion_planning_task::SharedCtor() {
scenario_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  scenario_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
algorithm_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  algorithm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
env_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  env_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
robot_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  robot_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
start_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  start_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
goal_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  goal_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
min_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  min_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
max_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  max_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

motion_planning_task::~motion_planning_task() {
  // @@protoc_insertion_point(destructor:motion_planning_task)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void motion_planning_task::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  scenario_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  algorithm_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  env_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  robot_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  start_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  goal_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  min_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  max_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void motion_planning_task::ArenaDtor(void* object) {
  motion_planning_task* _this = reinterpret_cast< motion_planning_task* >(object);
  (void)_this;
}
void motion_planning_task::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void motion_planning_task::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void motion_planning_task::Clear() {
// @@protoc_insertion_point(message_clear_start:motion_planning_task)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      scenario_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      algorithm_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      env_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      robot_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      start_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000020u) {
      goal_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000040u) {
      min_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000080u) {
      max_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* motion_planning_task::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string scenario = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_scenario();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.scenario");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string algorithm = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_algorithm();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.algorithm");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string env = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_env();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.env");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string robot = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_robot();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.robot");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string start = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_start();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.start");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string goal = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_goal();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.goal");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string min = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_min();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.min");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string max = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_max();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "motion_planning_task.max");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* motion_planning_task::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:motion_planning_task)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string scenario = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_scenario().data(), static_cast<int>(this->_internal_scenario().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.scenario");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_scenario(), target);
  }

  // optional string algorithm = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_algorithm().data(), static_cast<int>(this->_internal_algorithm().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.algorithm");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_algorithm(), target);
  }

  // optional string env = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_env().data(), static_cast<int>(this->_internal_env().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.env");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_env(), target);
  }

  // optional string robot = 4;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_robot().data(), static_cast<int>(this->_internal_robot().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.robot");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_robot(), target);
  }

  // optional string start = 5;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_start().data(), static_cast<int>(this->_internal_start().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.start");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_start(), target);
  }

  // optional string goal = 6;
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_goal().data(), static_cast<int>(this->_internal_goal().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.goal");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_goal(), target);
  }

  // optional string min = 7;
  if (cached_has_bits & 0x00000040u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_min().data(), static_cast<int>(this->_internal_min().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.min");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_min(), target);
  }

  // optional string max = 8;
  if (cached_has_bits & 0x00000080u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_max().data(), static_cast<int>(this->_internal_max().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "motion_planning_task.max");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_max(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:motion_planning_task)
  return target;
}

size_t motion_planning_task::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:motion_planning_task)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string scenario = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_scenario());
    }

    // optional string algorithm = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_algorithm());
    }

    // optional string env = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_env());
    }

    // optional string robot = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_robot());
    }

    // optional string start = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_start());
    }

    // optional string goal = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_goal());
    }

    // optional string min = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_min());
    }

    // optional string max = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_max());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData motion_planning_task::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    motion_planning_task::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*motion_planning_task::GetClassData() const { return &_class_data_; }

void motion_planning_task::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<motion_planning_task *>(to)->MergeFrom(
      static_cast<const motion_planning_task &>(from));
}


void motion_planning_task::MergeFrom(const motion_planning_task& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:motion_planning_task)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_scenario(from._internal_scenario());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_algorithm(from._internal_algorithm());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_env(from._internal_env());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_robot(from._internal_robot());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_start(from._internal_start());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_set_goal(from._internal_goal());
    }
    if (cached_has_bits & 0x00000040u) {
      _internal_set_min(from._internal_min());
    }
    if (cached_has_bits & 0x00000080u) {
      _internal_set_max(from._internal_max());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void motion_planning_task::CopyFrom(const motion_planning_task& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:motion_planning_task)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool motion_planning_task::IsInitialized() const {
  return true;
}

void motion_planning_task::InternalSwap(motion_planning_task* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &scenario_, lhs_arena,
      &other->scenario_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &algorithm_, lhs_arena,
      &other->algorithm_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &env_, lhs_arena,
      &other->env_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &robot_, lhs_arena,
      &other->robot_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &start_, lhs_arena,
      &other->start_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &goal_, lhs_arena,
      &other->goal_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &min_, lhs_arena,
      &other->min_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &max_, lhs_arena,
      &other->max_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata motion_planning_task::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mp_5foptions_2eproto_getter, &descriptor_table_mp_5foptions_2eproto_once,
      file_level_metadata_mp_5foptions_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::motion_planning_task* Arena::CreateMaybeMessage< ::motion_planning_task >(Arena* arena) {
  return Arena::CreateMessageInternal< ::motion_planning_task >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
