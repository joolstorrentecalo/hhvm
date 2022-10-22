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
@com.facebook.swift.codec.ThriftStruct(value="MyStructField32Patch1", builder=MyStructField32Patch1.Builder.class)
public final class MyStructField32Patch1 implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyStructField32Patch1(
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL) final Map<String, Integer> assign,
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE) final Map<String, com.facebook.thrift.op.I32Patch> patchPrior,
        @com.facebook.swift.codec.ThriftField(value=5, name="add", requiredness=Requiredness.NONE) final Map<String, Integer> add,
        @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.NONE) final Map<String, com.facebook.thrift.op.I32Patch> patch,
        @com.facebook.swift.codec.ThriftField(value=7, name="remove", requiredness=Requiredness.NONE) final Set<String> remove,
        @com.facebook.swift.codec.ThriftField(value=9, name="put", requiredness=Requiredness.NONE) final Map<String, Integer> put
    ) {
        this.assign = assign;
        this.clear = clear;
        this.patchPrior = patchPrior;
        this.add = add;
        this.patch = patch;
        this.remove = remove;
        this.put = put;
    }
    
    @ThriftConstructor
    protected MyStructField32Patch1() {
      this.assign = null;
      this.clear = false;
      this.patchPrior = null;
      this.add = null;
      this.patch = null;
      this.remove = null;
      this.put = null;
    }
    
    public static class Builder {
    
        private Map<String, Integer> assign = null;
        private boolean clear = false;
        private Map<String, com.facebook.thrift.op.I32Patch> patchPrior = null;
        private Map<String, Integer> add = null;
        private Map<String, com.facebook.thrift.op.I32Patch> patch = null;
        private Set<String> remove = null;
        private Map<String, Integer> put = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
        public Builder setAssign(Map<String, Integer> assign) {
            this.assign = assign;
            return this;
        }
    
        public Map<String, Integer> getAssign() { return assign; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE)
        public Builder setPatchPrior(Map<String, com.facebook.thrift.op.I32Patch> patchPrior) {
            this.patchPrior = patchPrior;
            return this;
        }
    
        public Map<String, com.facebook.thrift.op.I32Patch> getPatchPrior() { return patchPrior; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="add", requiredness=Requiredness.NONE)
        public Builder setAdd(Map<String, Integer> add) {
            this.add = add;
            return this;
        }
    
        public Map<String, Integer> getAdd() { return add; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.NONE)
        public Builder setPatch(Map<String, com.facebook.thrift.op.I32Patch> patch) {
            this.patch = patch;
            return this;
        }
    
        public Map<String, com.facebook.thrift.op.I32Patch> getPatch() { return patch; }
    
            @com.facebook.swift.codec.ThriftField(value=7, name="remove", requiredness=Requiredness.NONE)
        public Builder setRemove(Set<String> remove) {
            this.remove = remove;
            return this;
        }
    
        public Set<String> getRemove() { return remove; }
    
            @com.facebook.swift.codec.ThriftField(value=9, name="put", requiredness=Requiredness.NONE)
        public Builder setPut(Map<String, Integer> put) {
            this.put = put;
            return this;
        }
    
        public Map<String, Integer> getPut() { return put; }
    
        public Builder() { }
        public Builder(MyStructField32Patch1 other) {
            this.assign = other.assign;
            this.clear = other.clear;
            this.patchPrior = other.patchPrior;
            this.add = other.add;
            this.patch = other.patch;
            this.remove = other.remove;
            this.put = other.put;
        }
    
        @ThriftConstructor
        public MyStructField32Patch1 build() {
            MyStructField32Patch1 result = new MyStructField32Patch1 (
                this.assign,
                this.clear,
                this.patchPrior,
                this.add,
                this.patch,
                this.remove,
                this.put
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStructField32Patch1");
    private final Map<String, Integer> assign;
    public static final int _ASSIGN = 1;
    private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.MAP, (short)1);
        private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final Map<String, com.facebook.thrift.op.I32Patch> patchPrior;
    public static final int _PATCHPRIOR = 3;
    private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.MAP, (short)3);
        private final Map<String, Integer> add;
    public static final int _ADD = 5;
    private static final TField ADD_FIELD_DESC = new TField("add", TType.MAP, (short)5);
        private final Map<String, com.facebook.thrift.op.I32Patch> patch;
    public static final int _PATCH = 6;
    private static final TField PATCH_FIELD_DESC = new TField("patch", TType.MAP, (short)6);
        private final Set<String> remove;
    public static final int _REMOVE = 7;
    private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.SET, (short)7);
        private final Map<String, Integer> put;
    public static final int _PUT = 9;
    private static final TField PUT_FIELD_DESC = new TField("put", TType.MAP, (short)9);
    static {
      NAMES_TO_IDS.put("assign", 1);
      THRIFT_NAMES_TO_IDS.put("assign", 1);
      FIELD_METADATA.put(1, ASSIGN_FIELD_DESC);
      NAMES_TO_IDS.put("clear", 2);
      THRIFT_NAMES_TO_IDS.put("clear", 2);
      FIELD_METADATA.put(2, CLEAR_FIELD_DESC);
      NAMES_TO_IDS.put("patchPrior", 3);
      THRIFT_NAMES_TO_IDS.put("patchPrior", 3);
      FIELD_METADATA.put(3, PATCH_PRIOR_FIELD_DESC);
      NAMES_TO_IDS.put("add", 5);
      THRIFT_NAMES_TO_IDS.put("add", 5);
      FIELD_METADATA.put(5, ADD_FIELD_DESC);
      NAMES_TO_IDS.put("patch", 6);
      THRIFT_NAMES_TO_IDS.put("patch", 6);
      FIELD_METADATA.put(6, PATCH_FIELD_DESC);
      NAMES_TO_IDS.put("remove", 7);
      THRIFT_NAMES_TO_IDS.put("remove", 7);
      FIELD_METADATA.put(7, REMOVE_FIELD_DESC);
      NAMES_TO_IDS.put("put", 9);
      THRIFT_NAMES_TO_IDS.put("put", 9);
      FIELD_METADATA.put(9, PUT_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/MyStructField32Patch1"), 
        MyStructField32Patch1.class, MyStructField32Patch1::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
    public Map<String, Integer> getAssign() { return assign; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE)
    public Map<String, com.facebook.thrift.op.I32Patch> getPatchPrior() { return patchPrior; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="add", requiredness=Requiredness.NONE)
    public Map<String, Integer> getAdd() { return add; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.NONE)
    public Map<String, com.facebook.thrift.op.I32Patch> getPatch() { return patch; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=7, name="remove", requiredness=Requiredness.NONE)
    public Set<String> getRemove() { return remove; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=9, name="put", requiredness=Requiredness.NONE)
    public Map<String, Integer> getPut() { return put; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("assign", assign);
        helper.add("clear", clear);
        helper.add("patchPrior", patchPrior);
        helper.add("add", add);
        helper.add("patch", patch);
        helper.add("remove", remove);
        helper.add("put", put);
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
    
        MyStructField32Patch1 other = (MyStructField32Patch1)o;
    
        return
            Objects.equals(assign, other.assign) &&
            Objects.equals(clear, other.clear) &&
            Objects.equals(patchPrior, other.patchPrior) &&
            Objects.equals(add, other.add) &&
            Objects.equals(patch, other.patch) &&
            Objects.equals(remove, other.remove) &&
            Objects.equals(put, other.put) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            assign,
            clear,
            patchPrior,
            add,
            patch,
            remove,
            put
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyStructField32Patch1> asReader() {
      return MyStructField32Patch1::read0;
    }
    
    public static MyStructField32Patch1 read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStructField32Patch1.NAMES_TO_IDS, MyStructField32Patch1.THRIFT_NAMES_TO_IDS, MyStructField32Patch1.FIELD_METADATA);
      MyStructField32Patch1.Builder builder = new MyStructField32Patch1.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _ASSIGN:
          if (__field.type == TType.MAP) {
            Map<String, Integer> assign;
            {
            TMap _map = oprot.readMapBegin();
            assign = new HashMap<String, Integer>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                int _value1 = oprot.readI32();
                assign.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setAssign(assign);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _CLEAR:
          if (__field.type == TType.BOOL) {
            boolean clear = oprot.readBool();
            builder.setClear(clear);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCHPRIOR:
          if (__field.type == TType.MAP) {
            Map<String, com.facebook.thrift.op.I32Patch> patchPrior;
            {
            TMap _map = oprot.readMapBegin();
            patchPrior = new HashMap<String, com.facebook.thrift.op.I32Patch>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                com.facebook.thrift.op.I32Patch _value1 = com.facebook.thrift.op.I32Patch.read0(oprot);
                patchPrior.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setPatchPrior(patchPrior);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ADD:
          if (__field.type == TType.MAP) {
            Map<String, Integer> add;
            {
            TMap _map = oprot.readMapBegin();
            add = new HashMap<String, Integer>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                int _value1 = oprot.readI32();
                add.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setAdd(add);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCH:
          if (__field.type == TType.MAP) {
            Map<String, com.facebook.thrift.op.I32Patch> patch;
            {
            TMap _map = oprot.readMapBegin();
            patch = new HashMap<String, com.facebook.thrift.op.I32Patch>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                com.facebook.thrift.op.I32Patch _value1 = com.facebook.thrift.op.I32Patch.read0(oprot);
                patch.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setPatch(patch);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REMOVE:
          if (__field.type == TType.SET) {
            Set<String> remove;
            {
            TSet _set = oprot.readSetBegin();
            remove = new HashSet<String>(Math.max(0, _set.size));
            for (int _i = 0; (_set.size < 0) ? oprot.peekSet() : (_i < _set.size); _i++) {
                
                String _value1 = oprot.readString();
                remove.add(_value1);
            }
            oprot.readSetEnd();
            }
            builder.setRemove(remove);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PUT:
          if (__field.type == TType.MAP) {
            Map<String, Integer> put;
            {
            TMap _map = oprot.readMapBegin();
            put = new HashMap<String, Integer>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                int _value1 = oprot.readI32();
                put.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setPut(put);
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
      if (assign != null) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        Map<String, Integer> _iter0 = assign;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.I32, _iter0.size()));
        for (Map.Entry<String, Integer> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeI32(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
      if (patchPrior != null) {
        oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
        Map<String, com.facebook.thrift.op.I32Patch> _iter0 = patchPrior;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRUCT, _iter0.size()));
        for (Map.Entry<String, com.facebook.thrift.op.I32Patch> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          _iter1.getValue().write0(oprot);
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (add != null) {
        oprot.writeFieldBegin(ADD_FIELD_DESC);
        Map<String, Integer> _iter0 = add;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.I32, _iter0.size()));
        for (Map.Entry<String, Integer> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeI32(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (patch != null) {
        oprot.writeFieldBegin(PATCH_FIELD_DESC);
        Map<String, com.facebook.thrift.op.I32Patch> _iter0 = patch;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRUCT, _iter0.size()));
        for (Map.Entry<String, com.facebook.thrift.op.I32Patch> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          _iter1.getValue().write0(oprot);
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (remove != null) {
        oprot.writeFieldBegin(REMOVE_FIELD_DESC);
        Set<String> _iter0 = remove;
        oprot.writeSetBegin(new TSet(TType.STRING, _iter0.size()));
        for (String _iter1 : _iter0) {
          oprot.writeString(_iter1);
        }
        oprot.writeSetEnd();
        oprot.writeFieldEnd();
      }
      if (put != null) {
        oprot.writeFieldBegin(PUT_FIELD_DESC);
        Map<String, Integer> _iter0 = put;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.I32, _iter0.size()));
        for (Map.Entry<String, Integer> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeI32(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _MyStructField32Patch1Lazy {
        private static final MyStructField32Patch1 _DEFAULT = new MyStructField32Patch1.Builder().build();
    }
    
    public static MyStructField32Patch1 defaultInstance() {
        return  _MyStructField32Patch1Lazy._DEFAULT;
    }
}
