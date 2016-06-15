// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponsePong.proto

package ProtoMessages;

public final class MessageResponsePongBase {
  private MessageResponsePongBase() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MessageResponsePongOrBuilder extends
      // @@protoc_insertion_point(interface_extends:MessageResponsePong)
      com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    boolean hasSomeText();
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    java.lang.String getSomeText();
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    com.google.protobuf.ByteString
        getSomeTextBytes();
  }
  /**
   * Protobuf type {@code MessageResponsePong}
   */
  public  static final class MessageResponsePong extends
      com.google.protobuf.GeneratedMessageLite<
          MessageResponsePong, MessageResponsePong.Builder> implements
      // @@protoc_insertion_point(message_implements:MessageResponsePong)
      MessageResponsePongOrBuilder {
    private MessageResponsePong() {
      someText_ = "";
    }
    private int bitField0_;
    public static final int SOMETEXT_FIELD_NUMBER = 1;
    private java.lang.String someText_;
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    public boolean hasSomeText() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    public java.lang.String getSomeText() {
      return someText_;
    }
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    public com.google.protobuf.ByteString
        getSomeTextBytes() {
      return com.google.protobuf.ByteString.copyFromUtf8(someText_);
    }
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    private void setSomeText(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
      someText_ = value;
    }
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    private void clearSomeText() {
      bitField0_ = (bitField0_ & ~0x00000001);
      someText_ = getDefaultInstance().getSomeText();
    }
    /**
     * <code>required string someText = 1 [default = ""];</code>
     */
    private void setSomeTextBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
      someText_ = value.toStringUtf8();
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeString(1, getSomeText());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeStringSize(1, getSomeText());
      }
      size += unknownFields.getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }

    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ProtoMessages.MessageResponsePongBase.MessageResponsePong prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }

    /**
     * Protobuf type {@code MessageResponsePong}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          ProtoMessages.MessageResponsePongBase.MessageResponsePong, Builder> implements
        // @@protoc_insertion_point(builder_implements:MessageResponsePong)
        ProtoMessages.MessageResponsePongBase.MessageResponsePongOrBuilder {
      // Construct using ProtoMessages.MessageResponsePongBase.MessageResponsePong.newBuilder()
      private Builder() {
        super(DEFAULT_INSTANCE);
      }


      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public boolean hasSomeText() {
        return instance.hasSomeText();
      }
      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public java.lang.String getSomeText() {
        return instance.getSomeText();
      }
      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public com.google.protobuf.ByteString
          getSomeTextBytes() {
        return instance.getSomeTextBytes();
      }
      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public Builder setSomeText(
          java.lang.String value) {
        copyOnWrite();
        instance.setSomeText(value);
        return this;
      }
      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public Builder clearSomeText() {
        copyOnWrite();
        instance.clearSomeText();
        return this;
      }
      /**
       * <code>required string someText = 1 [default = ""];</code>
       */
      public Builder setSomeTextBytes(
          com.google.protobuf.ByteString value) {
        copyOnWrite();
        instance.setSomeTextBytes(value);
        return this;
      }

      // @@protoc_insertion_point(builder_scope:MessageResponsePong)
    }
    private byte memoizedIsInitialized = -1;
    protected final Object dynamicMethod(
        com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
        Object arg0, Object arg1) {
      switch (method) {
        case NEW_MUTABLE_INSTANCE: {
          return new ProtoMessages.MessageResponsePongBase.MessageResponsePong();
        }
        case IS_INITIALIZED: {
          byte isInitialized = memoizedIsInitialized;
          if (isInitialized == 1) return DEFAULT_INSTANCE;
          if (isInitialized == 0) return null;

          boolean shouldMemoize = ((Boolean) arg0).booleanValue();
          if (!hasSomeText()) {
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
          ProtoMessages.MessageResponsePongBase.MessageResponsePong other = (ProtoMessages.MessageResponsePongBase.MessageResponsePong) arg1;
          someText_ = visitor.visitString(
              hasSomeText(), someText_,
              other.hasSomeText(), other.someText_);
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
                case 10: {
                  String s = input.readString();
                  bitField0_ |= 0x00000001;
                  someText_ = s;
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
          if (PARSER == null) {    synchronized (ProtoMessages.MessageResponsePongBase.MessageResponsePong.class) {
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


    // @@protoc_insertion_point(class_scope:MessageResponsePong)
    private static final ProtoMessages.MessageResponsePongBase.MessageResponsePong DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new MessageResponsePong();
      DEFAULT_INSTANCE.makeImmutable();
    }

    public static ProtoMessages.MessageResponsePongBase.MessageResponsePong getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static volatile com.google.protobuf.Parser<MessageResponsePong> PARSER;

    public static com.google.protobuf.Parser<MessageResponsePong> parser() {
      return DEFAULT_INSTANCE.getParserForType();
    }
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
