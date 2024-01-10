/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyStructPatch implements TBase, java.io.Serializable, Cloneable, Comparable<MyStructPatch> {
  private static final TStruct STRUCT_DESC = new TStruct("MyStructPatch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.STRUCT, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.STRUCT, (short)5);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)6);
  private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.LIST, (short)7);

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public MyStruct assign;
  /**
   * Clears a value. Applies first.
   */
  public boolean clear;
  /**
   * Patches any previously set values. Applies second.
   */
  public MyStructFieldPatch patchPrior;
  /**
   * Initialize fields, using the given defaults. Applies third.
   */
  public MyStructEnsureStruct ensure;
  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public MyStructFieldPatch patch;
  /**
   * Removes entries, if present. Applies third.
   */
  public List<Short> remove;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int PATCHPRIOR = 3;
  public static final int ENSURE = 5;
  public static final int PATCH = 6;
  public static final int REMOVE = 7;

  // isset id assignments
  private static final int __CLEAR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(ASSIGN, new FieldMetaData("assign", TFieldRequirementType.OPTIONAL, 
        new StructMetaData(TType.STRUCT, MyStruct.class)));
    tmpMetaDataMap.put(CLEAR, new FieldMetaData("clear", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    tmpMetaDataMap.put(PATCHPRIOR, new FieldMetaData("patchPrior", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructFieldPatch.class)));
    tmpMetaDataMap.put(ENSURE, new FieldMetaData("ensure", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructEnsureStruct.class)));
    tmpMetaDataMap.put(PATCH, new FieldMetaData("patch", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructFieldPatch.class)));
    tmpMetaDataMap.put(REMOVE, new FieldMetaData("remove", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I16))));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(MyStructPatch.class, metaDataMap);
  }

  public MyStructPatch() {
  }

  public MyStructPatch(
      boolean clear,
      MyStructFieldPatch patchPrior,
      MyStructEnsureStruct ensure,
      MyStructFieldPatch patch,
      List<Short> remove) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patchPrior = patchPrior;
    this.ensure = ensure;
    this.patch = patch;
    this.remove = remove;
  }

  public MyStructPatch(
      MyStruct assign,
      boolean clear,
      MyStructFieldPatch patchPrior,
      MyStructEnsureStruct ensure,
      MyStructFieldPatch patch,
      List<Short> remove) {
    this();
    this.assign = assign;
    this.clear = clear;
    setClearIsSet(true);
    this.patchPrior = patchPrior;
    this.ensure = ensure;
    this.patch = patch;
    this.remove = remove;
  }

  public static class Builder {
    private MyStruct assign;
    private boolean clear;
    private MyStructFieldPatch patchPrior;
    private MyStructEnsureStruct ensure;
    private MyStructFieldPatch patch;
    private List<Short> remove;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setAssign(final MyStruct assign) {
      this.assign = assign;
      return this;
    }

    public Builder setClear(final boolean clear) {
      this.clear = clear;
      __optional_isset.set(__CLEAR_ISSET_ID, true);
      return this;
    }

    public Builder setPatchPrior(final MyStructFieldPatch patchPrior) {
      this.patchPrior = patchPrior;
      return this;
    }

    public Builder setEnsure(final MyStructEnsureStruct ensure) {
      this.ensure = ensure;
      return this;
    }

    public Builder setPatch(final MyStructFieldPatch patch) {
      this.patch = patch;
      return this;
    }

    public Builder setRemove(final List<Short> remove) {
      this.remove = remove;
      return this;
    }

    public MyStructPatch build() {
      MyStructPatch result = new MyStructPatch();
      result.setAssign(this.assign);
      if (__optional_isset.get(__CLEAR_ISSET_ID)) {
        result.setClear(this.clear);
      }
      result.setPatchPrior(this.patchPrior);
      result.setEnsure(this.ensure);
      result.setPatch(this.patch);
      result.setRemove(this.remove);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStructPatch(MyStructPatch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    }
    this.clear = TBaseHelper.deepCopy(other.clear);
    if (other.isSetPatchPrior()) {
      this.patchPrior = TBaseHelper.deepCopy(other.patchPrior);
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    }
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    }
    if (other.isSetRemove()) {
      this.remove = TBaseHelper.deepCopy(other.remove);
    }
  }

  public MyStructPatch deepCopy() {
    return new MyStructPatch(this);
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public MyStruct getAssign() {
    return this.assign;
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public MyStructPatch setAssign(MyStruct assign) {
    this.assign = assign;
    return this;
  }

  public void unsetAssign() {
    this.assign = null;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  public void setAssignIsSet(boolean __value) {
    if (!__value) {
      this.assign = null;
    }
  }

  /**
   * Clears a value. Applies first.
   */
  public boolean isClear() {
    return this.clear;
  }

  /**
   * Clears a value. Applies first.
   */
  public MyStructPatch setClear(boolean clear) {
    this.clear = clear;
    setClearIsSet(true);
    return this;
  }

  public void unsetClear() {
    __isset_bit_vector.clear(__CLEAR_ISSET_ID);
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return __isset_bit_vector.get(__CLEAR_ISSET_ID);
  }

  public void setClearIsSet(boolean __value) {
    __isset_bit_vector.set(__CLEAR_ISSET_ID, __value);
  }

  /**
   * Patches any previously set values. Applies second.
   */
  public MyStructFieldPatch getPatchPrior() {
    return this.patchPrior;
  }

  /**
   * Patches any previously set values. Applies second.
   */
  public MyStructPatch setPatchPrior(MyStructFieldPatch patchPrior) {
    this.patchPrior = patchPrior;
    return this;
  }

  public void unsetPatchPrior() {
    this.patchPrior = null;
  }

  // Returns true if field patchPrior is set (has been assigned a value) and false otherwise
  public boolean isSetPatchPrior() {
    return this.patchPrior != null;
  }

  public void setPatchPriorIsSet(boolean __value) {
    if (!__value) {
      this.patchPrior = null;
    }
  }

  /**
   * Initialize fields, using the given defaults. Applies third.
   */
  public MyStructEnsureStruct getEnsure() {
    return this.ensure;
  }

  /**
   * Initialize fields, using the given defaults. Applies third.
   */
  public MyStructPatch setEnsure(MyStructEnsureStruct ensure) {
    this.ensure = ensure;
    return this;
  }

  public void unsetEnsure() {
    this.ensure = null;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  public void setEnsureIsSet(boolean __value) {
    if (!__value) {
      this.ensure = null;
    }
  }

  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public MyStructFieldPatch getPatch() {
    return this.patch;
  }

  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public MyStructPatch setPatch(MyStructFieldPatch patch) {
    this.patch = patch;
    return this;
  }

  public void unsetPatch() {
    this.patch = null;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  public void setPatchIsSet(boolean __value) {
    if (!__value) {
      this.patch = null;
    }
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public List<Short> getRemove() {
    return this.remove;
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public MyStructPatch setRemove(List<Short> remove) {
    this.remove = remove;
    return this;
  }

  public void unsetRemove() {
    this.remove = null;
  }

  // Returns true if field remove is set (has been assigned a value) and false otherwise
  public boolean isSetRemove() {
    return this.remove != null;
  }

  public void setRemoveIsSet(boolean __value) {
    if (!__value) {
      this.remove = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case ASSIGN:
      if (__value == null) {
        unsetAssign();
      } else {
        setAssign((MyStruct)__value);
      }
      break;

    case CLEAR:
      if (__value == null) {
        unsetClear();
      } else {
        setClear((Boolean)__value);
      }
      break;

    case PATCHPRIOR:
      if (__value == null) {
        unsetPatchPrior();
      } else {
        setPatchPrior((MyStructFieldPatch)__value);
      }
      break;

    case ENSURE:
      if (__value == null) {
        unsetEnsure();
      } else {
        setEnsure((MyStructEnsureStruct)__value);
      }
      break;

    case PATCH:
      if (__value == null) {
        unsetPatch();
      } else {
        setPatch((MyStructFieldPatch)__value);
      }
      break;

    case REMOVE:
      if (__value == null) {
        unsetRemove();
      } else {
        setRemove((List<Short>)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case ASSIGN:
      return getAssign();

    case CLEAR:
      return new Boolean(isClear());

    case PATCHPRIOR:
      return getPatchPrior();

    case ENSURE:
      return getEnsure();

    case PATCH:
      return getPatch();

    case REMOVE:
      return getRemove();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStructPatch))
      return false;
    MyStructPatch that = (MyStructPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchPrior(), that.isSetPatchPrior(), this.patchPrior, that.patchPrior)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetRemove(), that.isSetRemove(), this.remove, that.remove)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, patchPrior, ensure, patch, remove});
  }

  @Override
  public int compareTo(MyStructPatch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetAssign()).compareTo(other.isSetAssign());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(assign, other.assign);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetClear()).compareTo(other.isSetClear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(clear, other.clear);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatchPrior()).compareTo(other.isSetPatchPrior());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patchPrior, other.patchPrior);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetEnsure()).compareTo(other.isSetEnsure());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(ensure, other.ensure);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatch()).compareTo(other.isSetPatch());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patch, other.patch);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetRemove()).compareTo(other.isSetRemove());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(remove, other.remove);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.STRUCT) {
            this.assign = new MyStruct();
            this.assign.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            this.clear = iprot.readBool();
            setClearIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHPRIOR:
          if (__field.type == TType.STRUCT) {
            this.patchPrior = new MyStructFieldPatch();
            this.patchPrior.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.STRUCT) {
            this.ensure = new MyStructEnsureStruct();
            this.ensure.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            this.patch = new MyStructFieldPatch();
            this.patch.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REMOVE:
          if (__field.type == TType.LIST) {
            {
              TList _list73 = iprot.readListBegin();
              this.remove = new ArrayList<Short>(Math.max(0, _list73.size));
              for (int _i74 = 0; 
                   (_list73.size < 0) ? iprot.peekList() : (_i74 < _list73.size); 
                   ++_i74)
              {
                short _elem75;
                _elem75 = iprot.readI16();
                this.remove.add(_elem75);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        this.assign.write(oprot);
        oprot.writeFieldEnd();
      }
    }
    oprot.writeFieldBegin(CLEAR_FIELD_DESC);
    oprot.writeBool(this.clear);
    oprot.writeFieldEnd();
    if (this.patchPrior != null) {
      oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
      this.patchPrior.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.ensure != null) {
      oprot.writeFieldBegin(ENSURE_FIELD_DESC);
      this.ensure.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.remove != null) {
      oprot.writeFieldBegin(REMOVE_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I16, this.remove.size()));
        for (short _iter76 : this.remove)        {
          oprot.writeI16(_iter76);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("MyStructPatch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    if (isSetAssign())
    {
      sb.append(indentStr);
      sb.append("assign");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getAssign() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getAssign(), indent + 1, prettyPrint));
      }
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("clear");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isClear(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patchPrior");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatchPrior() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatchPrior(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("ensure");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getEnsure() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getEnsure(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patch");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatch() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatch(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("remove");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getRemove() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getRemove(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

