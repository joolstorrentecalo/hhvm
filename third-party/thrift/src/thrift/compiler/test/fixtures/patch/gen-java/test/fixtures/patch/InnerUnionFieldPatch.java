/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="InnerUnionFieldPatch", builder=InnerUnionFieldPatch.Builder.class)
public final class InnerUnionFieldPatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public InnerUnionFieldPatch(
        @com.facebook.swift.codec.ThriftField(value=1, name="innerOption", requiredness=Requiredness.NONE) final com.facebook.thrift.op.BinaryPatch innerOption
    ) {
        this.innerOption = innerOption;
    }
    
    @ThriftConstructor
    protected InnerUnionFieldPatch() {
      this.innerOption = null;
    }
    
    public static class Builder {
    
        private com.facebook.thrift.op.BinaryPatch innerOption = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="innerOption", requiredness=Requiredness.NONE)
        public Builder setInnerOption(com.facebook.thrift.op.BinaryPatch innerOption) {
            this.innerOption = innerOption;
            return this;
        }
    
        public com.facebook.thrift.op.BinaryPatch getInnerOption() { return innerOption; }
    
        public Builder() { }
        public Builder(InnerUnionFieldPatch other) {
            this.innerOption = other.innerOption;
        }
    
        @ThriftConstructor
        public InnerUnionFieldPatch build() {
            InnerUnionFieldPatch result = new InnerUnionFieldPatch (
                this.innerOption
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("InnerUnionFieldPatch");
    private final com.facebook.thrift.op.BinaryPatch innerOption;
    public static final int _INNEROPTION = 1;
    private static final TField INNER_OPTION_FIELD_DESC = new TField("innerOption", TType.STRUCT, (short)1);
    static {
      NAMES_TO_IDS.put("innerOption", 1);
      THRIFT_NAMES_TO_IDS.put("innerOption", 1);
      FIELD_METADATA.put(1, INNER_OPTION_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/InnerUnionFieldPatch"), 
        InnerUnionFieldPatch.class, InnerUnionFieldPatch::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="innerOption", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.BinaryPatch getInnerOption() { return innerOption; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("innerOption", innerOption);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        InnerUnionFieldPatch other = (InnerUnionFieldPatch)o;
    
        return
            Objects.equals(innerOption, other.innerOption) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            innerOption
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<InnerUnionFieldPatch> asReader() {
      return InnerUnionFieldPatch::read0;
    }
    
    public static InnerUnionFieldPatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(InnerUnionFieldPatch.NAMES_TO_IDS, InnerUnionFieldPatch.THRIFT_NAMES_TO_IDS, InnerUnionFieldPatch.FIELD_METADATA);
      InnerUnionFieldPatch.Builder builder = new InnerUnionFieldPatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _INNEROPTION:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.BinaryPatch innerOption = com.facebook.thrift.op.BinaryPatch.read0(oprot);
            builder.setInnerOption(innerOption);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (innerOption != null) {
        oprot.writeFieldBegin(INNER_OPTION_FIELD_DESC);
        this.innerOption.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _InnerUnionFieldPatchLazy {
        private static final InnerUnionFieldPatch _DEFAULT = new InnerUnionFieldPatch.Builder().build();
    }
    
    public static InnerUnionFieldPatch defaultInstance() {
        return  _InnerUnionFieldPatchLazy._DEFAULT;
    }
}
