// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponsePong.proto

#ifndef PROTOBUF_MessageResponsePong_2eproto__INCLUDED
#define PROTOBUF_MessageResponsePong_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageResponsePong_2eproto();
void protobuf_AssignDesc_MessageResponsePong_2eproto();
void protobuf_ShutdownFile_MessageResponsePong_2eproto();

class MessageResponsePong;

// ===================================================================

class MessageResponsePong : public ::google::protobuf::MessageLite {
 public:
  MessageResponsePong();
  virtual ~MessageResponsePong();

  MessageResponsePong(const MessageResponsePong& from);

  inline MessageResponsePong& operator=(const MessageResponsePong& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MessageResponsePong& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageResponsePong* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageResponsePong* other);

  // implements Message ----------------------------------------------

  inline MessageResponsePong* New() const { return New(NULL); }

  MessageResponsePong* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageResponsePong& from);
  void MergeFrom(const MessageResponsePong& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageResponsePong* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string someText = 1 [default = ""];
  bool has_sometext() const;
  void clear_sometext();
  static const int kSomeTextFieldNumber = 1;
  const ::std::string& sometext() const;
  void set_sometext(const ::std::string& value);
  void set_sometext(const char* value);
  void set_sometext(const char* value, size_t size);
  ::std::string* mutable_sometext();
  ::std::string* release_sometext();
  void set_allocated_sometext(::std::string* sometext);

  // @@protoc_insertion_point(class_scope:MessageResponsePong)
 private:
  inline void set_has_sometext();
  inline void clear_has_sometext();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr sometext_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageResponsePong_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageResponsePong_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageResponsePong_2eproto();
  friend void protobuf_ShutdownFile_MessageResponsePong_2eproto();

  void InitAsDefaultInstance();
  static MessageResponsePong* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponsePong

// required string someText = 1 [default = ""];
inline bool MessageResponsePong::has_sometext() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageResponsePong::set_has_sometext() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageResponsePong::clear_has_sometext() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageResponsePong::clear_sometext() {
  sometext_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sometext();
}
inline const ::std::string& MessageResponsePong::sometext() const {
  // @@protoc_insertion_point(field_get:MessageResponsePong.someText)
  return sometext_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponsePong::set_sometext(const ::std::string& value) {
  set_has_sometext();
  sometext_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageResponsePong.someText)
}
inline void MessageResponsePong::set_sometext(const char* value) {
  set_has_sometext();
  sometext_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageResponsePong.someText)
}
inline void MessageResponsePong::set_sometext(const char* value, size_t size) {
  set_has_sometext();
  sometext_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageResponsePong.someText)
}
inline ::std::string* MessageResponsePong::mutable_sometext() {
  set_has_sometext();
  // @@protoc_insertion_point(field_mutable:MessageResponsePong.someText)
  return sometext_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageResponsePong::release_sometext() {
  // @@protoc_insertion_point(field_release:MessageResponsePong.someText)
  clear_has_sometext();
  return sometext_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponsePong::set_allocated_sometext(::std::string* sometext) {
  if (sometext != NULL) {
    set_has_sometext();
  } else {
    clear_has_sometext();
  }
  sometext_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sometext);
  // @@protoc_insertion_point(field_set_allocated:MessageResponsePong.someText)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageResponsePong_2eproto__INCLUDED
