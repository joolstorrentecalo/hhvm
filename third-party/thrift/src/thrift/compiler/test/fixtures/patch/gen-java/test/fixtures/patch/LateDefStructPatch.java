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
@com.facebook.swift.codec.ThriftStruct(value="LateDefStructPatch", builder=LateDefStructPatch.Builder.class)
public final class LateDefStructPatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public LateDefStructPatch(
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL) final test.fixtures.patch.LateDefStruct assign,
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.TERSE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.TERSE) final test.fixtures.patch.LateDefStructFieldPatch patchPrior,
        @com.facebook.swift.codec.ThriftField(value=5, name="ensure", requiredness=Requiredness.NONE) final test.fixtures.patch.LateDefStruct ensure,
        @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.TERSE) final test.fixtures.patch.LateDefStructFieldPatch patch
    ) {
        this.assign = assign;
        this.clear = clear;
        this.patchPrior = patchPrior;
        this.ensure = ensure;
        this.patch = patch;
    }
    
    @ThriftConstructor
    protected LateDefStructPatch() {
      this.assign = null;
      this.clear = false;
      this.patchPrior = test.fixtures.patch.LateDefStructFieldPatch.defaultInstance();
      this.ensure = null;
      this.patch = test.fixtures.patch.LateDefStructFieldPatch.defaultInstance();
    }
    
    public static class Builder {
    
        private test.fixtures.patch.LateDefStruct assign = null;
        private boolean clear = false;
        private test.fixtures.patch.LateDefStructFieldPatch patchPrior = test.fixtures.patch.LateDefStructFieldPatch.defaultInstance();
        private test.fixtures.patch.LateDefStruct ensure = null;
        private test.fixtures.patch.LateDefStructFieldPatch patch = test.fixtures.patch.LateDefStructFieldPatch.defaultInstance();
    
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
        public Builder setAssign(test.fixtures.patch.LateDefStruct assign) {
            this.assign = assign;
            return this;
        }
    
        public test.fixtures.patch.LateDefStruct getAssign() { return assign; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.TERSE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.TERSE)
        public Builder setPatchPrior(test.fixtures.patch.LateDefStructFieldPatch patchPrior) {
            this.patchPrior = patchPrior;
            return this;
        }
    
        public test.fixtures.patch.LateDefStructFieldPatch getPatchPrior() { return patchPrior; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="ensure", requiredness=Requiredness.NONE)
        public Builder setEnsure(test.fixtures.patch.LateDefStruct ensure) {
            this.ensure = ensure;
            return this;
        }
    
        public test.fixtures.patch.LateDefStruct getEnsure() { return ensure; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.TERSE)
        public Builder setPatch(test.fixtures.patch.LateDefStructFieldPatch patch) {
            this.patch = patch;
            return this;
        }
    
        public test.fixtures.patch.LateDefStructFieldPatch getPatch() { return patch; }
    
        public Builder() { }
        public Builder(LateDefStructPatch other) {
            this.assign = other.assign;
            this.clear = other.clear;
            this.patchPrior = other.patchPrior;
            this.ensure = other.ensure;
            this.patch = other.patch;
        }
    
        @ThriftConstructor
        public LateDefStructPatch build() {
            LateDefStructPatch result = new LateDefStructPatch (
                this.assign,
                this.clear,
                this.patchPrior,
                this.ensure,
                this.patch
            );
            return result;
        }
    }
        
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("LateDefStructPatch");
    private final test.fixtures.patch.LateDefStruct assign;
    public static final int _ASSIGN = 1;
    private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.STRUCT, (short)1);
        private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final test.fixtures.patch.LateDefStructFieldPatch patchPrior;
    public static final int _PATCHPRIOR = 3;
    private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.STRUCT, (short)3);
        private final test.fixtures.patch.LateDefStruct ensure;
    public static final int _ENSURE = 5;
    private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.STRUCT, (short)5);
        private final test.fixtures.patch.LateDefStructFieldPatch patch;
    public static final int _PATCH = 6;
    private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)6);
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
      NAMES_TO_IDS.put("ensure", 5);
      THRIFT_NAMES_TO_IDS.put("ensure", 5);
      FIELD_METADATA.put(5, ENSURE_FIELD_DESC);
      NAMES_TO_IDS.put("patch", 6);
      THRIFT_NAMES_TO_IDS.put("patch", 6);
      FIELD_METADATA.put(6, PATCH_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/LateDefStructPatch"), 
        LateDefStructPatch.class, LateDefStructPatch::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.patch.LateDefStruct getAssign() { return assign; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.TERSE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.TERSE)
    public test.fixtures.patch.LateDefStructFieldPatch getPatchPrior() { return patchPrior; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="ensure", requiredness=Requiredness.NONE)
    public test.fixtures.patch.LateDefStruct getEnsure() { return ensure; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=6, name="patch", requiredness=Requiredness.TERSE)
    public test.fixtures.patch.LateDefStructFieldPatch getPatch() { return patch; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("assign", assign);
        helper.add("clear", clear);
        helper.add("patchPrior", patchPrior);
        helper.add("ensure", ensure);
        helper.add("patch", patch);
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
    
        LateDefStructPatch other = (LateDefStructPatch)o;
    
        return
            Objects.equals(assign, other.assign) &&
            Objects.equals(clear, other.clear) &&
            Objects.equals(patchPrior, other.patchPrior) &&
            Objects.equals(ensure, other.ensure) &&
            Objects.equals(patch, other.patch) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            assign,
            clear,
            patchPrior,
            ensure,
            patch
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<LateDefStructPatch> asReader() {
      return LateDefStructPatch::read0;
    }
    
    public static LateDefStructPatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(LateDefStructPatch.NAMES_TO_IDS, LateDefStructPatch.THRIFT_NAMES_TO_IDS, LateDefStructPatch.FIELD_METADATA);
      LateDefStructPatch.Builder builder = new LateDefStructPatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _ASSIGN:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.LateDefStruct assign = test.fixtures.patch.LateDefStruct.read0(oprot);
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
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.LateDefStructFieldPatch patchPrior = test.fixtures.patch.LateDefStructFieldPatch.read0(oprot);
            builder.setPatchPrior(patchPrior);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ENSURE:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.LateDefStruct ensure = test.fixtures.patch.LateDefStruct.read0(oprot);
            builder.setEnsure(ensure);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCH:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.LateDefStructFieldPatch patch = test.fixtures.patch.LateDefStructFieldPatch.read0(oprot);
            builder.setPatch(patch);
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
      int structStart = 0;
      int pos = 0;
      com.facebook.thrift.protocol.ByteBufTProtocol p = (com.facebook.thrift.protocol.ByteBufTProtocol) oprot;
      if (assign != null) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        this.assign.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (!com.facebook.thrift.util.IntrinsicDefaults.isDefault(clear)) {
        oprot.writeFieldBegin(CLEAR_FIELD_DESC);
        oprot.writeBool(this.clear);
        oprot.writeFieldEnd();
      };
      java.util.Objects.requireNonNull(patchPrior, "patchPrior must not be null");
      structStart = p.mark();
        oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
        pos = p.mark();
        this.patchPrior.write0(oprot);
        if (p.mark() - pos > p.getEmptyStructSize()) {
          p.writeFieldEnd();    
        } else {
          p.rollback(structStart);
        }    
      if (ensure != null) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        this.ensure.write0(oprot);
        oprot.writeFieldEnd();
      }
      java.util.Objects.requireNonNull(patch, "patch must not be null");
      structStart = p.mark();
        oprot.writeFieldBegin(PATCH_FIELD_DESC);
        pos = p.mark();
        this.patch.write0(oprot);
        if (p.mark() - pos > p.getEmptyStructSize()) {
          p.writeFieldEnd();    
        } else {
          p.rollback(structStart);
        }    
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _LateDefStructPatchLazy {
        private static final LateDefStructPatch _DEFAULT = new LateDefStructPatch.Builder().build();
    }
    
    public static LateDefStructPatch defaultInstance() {
        return  _LateDefStructPatchLazy._DEFAULT;
    }
}
