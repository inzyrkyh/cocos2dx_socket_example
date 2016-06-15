// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageRequest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageRequest_2eproto() {
  delete MessageRequest::default_instance_;
  delete MessageRequest::_default_messagebody_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageRequest_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_CommunicationMessageType_2eproto();
  MessageRequest::_default_messagebody_ =
      new ::std::string("\000", 1);
  MessageRequest::default_instance_ = new MessageRequest();
  MessageRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageRequest_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageRequest_2eproto_once_);
void protobuf_AddDesc_MessageRequest_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageRequest_2eproto_once_,
                 &protobuf_AddDesc_MessageRequest_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageRequest_2eproto {
  StaticDescriptorInitializer_MessageRequest_2eproto() {
    protobuf_AddDesc_MessageRequest_2eproto();
  }
} static_descriptor_initializer_MessageRequest_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageRequest(
    MessageRequest* ptr) {
  return ptr->mutable_unknown_fields();
}

::std::string* MessageRequest::_default_messagebody_ = NULL;
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageRequest::kMessageTypeFieldNumber;
const int MessageRequest::kMessageBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageRequest::MessageRequest()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageRequest)
}

void MessageRequest::InitAsDefaultInstance() {
}

MessageRequest::MessageRequest(const MessageRequest& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageRequest)
}

void MessageRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  messagetype_ = 0;
  messagebody_.UnsafeSetDefault(_default_messagebody_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageRequest::~MessageRequest() {
  // @@protoc_insertion_point(destructor:MessageRequest)
  SharedDtor();
}

void MessageRequest::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  messagebody_.DestroyNoArena(_default_messagebody_);
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageRequest& MessageRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageRequest_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageRequest_2eproto();
#endif
  return *default_instance_;
}

MessageRequest* MessageRequest::default_instance_ = NULL;

MessageRequest* MessageRequest::New(::google::protobuf::Arena* arena) const {
  MessageRequest* n = new MessageRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageRequest)
  if (_has_bits_[0 / 32] & 3u) {
    messagetype_ = 0;
    if (has_messagebody()) {
      messagebody_.ClearToDefaultNoArena(_default_messagebody_);
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageRequest, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .eCommunicationMessageType messageType = 1 [default = cmtNone];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::eCommunicationMessageType_IsValid(value)) {
            set_messagetype(static_cast< ::eCommunicationMessageType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_messageBody;
        break;
      }

      // required bytes messageBody = 2 [default = "\000"];
      case 2: {
        if (tag == 18) {
         parse_messageBody:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_messagebody()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageRequest)
  return false;
#undef DO_
}

void MessageRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageRequest)
  // required .eCommunicationMessageType messageType = 1 [default = cmtNone];
  if (has_messagetype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->messagetype(), output);
  }

  // required bytes messageBody = 2 [default = "\000"];
  if (has_messagebody()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->messagebody(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageRequest)
}

int MessageRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageRequest)
  int total_size = 0;

  if (has_messagetype()) {
    // required .eCommunicationMessageType messageType = 1 [default = cmtNone];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->messagetype());
  }

  if (has_messagebody()) {
    // required bytes messageBody = 2 [default = "\000"];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->messagebody());
  }

  return total_size;
}
int MessageRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageRequest)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .eCommunicationMessageType messageType = 1 [default = cmtNone];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->messagetype());

    // required bytes messageBody = 2 [default = "\000"];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->messagebody());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageRequest*>(&from));
}

void MessageRequest::MergeFrom(const MessageRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_messagetype()) {
      set_messagetype(from.messagetype());
    }
    if (from.has_messagebody()) {
      set_has_messagebody();
      messagebody_.AssignWithDefault(_default_messagebody_, from.messagebody_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageRequest::CopyFrom(const MessageRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void MessageRequest::Swap(MessageRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageRequest::InternalSwap(MessageRequest* other) {
  std::swap(messagetype_, other->messagetype_);
  messagebody_.Swap(&other->messagebody_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageRequest::GetTypeName() const {
  return "MessageRequest";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequest

// required .eCommunicationMessageType messageType = 1 [default = cmtNone];
bool MessageRequest::has_messagetype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageRequest::set_has_messagetype() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageRequest::clear_has_messagetype() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageRequest::clear_messagetype() {
  messagetype_ = 0;
  clear_has_messagetype();
}
 ::eCommunicationMessageType MessageRequest::messagetype() const {
  // @@protoc_insertion_point(field_get:MessageRequest.messageType)
  return static_cast< ::eCommunicationMessageType >(messagetype_);
}
 void MessageRequest::set_messagetype(::eCommunicationMessageType value) {
  assert(::eCommunicationMessageType_IsValid(value));
  set_has_messagetype();
  messagetype_ = value;
  // @@protoc_insertion_point(field_set:MessageRequest.messageType)
}

// required bytes messageBody = 2 [default = "\000"];
bool MessageRequest::has_messagebody() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageRequest::set_has_messagebody() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageRequest::clear_has_messagebody() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageRequest::clear_messagebody() {
  messagebody_.ClearToDefaultNoArena(_default_messagebody_);
  clear_has_messagebody();
}
 const ::std::string& MessageRequest::messagebody() const {
  // @@protoc_insertion_point(field_get:MessageRequest.messageBody)
  return messagebody_.GetNoArena(_default_messagebody_);
}
 void MessageRequest::set_messagebody(const ::std::string& value) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_, value);
  // @@protoc_insertion_point(field_set:MessageRequest.messageBody)
}
 void MessageRequest::set_messagebody(const char* value) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageRequest.messageBody)
}
 void MessageRequest::set_messagebody(const void* value, size_t size) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageRequest.messageBody)
}
 ::std::string* MessageRequest::mutable_messagebody() {
  set_has_messagebody();
  // @@protoc_insertion_point(field_mutable:MessageRequest.messageBody)
  return messagebody_.MutableNoArena(_default_messagebody_);
}
 ::std::string* MessageRequest::release_messagebody() {
  // @@protoc_insertion_point(field_release:MessageRequest.messageBody)
  clear_has_messagebody();
  return messagebody_.ReleaseNoArena(_default_messagebody_);
}
 void MessageRequest::set_allocated_messagebody(::std::string* messagebody) {
  if (messagebody != NULL) {
    set_has_messagebody();
  } else {
    clear_has_messagebody();
  }
  messagebody_.SetAllocatedNoArena(_default_messagebody_, messagebody);
  // @@protoc_insertion_point(field_set_allocated:MessageRequest.messageBody)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
