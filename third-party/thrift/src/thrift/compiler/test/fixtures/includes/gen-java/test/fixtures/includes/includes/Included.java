/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.includes.includes;

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
@com.facebook.swift.codec.ThriftStruct(value="Included", builder=Included.Builder.class)
public final class Included implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public Included(
        @com.facebook.swift.codec.ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE) final long myIntField,
        @com.facebook.swift.codec.ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE) final test.fixtures.includes.transitive.Foo myTransitiveField
    ) {
        this.myIntField = myIntField;
        this.myTransitiveField = myTransitiveField;
    }
    
    @ThriftConstructor
    protected Included() {
      this.myIntField = 0L;
      this.myTransitiveField = new test.fixtures.includes.transitive.Foo.Builder().setA(2L).build();
    }
    
    public static class Builder {
    
        private long myIntField = 0L;
        private test.fixtures.includes.transitive.Foo myTransitiveField = new test.fixtures.includes.transitive.Foo.Builder().setA(2L).build();
    
        @com.facebook.swift.codec.ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE)
        public Builder setMyIntField(long myIntField) {
            this.myIntField = myIntField;
            return this;
        }
    
        public long getMyIntField() { return myIntField; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE)
        public Builder setMyTransitiveField(test.fixtures.includes.transitive.Foo myTransitiveField) {
            this.myTransitiveField = myTransitiveField;
            return this;
        }
    
        public test.fixtures.includes.transitive.Foo getMyTransitiveField() { return myTransitiveField; }
    
        public Builder() { }
        public Builder(Included other) {
            this.myIntField = other.myIntField;
            this.myTransitiveField = other.myTransitiveField;
        }
    
        @ThriftConstructor
        public Included build() {
            Included result = new Included (
                this.myIntField,
                this.myTransitiveField
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("Included");
    private final long myIntField;
    public static final int _MYINTFIELD = 1;
    private static final TField MY_INT_FIELD_FIELD_DESC = new TField("MyIntField", TType.I64, (short)1);
        private final test.fixtures.includes.transitive.Foo myTransitiveField;
    public static final int _MYTRANSITIVEFIELD = 2;
    private static final TField MY_TRANSITIVE_FIELD_FIELD_DESC = new TField("MyTransitiveField", TType.STRUCT, (short)2);
    static {
      NAMES_TO_IDS.put("myIntField", 1);
      THRIFT_NAMES_TO_IDS.put("MyIntField", 1);
      FIELD_METADATA.put(1, MY_INT_FIELD_FIELD_DESC);
      NAMES_TO_IDS.put("myTransitiveField", 2);
      THRIFT_NAMES_TO_IDS.put("MyTransitiveField", 2);
      FIELD_METADATA.put(2, MY_TRANSITIVE_FIELD_FIELD_DESC);
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE)
    public long getMyIntField() { return myIntField; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE)
    public test.fixtures.includes.transitive.Foo getMyTransitiveField() { return myTransitiveField; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("myIntField", myIntField);
        helper.add("myTransitiveField", myTransitiveField);
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
    
        Included other = (Included)o;
    
        return
            Objects.equals(myIntField, other.myIntField) &&
            Objects.equals(myTransitiveField, other.myTransitiveField) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            myIntField,
            myTransitiveField
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<Included> asReader() {
      return Included::read0;
    }
    
    public static Included read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(Included.NAMES_TO_IDS, Included.THRIFT_NAMES_TO_IDS, Included.FIELD_METADATA);
      Included.Builder builder = new Included.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _MYINTFIELD:
          if (__field.type == TType.I64) {
            long myIntField = oprot.readI64();
            builder.setMyIntField(myIntField);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _MYTRANSITIVEFIELD:
          if (__field.type == TType.STRUCT) {
            test.fixtures.includes.transitive.Foo myTransitiveField = test.fixtures.includes.transitive.Foo.read0(oprot);
            builder.setMyTransitiveField(myTransitiveField);
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
      oprot.writeFieldBegin(MY_INT_FIELD_FIELD_DESC);
      oprot.writeI64(this.myIntField);
      oprot.writeFieldEnd();
      if (myTransitiveField != null) {
        oprot.writeFieldBegin(MY_TRANSITIVE_FIELD_FIELD_DESC);
        this.myTransitiveField.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _IncludedLazy {
        private static final Included _DEFAULT = new Included.Builder().build();
    }
    
    public static Included defaultInstance() {
        return  _IncludedLazy._DEFAULT;
    }
}
