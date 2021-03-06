// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: syn.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_syn_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_syn_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_syn_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_syn_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_syn_2eproto;
class AckResponse;
class AckResponseDefaultTypeInternal;
extern AckResponseDefaultTypeInternal _AckResponse_default_instance_;
class SynRequest;
class SynRequestDefaultTypeInternal;
extern SynRequestDefaultTypeInternal _SynRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::AckResponse* Arena::CreateMaybeMessage<::AckResponse>(Arena*);
template<> ::SynRequest* Arena::CreateMaybeMessage<::SynRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Status : int {
  Ok = 0,
  Ng = 1,
  Status_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Status_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Status_IsValid(int value);
constexpr Status Status_MIN = Ok;
constexpr Status Status_MAX = Ng;
constexpr int Status_ARRAYSIZE = Status_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_descriptor();
template<typename T>
inline const std::string& Status_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Status>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Status_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Status_descriptor(), enum_t_value);
}
inline bool Status_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Status* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Status>(
    Status_descriptor(), name, value);
}
// ===================================================================

class SynRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SynRequest) */ {
 public:
  inline SynRequest() : SynRequest(nullptr) {}
  virtual ~SynRequest();

  SynRequest(const SynRequest& from);
  SynRequest(SynRequest&& from) noexcept
    : SynRequest() {
    *this = ::std::move(from);
  }

  inline SynRequest& operator=(const SynRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SynRequest& operator=(SynRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SynRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SynRequest* internal_default_instance() {
    return reinterpret_cast<const SynRequest*>(
               &_SynRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SynRequest& a, SynRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SynRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SynRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SynRequest* New() const final {
    return CreateMaybeMessage<SynRequest>(nullptr);
  }

  SynRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SynRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SynRequest& from);
  void MergeFrom(const SynRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SynRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SynRequest";
  }
  protected:
  explicit SynRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_syn_2eproto);
    return ::descriptor_table_syn_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:SynRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_syn_2eproto;
};
// -------------------------------------------------------------------

class AckResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AckResponse) */ {
 public:
  inline AckResponse() : AckResponse(nullptr) {}
  virtual ~AckResponse();

  AckResponse(const AckResponse& from);
  AckResponse(AckResponse&& from) noexcept
    : AckResponse() {
    *this = ::std::move(from);
  }

  inline AckResponse& operator=(const AckResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline AckResponse& operator=(AckResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AckResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AckResponse* internal_default_instance() {
    return reinterpret_cast<const AckResponse*>(
               &_AckResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AckResponse& a, AckResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(AckResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AckResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AckResponse* New() const final {
    return CreateMaybeMessage<AckResponse>(nullptr);
  }

  AckResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AckResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AckResponse& from);
  void MergeFrom(const AckResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AckResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AckResponse";
  }
  protected:
  explicit AckResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_syn_2eproto);
    return ::descriptor_table_syn_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDetailFieldNumber = 2,
    kStatusFieldNumber = 1,
  };
  // string detail = 2;
  void clear_detail();
  const std::string& detail() const;
  void set_detail(const std::string& value);
  void set_detail(std::string&& value);
  void set_detail(const char* value);
  void set_detail(const char* value, size_t size);
  std::string* mutable_detail();
  std::string* release_detail();
  void set_allocated_detail(std::string* detail);
  private:
  const std::string& _internal_detail() const;
  void _internal_set_detail(const std::string& value);
  std::string* _internal_mutable_detail();
  public:

  // .Status status = 1;
  void clear_status();
  ::Status status() const;
  void set_status(::Status value);
  private:
  ::Status _internal_status() const;
  void _internal_set_status(::Status value);
  public:

  // @@protoc_insertion_point(class_scope:AckResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr detail_;
  int status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_syn_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SynRequest

// -------------------------------------------------------------------

// AckResponse

// .Status status = 1;
inline void AckResponse::clear_status() {
  status_ = 0;
}
inline ::Status AckResponse::_internal_status() const {
  return static_cast< ::Status >(status_);
}
inline ::Status AckResponse::status() const {
  // @@protoc_insertion_point(field_get:AckResponse.status)
  return _internal_status();
}
inline void AckResponse::_internal_set_status(::Status value) {
  
  status_ = value;
}
inline void AckResponse::set_status(::Status value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:AckResponse.status)
}

// string detail = 2;
inline void AckResponse::clear_detail() {
  detail_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& AckResponse::detail() const {
  // @@protoc_insertion_point(field_get:AckResponse.detail)
  return _internal_detail();
}
inline void AckResponse::set_detail(const std::string& value) {
  _internal_set_detail(value);
  // @@protoc_insertion_point(field_set:AckResponse.detail)
}
inline std::string* AckResponse::mutable_detail() {
  // @@protoc_insertion_point(field_mutable:AckResponse.detail)
  return _internal_mutable_detail();
}
inline const std::string& AckResponse::_internal_detail() const {
  return detail_.Get();
}
inline void AckResponse::_internal_set_detail(const std::string& value) {
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void AckResponse::set_detail(std::string&& value) {
  
  detail_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AckResponse.detail)
}
inline void AckResponse::set_detail(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AckResponse.detail)
}
inline void AckResponse::set_detail(const char* value,
    size_t size) {
  
  detail_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AckResponse.detail)
}
inline std::string* AckResponse::_internal_mutable_detail() {
  
  return detail_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* AckResponse::release_detail() {
  // @@protoc_insertion_point(field_release:AckResponse.detail)
  return detail_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AckResponse::set_allocated_detail(std::string* detail) {
  if (detail != nullptr) {
    
  } else {
    
  }
  detail_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), detail,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AckResponse.detail)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Status>() {
  return ::Status_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_syn_2eproto
