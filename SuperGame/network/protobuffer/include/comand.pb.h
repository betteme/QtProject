// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: comand.proto

#ifndef PROTOBUF_INCLUDED_comand_2eproto
#define PROTOBUF_INCLUDED_comand_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_comand_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_comand_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_comand_2eproto();
namespace go {
class PacketData;
class PacketDataDefaultTypeInternal;
extern PacketDataDefaultTypeInternal _PacketData_default_instance_;
}  // namespace go
namespace google {
namespace protobuf {
template<> ::go::PacketData* Arena::CreateMaybeMessage<::go::PacketData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace go {

// ===================================================================

class PacketData final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:go.PacketData) */ {
 public:
  PacketData();
  virtual ~PacketData();

  PacketData(const PacketData& from);

  inline PacketData& operator=(const PacketData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PacketData(PacketData&& from) noexcept
    : PacketData() {
    *this = ::std::move(from);
  }

  inline PacketData& operator=(PacketData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const PacketData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PacketData* internal_default_instance() {
    return reinterpret_cast<const PacketData*>(
               &_PacketData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PacketData* other);
  friend void swap(PacketData& a, PacketData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PacketData* New() const final {
    return CreateMaybeMessage<PacketData>(nullptr);
  }

  PacketData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PacketData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PacketData& from);
  void MergeFrom(const PacketData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PacketData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes TransData = 3;
  void clear_transdata();
  static const int kTransDataFieldNumber = 3;
  const ::std::string& transdata() const;
  void set_transdata(const ::std::string& value);
  #if LANG_CXX11
  void set_transdata(::std::string&& value);
  #endif
  void set_transdata(const char* value);
  void set_transdata(const void* value, size_t size);
  ::std::string* mutable_transdata();
  ::std::string* release_transdata();
  void set_allocated_transdata(::std::string* transdata);

  // uint32 MainID = 1;
  void clear_mainid();
  static const int kMainIDFieldNumber = 1;
  ::google::protobuf::uint32 mainid() const;
  void set_mainid(::google::protobuf::uint32 value);

  // uint32 SubID = 2;
  void clear_subid();
  static const int kSubIDFieldNumber = 2;
  ::google::protobuf::uint32 subid() const;
  void set_subid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:go.PacketData)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr transdata_;
  ::google::protobuf::uint32 mainid_;
  ::google::protobuf::uint32 subid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_comand_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PacketData

// uint32 MainID = 1;
inline void PacketData::clear_mainid() {
  mainid_ = 0u;
}
inline ::google::protobuf::uint32 PacketData::mainid() const {
  // @@protoc_insertion_point(field_get:go.PacketData.MainID)
  return mainid_;
}
inline void PacketData::set_mainid(::google::protobuf::uint32 value) {
  
  mainid_ = value;
  // @@protoc_insertion_point(field_set:go.PacketData.MainID)
}

// uint32 SubID = 2;
inline void PacketData::clear_subid() {
  subid_ = 0u;
}
inline ::google::protobuf::uint32 PacketData::subid() const {
  // @@protoc_insertion_point(field_get:go.PacketData.SubID)
  return subid_;
}
inline void PacketData::set_subid(::google::protobuf::uint32 value) {
  
  subid_ = value;
  // @@protoc_insertion_point(field_set:go.PacketData.SubID)
}

// bytes TransData = 3;
inline void PacketData::clear_transdata() {
  transdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PacketData::transdata() const {
  // @@protoc_insertion_point(field_get:go.PacketData.TransData)
  return transdata_.GetNoArena();
}
inline void PacketData::set_transdata(const ::std::string& value) {
  
  transdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:go.PacketData.TransData)
}
#if LANG_CXX11
inline void PacketData::set_transdata(::std::string&& value) {
  
  transdata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:go.PacketData.TransData)
}
#endif
inline void PacketData::set_transdata(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  transdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:go.PacketData.TransData)
}
inline void PacketData::set_transdata(const void* value, size_t size) {
  
  transdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:go.PacketData.TransData)
}
inline ::std::string* PacketData::mutable_transdata() {
  
  // @@protoc_insertion_point(field_mutable:go.PacketData.TransData)
  return transdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PacketData::release_transdata() {
  // @@protoc_insertion_point(field_release:go.PacketData.TransData)
  
  return transdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PacketData::set_allocated_transdata(::std::string* transdata) {
  if (transdata != nullptr) {
    
  } else {
    
  }
  transdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), transdata);
  // @@protoc_insertion_point(field_set_allocated:go.PacketData.TransData)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace go

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_comand_2eproto