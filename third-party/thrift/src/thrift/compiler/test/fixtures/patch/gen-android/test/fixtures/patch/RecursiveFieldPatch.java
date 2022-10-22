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
public class RecursiveFieldPatch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("RecursiveFieldPatch");
  private static final TField NODES_FIELD_DESC = new TField("nodes", TType.STRUCT, (short)-1);

  public final RecursiveField1Patch nodes;
  public static final int NODES = -1;

  public RecursiveFieldPatch(
      RecursiveField1Patch nodes) {
    this.nodes = nodes;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public RecursiveFieldPatch(RecursiveFieldPatch other) {
    if (other.isSetNodes()) {
      this.nodes = TBaseHelper.deepCopy(other.nodes);
    } else {
      this.nodes = null;
    }
  }

  public RecursiveFieldPatch deepCopy() {
    return new RecursiveFieldPatch(this);
  }

  public RecursiveField1Patch getNodes() {
    return this.nodes;
  }

  // Returns true if field nodes is set (has been assigned a value) and false otherwise
  public boolean isSetNodes() {
    return this.nodes != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof RecursiveFieldPatch))
      return false;
    RecursiveFieldPatch that = (RecursiveFieldPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetNodes(), that.isSetNodes(), this.nodes, that.nodes)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {nodes});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static RecursiveFieldPatch deserialize(TProtocol iprot) throws TException {
    RecursiveField1Patch tmp_nodes = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case NODES:
          if (__field.type == TType.STRUCT) {
            tmp_nodes = RecursiveField1Patch.deserialize(iprot);
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

    RecursiveFieldPatch _that;
    _that = new RecursiveFieldPatch(
      tmp_nodes
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.nodes != null) {
      oprot.writeFieldBegin(NODES_FIELD_DESC);
      this.nodes.write(oprot);
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
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

