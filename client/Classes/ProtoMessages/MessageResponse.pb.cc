// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageResponse.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageResponse_2eproto() {
  delete MessageResponse::default_instance_;
  delete MessageResponse::_default_messagebody_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageResponse_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_CommunicationMessageType_2eproto();
  MessageResponse::_default_messagebody_ =
      new ::std::string("\000", 1);
  MessageResponse::default_instance_ = new MessageResponse();
  MessageResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageResponse_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageResponse_2eproto_once_);
void protobuf_AddDesc_MessageResponse_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageResponse_2eproto_once_,
                 &protobuf_AddDesc_MessageResponse_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageResponse_2eproto {
  StaticDescriptorInitializer_MessageResponse_2eproto() {
    protobuf_AddDesc_MessageResponse_2eproto();
  }
} static_descriptor_initializer_MessageResponse_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

::std::string* MessageResponse::_default_messagebody_ = NULL;
#ifndef _MSC_VER
const int MessageResponse::kMessageTypeFieldNumber;
const int MessageResponse::kMessageBodyFieldNumber;
const int MessageResponse::kErrorCodeFieldNumber;
#endif  // !_MSC_VER

MessageResponse::MessageResponse()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResponse)
}

void MessageResponse::InitAsDefaultInstance() {
}

MessageResponse::MessageResponse(const MessageResponse& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageResponse)
}

void MessageResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  messagetype_ = 0;
  messagebody_.UnsafeSetDefault(_default_messagebody_);
  errorcode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageResponse::~MessageResponse() {
  // @@protoc_insertion_point(destructor:MessageResponse)
  SharedDtor();
}

void MessageResponse::SharedDtor() {
  messagebody_.DestroyNoArena(_default_messagebody_);
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageResponse& MessageResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageResponse_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageResponse_2eproto();
#endif
  return *default_instance_;
}

MessageResponse* MessageResponse::default_instance_ = NULL;

MessageResponse* MessageResponse::New(::google::protobuf::Arena* arena) const {
  MessageResponse* n = new MessageResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResponse::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageResponse*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(messagetype_, errorcode_);
    if (has_messagebody()) {
      messagebody_.ClearToDefaultNoArena(_default_messagebody_);
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool MessageResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:MessageResponse)
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
            unknown_fields_stream.WriteVarint32(tag);
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
        if (input->ExpectTag(24)) goto parse_errorCode;
        break;
      }

      // required int32 errorCode = 3 [default = 0];
      case 3: {
        if (tag == 24) {
         parse_errorCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &errorcode_)));
          set_has_errorcode();
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
  // @@protoc_insertion_point(parse_success:MessageResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResponse)
  return false;
#undef DO_
}

void MessageResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResponse)
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

  // required int32 errorCode = 3 [default = 0];
  if (has_errorcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->errorcode(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:MessageResponse)
}

int MessageResponse::RequiredFieldsByteSizeFallback() const {
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

  if (has_errorcode()) {
    // required int32 errorCode = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->errorcode());
  }

  return total_size;
}
int MessageResponse::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .eCommunicationMessageType messageType = 1 [default = cmtNone];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->messagetype());

    // required bytes messageBody = 2 [default = "\000"];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->messagebody());

    // required int32 errorCode = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->errorcode());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageResponse*>(&from));
}

void MessageResponse::MergeFrom(const MessageResponse& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_messagetype()) {
      set_messagetype(from.messagetype());
    }
    if (from.has_messagebody()) {
      set_has_messagebody();
      messagebody_.AssignWithDefault(_default_messagebody_, from.messagebody_);
    }
    if (from.has_errorcode()) {
      set_errorcode(from.errorcode());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void MessageResponse::CopyFrom(const MessageResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MessageResponse::Swap(MessageResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResponse::InternalSwap(MessageResponse* other) {
  std::swap(messagetype_, other->messagetype_);
  messagebody_.Swap(&other->messagebody_);
  std::swap(errorcode_, other->errorcode_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.swap(other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageResponse::GetTypeName() const {
  return "MessageResponse";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponse

// required .eCommunicationMessageType messageType = 1 [default = cmtNone];
bool MessageResponse::has_messagetype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResponse::set_has_messagetype() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResponse::clear_has_messagetype() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResponse::clear_messagetype() {
  messagetype_ = 0;
  clear_has_messagetype();
}
 ::eCommunicationMessageType MessageResponse::messagetype() const {
  // @@protoc_insertion_point(field_get:MessageResponse.messageType)
  return static_cast< ::eCommunicationMessageType >(messagetype_);
}
 void MessageResponse::set_messagetype(::eCommunicationMessageType value) {
  assert(::eCommunicationMessageType_IsValid(value));
  set_has_messagetype();
  messagetype_ = value;
  // @@protoc_insertion_point(field_set:MessageResponse.messageType)
}

// required bytes messageBody = 2 [default = "\000"];
bool MessageResponse::has_messagebody() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageResponse::set_has_messagebody() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageResponse::clear_has_messagebody() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageResponse::clear_messagebody() {
  messagebody_.ClearToDefaultNoArena(_default_messagebody_);
  clear_has_messagebody();
}
 const ::std::string& MessageResponse::messagebody() const {
  // @@protoc_insertion_point(field_get:MessageResponse.messageBody)
  return messagebody_.GetNoArena(_default_messagebody_);
}
 void MessageResponse::set_messagebody(const ::std::string& value) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_, value);
  // @@protoc_insertion_point(field_set:MessageResponse.messageBody)
}
 void MessageResponse::set_messagebody(const char* value) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageResponse.messageBody)
}
 void MessageResponse::set_messagebody(const void* value, size_t size) {
  set_has_messagebody();
  messagebody_.SetNoArena(_default_messagebody_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageResponse.messageBody)
}
 ::std::string* MessageResponse::mutable_messagebody() {
  set_has_messagebody();
  // @@protoc_insertion_point(field_mutable:MessageResponse.messageBody)
  return messagebody_.MutableNoArena(_default_messagebody_);
}
 ::std::string* MessageResponse::release_messagebody() {
  clear_has_messagebody();
  return messagebody_.ReleaseNoArena(_default_messagebody_);
}
 void MessageResponse::set_allocated_messagebody(::std::string* messagebody) {
  if (messagebody != NULL) {
    set_has_messagebody();
  } else {
    clear_has_messagebody();
  }
  messagebody_.SetAllocatedNoArena(_default_messagebody_, messagebody);
  // @@protoc_insertion_point(field_set_allocated:MessageResponse.messageBody)
}

// required int32 errorCode = 3 [default = 0];
bool MessageResponse::has_errorcode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageResponse::set_has_errorcode() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageResponse::clear_has_errorcode() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageResponse::clear_errorcode() {
  errorcode_ = 0;
  clear_has_errorcode();
}
 ::google::protobuf::int32 MessageResponse::errorcode() const {
  // @@protoc_insertion_point(field_get:MessageResponse.errorCode)
  return errorcode_;
}
 void MessageResponse::set_errorcode(::google::protobuf::int32 value) {
  set_has_errorcode();
  errorcode_ = value;
  // @@protoc_insertion_point(field_set:MessageResponse.errorCode)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)