// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequest.proto

package ProtoMessages;

public final class MessageRequestBase {
  private MessageRequestBase() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MessageRequestOrBuilder extends
      // @@protoc_insertion_point(interface_extends:MessageRequest)
      com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    boolean hasMessageType();
    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType getMessageType();

    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    boolean hasMessageBody();
    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    com.google.protobuf.ByteString getMessageBody();
  }
  /**
   * Protobuf type {@code MessageRequest}
   */
  public  static final class MessageRequest extends
      com.google.protobuf.GeneratedMessageLite<
          MessageRequest, MessageRequest.Builder> implements
      // @@protoc_insertion_point(message_implements:MessageRequest)
      MessageRequestOrBuilder {
    private MessageRequest() {
      messageType_ = 0;
      messageBody_ = com.google.protobuf.Internal.bytesDefaultValue("\000");
    }
    private int bitField0_;
    public static final int MESSAGETYPE_FIELD_NUMBER = 1;
    private int messageType_;
    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    public boolean hasMessageType() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    public ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType getMessageType() {
      ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType result = ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType.forNumber(messageType_);
      return result == null ? ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType.cmtNone : result;
    }
    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    private void setMessageType(ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType value) {
      if (value == null) {
        throw new NullPointerException();
      }
      bitField0_ |= 0x00000001;
      messageType_ = value.getNumber();
    }
    /**
     * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
     */
    private void clearMessageType() {
      bitField0_ = (bitField0_ & ~0x00000001);
      messageType_ = 0;
    }

    public static final int MESSAGEBODY_FIELD_NUMBER = 2;
    private com.google.protobuf.ByteString messageBody_;
    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    public boolean hasMessageBody() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    public com.google.protobuf.ByteString getMessageBody() {
      return messageBody_;
    }
    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    private void setMessageBody(com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
      messageBody_ = value;
    }
    /**
     * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
     */
    private void clearMessageBody() {
      bitField0_ = (bitField0_ & ~0x00000002);
      messageBody_ = getDefaultInstance().getMessageBody();
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeEnum(1, messageType_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBytes(2, messageBody_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, messageType_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, messageBody_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestBase.MessageRequest parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }

    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ProtoMessages.MessageRequestBase.MessageRequest prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }

    /**
     * Protobuf type {@code MessageRequest}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          ProtoMessages.MessageRequestBase.MessageRequest, Builder> implements
        // @@protoc_insertion_point(builder_implements:MessageRequest)
        ProtoMessages.MessageRequestBase.MessageRequestOrBuilder {
      // Construct using ProtoMessages.MessageRequestBase.MessageRequest.newBuilder()
      private Builder() {
        super(DEFAULT_INSTANCE);
      }


      /**
       * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
       */
      public boolean hasMessageType() {
        return instance.hasMessageType();
      }
      /**
       * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
       */
      public ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType getMessageType() {
        return instance.getMessageType();
      }
      /**
       * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
       */
      public Builder setMessageType(ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType value) {
        copyOnWrite();
        instance.setMessageType(value);
        return this;
      }
      /**
       * <code>required .eCommunicationMessageType messageType = 1 [default = cmtNone];</code>
       */
      public Builder clearMessageType() {
        copyOnWrite();
        instance.clearMessageType();
        return this;
      }

      /**
       * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
       */
      public boolean hasMessageBody() {
        return instance.hasMessageBody();
      }
      /**
       * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
       */
      public com.google.protobuf.ByteString getMessageBody() {
        return instance.getMessageBody();
      }
      /**
       * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
       */
      public Builder setMessageBody(com.google.protobuf.ByteString value) {
        copyOnWrite();
        instance.setMessageBody(value);
        return this;
      }
      /**
       * <code>required bytes messageBody = 2 [default = "&#92;000"];</code>
       */
      public Builder clearMessageBody() {
        copyOnWrite();
        instance.clearMessageBody();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:MessageRequest)
    }
    private byte memoizedIsInitialized = -1;
    protected final Object dynamicMethod(
        com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
        Object arg0, Object arg1) {
      switch (method) {
        case NEW_MUTABLE_INSTANCE: {
          return new ProtoMessages.MessageRequestBase.MessageRequest();
        }
        case IS_INITIALIZED: {
          byte isInitialized = memoizedIsInitialized;
          if (isInitialized == 1) return DEFAULT_INSTANCE;
          if (isInitialized == 0) return null;

          boolean shouldMemoize = ((Boolean) arg0).booleanValue();
          if (!hasMessageType()) {
            if (shouldMemoize) {
              memoizedIsInitialized = 0;
            }
            return null;
          }
          if (!hasMessageBody()) {
            if (shouldMemoize) {
              memoizedIsInitialized = 0;
            }
            return null;
          }
          if (shouldMemoize) memoizedIsInitialized = 1;
          return DEFAULT_INSTANCE;

        }
        case MAKE_IMMUTABLE: {
          return null;
        }
        case NEW_BUILDER: {
          return new Builder();
        }
        case VISIT: {
          Visitor visitor = (Visitor) arg0;
          ProtoMessages.MessageRequestBase.MessageRequest other = (ProtoMessages.MessageRequestBase.MessageRequest) arg1;
          messageType_ = visitor.visitInt(hasMessageType(), messageType_,
              other.hasMessageType(), other.messageType_);
          messageBody_ = visitor.visitByteString(
              hasMessageBody(), messageBody_,
              other.hasMessageBody(), other.messageBody_);
          if (visitor == com.google.protobuf.GeneratedMessageLite.MergeFromVisitor
              .INSTANCE) {
            bitField0_ |= other.bitField0_;
          }
          return this;
        }
        case MERGE_FROM_STREAM: {
          com.google.protobuf.CodedInputStream input =
              (com.google.protobuf.CodedInputStream) arg0;
          com.google.protobuf.ExtensionRegistryLite extensionRegistry =
              (com.google.protobuf.ExtensionRegistryLite) arg1;
          try {
            boolean done = false;
            while (!done) {
              int tag = input.readTag();
              switch (tag) {
                case 0:
                  done = true;
                  break;
                default: {
                  if (!parseUnknownField(tag, input)) {
                    done = true;
                  }
                  break;
                }
                case 8: {
                  int rawValue = input.readEnum();
                  ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType value = ProtoMessages.CommunicationMessageTypeBase.eCommunicationMessageType.forNumber(rawValue);
                  if (value == null) {
                    super.mergeVarintField(1, rawValue);
                  } else {
                    bitField0_ |= 0x00000001;
                    messageType_ = rawValue;
                  }
                  break;
                }
                case 18: {
                  bitField0_ |= 0x00000002;
                  messageBody_ = input.readBytes();
                  break;
                }
              }
            }
          } catch (com.google.protobuf.InvalidProtocolBufferException e) {
            throw new RuntimeException(e.setUnfinishedMessage(this));
          } catch (java.io.IOException e) {
            throw new RuntimeException(
                new com.google.protobuf.InvalidProtocolBufferException(
                    e.getMessage()).setUnfinishedMessage(this));
          } finally {
          }
        }
        case GET_DEFAULT_INSTANCE: {
          return DEFAULT_INSTANCE;
        }
        case GET_PARSER: {
          if (PARSER == null) {    synchronized (ProtoMessages.MessageRequestBase.MessageRequest.class) {
              if (PARSER == null) {
                PARSER = new DefaultInstanceBasedParser(DEFAULT_INSTANCE);
              }
            }
          }
          return PARSER;
        }
      }
      throw new UnsupportedOperationException();
    }


    // @@protoc_insertion_point(class_scope:MessageRequest)
    private static final ProtoMessages.MessageRequestBase.MessageRequest DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new MessageRequest();
      DEFAULT_INSTANCE.makeImmutable();
    }

    public static ProtoMessages.MessageRequestBase.MessageRequest getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static volatile com.google.protobuf.Parser<MessageRequest> PARSER;

    public static com.google.protobuf.Parser<MessageRequest> parser() {
      return DEFAULT_INSTANCE.getParserForType();
    }
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
