/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.type;

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

/**
 * The 'parsed' form of a `Uri`.
 * 
 *   {scheme}://{domain}/{path}?{query}#{fragment}
 */
@SuppressWarnings({ "unused", "serial" })
public class UriStruct implements TBase, java.io.Serializable, Cloneable, Comparable<UriStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("UriStruct");
  private static final TField SCHEME_FIELD_DESC = new TField("scheme", TType.STRING, (short)1);
  private static final TField DOMAIN_FIELD_DESC = new TField("domain", TType.LIST, (short)2);
  private static final TField PATH_FIELD_DESC = new TField("path", TType.LIST, (short)4);
  private static final TField QUERY_FIELD_DESC = new TField("query", TType.MAP, (short)5);
  private static final TField FRAGMENT_FIELD_DESC = new TField("fragment", TType.STRING, (short)6);

  public String scheme;
  public List<String> domain;
  public List<String> path;
  public Map<String,String> query;
  public String fragment;
  public static final int SCHEME = 1;
  public static final int DOMAIN = 2;
  public static final int PATH = 4;
  public static final int QUERY = 5;
  public static final int FRAGMENT = 6;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(SCHEME, new FieldMetaData("scheme", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(DOMAIN, new FieldMetaData("domain", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.STRING))));
    tmpMetaDataMap.put(PATH, new FieldMetaData("path", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.STRING))));
    tmpMetaDataMap.put(QUERY, new FieldMetaData("query", TFieldRequirementType.DEFAULT, 
        new MapMetaData(TType.MAP, 
            new FieldValueMetaData(TType.STRING), 
            new FieldValueMetaData(TType.STRING))));
    tmpMetaDataMap.put(FRAGMENT, new FieldMetaData("fragment", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(UriStruct.class, metaDataMap);
  }

  public UriStruct() {
  }

  public UriStruct(
      String scheme,
      List<String> domain,
      List<String> path,
      Map<String,String> query,
      String fragment) {
    this();
    this.scheme = scheme;
    this.domain = domain;
    this.path = path;
    this.query = query;
    this.fragment = fragment;
  }

  public static class Builder {
    private String scheme;
    private List<String> domain;
    private List<String> path;
    private Map<String,String> query;
    private String fragment;

    public Builder() {
    }

    public Builder setScheme(final String scheme) {
      this.scheme = scheme;
      return this;
    }

    public Builder setDomain(final List<String> domain) {
      this.domain = domain;
      return this;
    }

    public Builder setPath(final List<String> path) {
      this.path = path;
      return this;
    }

    public Builder setQuery(final Map<String,String> query) {
      this.query = query;
      return this;
    }

    public Builder setFragment(final String fragment) {
      this.fragment = fragment;
      return this;
    }

    public UriStruct build() {
      UriStruct result = new UriStruct();
      result.setScheme(this.scheme);
      result.setDomain(this.domain);
      result.setPath(this.path);
      result.setQuery(this.query);
      result.setFragment(this.fragment);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public UriStruct(UriStruct other) {
    if (other.isSetScheme()) {
      this.scheme = TBaseHelper.deepCopy(other.scheme);
    }
    if (other.isSetDomain()) {
      this.domain = TBaseHelper.deepCopy(other.domain);
    }
    if (other.isSetPath()) {
      this.path = TBaseHelper.deepCopy(other.path);
    }
    if (other.isSetQuery()) {
      this.query = TBaseHelper.deepCopy(other.query);
    }
    if (other.isSetFragment()) {
      this.fragment = TBaseHelper.deepCopy(other.fragment);
    }
  }

  public UriStruct deepCopy() {
    return new UriStruct(this);
  }

  public String getScheme() {
    return this.scheme;
  }

  public UriStruct setScheme(String scheme) {
    this.scheme = scheme;
    return this;
  }

  public void unsetScheme() {
    this.scheme = null;
  }

  // Returns true if field scheme is set (has been assigned a value) and false otherwise
  public boolean isSetScheme() {
    return this.scheme != null;
  }

  public void setSchemeIsSet(boolean __value) {
    if (!__value) {
      this.scheme = null;
    }
  }

  public List<String> getDomain() {
    return this.domain;
  }

  public UriStruct setDomain(List<String> domain) {
    this.domain = domain;
    return this;
  }

  public void unsetDomain() {
    this.domain = null;
  }

  // Returns true if field domain is set (has been assigned a value) and false otherwise
  public boolean isSetDomain() {
    return this.domain != null;
  }

  public void setDomainIsSet(boolean __value) {
    if (!__value) {
      this.domain = null;
    }
  }

  public List<String> getPath() {
    return this.path;
  }

  public UriStruct setPath(List<String> path) {
    this.path = path;
    return this;
  }

  public void unsetPath() {
    this.path = null;
  }

  // Returns true if field path is set (has been assigned a value) and false otherwise
  public boolean isSetPath() {
    return this.path != null;
  }

  public void setPathIsSet(boolean __value) {
    if (!__value) {
      this.path = null;
    }
  }

  public Map<String,String> getQuery() {
    return this.query;
  }

  public UriStruct setQuery(Map<String,String> query) {
    this.query = query;
    return this;
  }

  public void unsetQuery() {
    this.query = null;
  }

  // Returns true if field query is set (has been assigned a value) and false otherwise
  public boolean isSetQuery() {
    return this.query != null;
  }

  public void setQueryIsSet(boolean __value) {
    if (!__value) {
      this.query = null;
    }
  }

  public String getFragment() {
    return this.fragment;
  }

  public UriStruct setFragment(String fragment) {
    this.fragment = fragment;
    return this;
  }

  public void unsetFragment() {
    this.fragment = null;
  }

  // Returns true if field fragment is set (has been assigned a value) and false otherwise
  public boolean isSetFragment() {
    return this.fragment != null;
  }

  public void setFragmentIsSet(boolean __value) {
    if (!__value) {
      this.fragment = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case SCHEME:
      if (__value == null) {
        unsetScheme();
      } else {
        setScheme((String)__value);
      }
      break;

    case DOMAIN:
      if (__value == null) {
        unsetDomain();
      } else {
        setDomain((List<String>)__value);
      }
      break;

    case PATH:
      if (__value == null) {
        unsetPath();
      } else {
        setPath((List<String>)__value);
      }
      break;

    case QUERY:
      if (__value == null) {
        unsetQuery();
      } else {
        setQuery((Map<String,String>)__value);
      }
      break;

    case FRAGMENT:
      if (__value == null) {
        unsetFragment();
      } else {
        setFragment((String)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case SCHEME:
      return getScheme();

    case DOMAIN:
      return getDomain();

    case PATH:
      return getPath();

    case QUERY:
      return getQuery();

    case FRAGMENT:
      return getFragment();

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
    if (!(_that instanceof UriStruct))
      return false;
    UriStruct that = (UriStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetScheme(), that.isSetScheme(), this.scheme, that.scheme)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetDomain(), that.isSetDomain(), this.domain, that.domain)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPath(), that.isSetPath(), this.path, that.path)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetQuery(), that.isSetQuery(), this.query, that.query)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetFragment(), that.isSetFragment(), this.fragment, that.fragment)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {scheme, domain, path, query, fragment});
  }

  @Override
  public int compareTo(UriStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetScheme()).compareTo(other.isSetScheme());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(scheme, other.scheme);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetDomain()).compareTo(other.isSetDomain());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(domain, other.domain);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPath()).compareTo(other.isSetPath());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(path, other.path);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetQuery()).compareTo(other.isSetQuery());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(query, other.query);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetFragment()).compareTo(other.isSetFragment());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(fragment, other.fragment);
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
        case SCHEME:
          if (__field.type == TType.STRING) {
            this.scheme = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case DOMAIN:
          if (__field.type == TType.LIST) {
            {
              TList _list0 = iprot.readListBegin();
              this.domain = new ArrayList<String>(Math.max(0, _list0.size));
              for (int _i1 = 0; 
                   (_list0.size < 0) ? iprot.peekList() : (_i1 < _list0.size); 
                   ++_i1)
              {
                String _elem2;
                _elem2 = iprot.readString();
                this.domain.add(_elem2);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATH:
          if (__field.type == TType.LIST) {
            {
              TList _list3 = iprot.readListBegin();
              this.path = new ArrayList<String>(Math.max(0, _list3.size));
              for (int _i4 = 0; 
                   (_list3.size < 0) ? iprot.peekList() : (_i4 < _list3.size); 
                   ++_i4)
              {
                String _elem5;
                _elem5 = iprot.readString();
                this.path.add(_elem5);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case QUERY:
          if (__field.type == TType.MAP) {
            {
              TMap _map6 = iprot.readMapBegin();
              this.query = new HashMap<String,String>(Math.max(0, 2*_map6.size));
              for (int _i7 = 0; 
                   (_map6.size < 0) ? iprot.peekMap() : (_i7 < _map6.size); 
                   ++_i7)
              {
                String _key8;
                String _val9;
                _key8 = iprot.readString();
                _val9 = iprot.readString();
                this.query.put(_key8, _val9);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case FRAGMENT:
          if (__field.type == TType.STRING) {
            this.fragment = iprot.readString();
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
    if (this.scheme != null) {
      oprot.writeFieldBegin(SCHEME_FIELD_DESC);
      oprot.writeString(this.scheme);
      oprot.writeFieldEnd();
    }
    if (this.domain != null) {
      oprot.writeFieldBegin(DOMAIN_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRING, this.domain.size()));
        for (String _iter10 : this.domain)        {
          oprot.writeString(_iter10);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.path != null) {
      oprot.writeFieldBegin(PATH_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRING, this.path.size()));
        for (String _iter11 : this.path)        {
          oprot.writeString(_iter11);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.query != null) {
      oprot.writeFieldBegin(QUERY_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.query.size()));
        for (Map.Entry<String, String> _iter12 : this.query.entrySet())        {
          oprot.writeString(_iter12.getKey());
          oprot.writeString(_iter12.getValue());
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.fragment != null) {
      oprot.writeFieldBegin(FRAGMENT_FIELD_DESC);
      oprot.writeString(this.fragment);
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
    StringBuilder sb = new StringBuilder("UriStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("scheme");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getScheme() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getScheme(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("domain");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getDomain() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getDomain(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("path");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPath() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPath(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("query");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getQuery() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getQuery(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("fragment");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getFragment() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getFragment(), indent + 1, prettyPrint));
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

