/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.shapes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("Union")
public final class Union implements com.facebook.thrift.payload.ThriftSerializable {
    
    private static final boolean allowNullFieldValues =
        System.getProperty("thrift.union.allow-null-field-values", "false").equalsIgnoreCase("true");

    private static final TStruct STRUCT_DESC = new TStruct("Union");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final Union _DEFAULT = new Union();

    public static final int _INTVALUE = 1;
    private static final TField INT_VALUE_FIELD_DESC = new TField("intValue", TType.I64, (short)1);
    public static final int _STRINGVALUE = 5;
    private static final TField STRING_VALUE_FIELD_DESC = new TField("stringValue", TType.STRING, (short)5);

    static {
      NAMES_TO_IDS.put("intValue", 1);
      THRIFT_NAMES_TO_IDS.put("intValue", 1);
      FIELD_METADATA.put(1, INT_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("stringValue", 5);
      THRIFT_NAMES_TO_IDS.put("stringValue", 5);
      FIELD_METADATA.put(5, STRING_VALUE_FIELD_DESC);
    }

    private java.lang.Object value;
    private short id;

    public enum TypeEnum {
      INT_VALUE,
      STRING_VALUE,
    }

    public static Union from(int _id, java.lang.Object _field) {
        return from((short) _id, _field);
    }

    public static Union from(short _id, java.lang.Object _field) {
        java.util.Objects.requireNonNull(_field);
        if (!FIELD_METADATA.containsKey(Integer.valueOf(_id))) {
            throw new java.lang.IllegalArgumentException("unknown field " + _id);
        }

        Union _u = new  Union();

        try {
            switch(_id) {
                case 1:
                    _u.id = _id;
                    _u.value = (long) _field;
                    return _u;
                case 5:
                    _u.id = _id;
                    _u.value = (String) _field;
                    return _u;
                default:
                throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
            }
        } catch (java.lang.Exception t) {
            throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
        }
    }

    @ThriftConstructor
    public Union() {
    }
    
    @ThriftConstructor
    @Deprecated
    public Union(final long intValue) {
        this.value = intValue;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public Union(final String stringValue) {
        if (!Union.allowNullFieldValues && stringValue == null) {
            throw new TProtocolException("Cannot initialize Union field 'Union.stringValue' with null value!");
        }
        this.value = stringValue;
        this.id = 5;
    }
    
    public static Union fromIntValue(final long intValue) {
        Union res = new Union();
        res.value = intValue;
        res.id = 1;
        return res;
    }
    
    public static Union fromStringValue(final String stringValue) {
        Union res = new Union();
        if (!Union.allowNullFieldValues && stringValue == null) {
            throw new TProtocolException("Cannot initialize Union field 'Union.stringValue' with null value!");
        }
        res.value = stringValue;
        res.id = 5;
        return res;
    }
    

    @com.facebook.swift.codec.ThriftField(value=1, name="intValue", requiredness=Requiredness.NONE)
    public long getIntValue() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a intValue element!");
        }
        return (long) value;
    }

    public boolean isSetIntValue() {
        return this.id == 1;
    }

    @com.facebook.swift.codec.ThriftField(value=5, name="stringValue", requiredness=Requiredness.NONE)
    public String getStringValue() {
        if (this.id != 5) {
            throw new IllegalStateException("Not a stringValue element!");
        }
        return (String) value;
    }

    public boolean isSetStringValue() {
        return this.id == 5;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public TypeEnum getThriftUnionType() {
      switch(this.id) {
        case 1:
          return TypeEnum.INT_VALUE;
        case 5:
          return TypeEnum.STRING_VALUE;
        default:
          throw new IllegalStateException("unreachable");
      }
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public void accept(Visitor visitor) {
        if (isSetIntValue()) {
            visitor.visitIntValue(getIntValue());
            return;
        }
        if (isSetStringValue()) {
            visitor.visitStringValue(getStringValue());
            return;
        }
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        Union other = (Union)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitIntValue(long intValue);
        void visitStringValue(String stringValue);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
        if(allowNullFieldValues) {
          // Warning: this path will generate corrupt serialized data!
          return;
        } else {
          throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
        }
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _INTVALUE: {
        oprot.writeFieldBegin(INT_VALUE_FIELD_DESC);
        long intValue = (long)this.value;
        oprot.writeI64(intValue);
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGVALUE: {
        oprot.writeFieldBegin(STRING_VALUE_FIELD_DESC);
        String stringValue = (String)this.value;
        oprot.writeString(stringValue);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    
    public static com.facebook.thrift.payload.Reader<Union> asReader() {
      return Union::read0;
    }
    
    public static Union read0(TProtocol oprot) throws TException {
      Union res = new Union();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(Union.NAMES_TO_IDS, Union.THRIFT_NAMES_TO_IDS, Union.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _INTVALUE:
            if (__field.type == INT_VALUE_FIELD_DESC.type) {
              long intValue = oprot.readI64();
              res.value = intValue;
            }
            break;
          case _STRINGVALUE:
            if (__field.type == STRING_VALUE_FIELD_DESC.type) {
              String stringValue = oprot.readString();
              res.value = stringValue;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'Union' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static Union defaultInstance() {
        return _DEFAULT;
    }

}
