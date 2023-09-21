// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO
var _ = strings.Split


type IncredibleStruct = MyStruct

func NewIncredibleStruct() *IncredibleStruct {
    return NewMyStruct()
}

func WriteIncredibleStruct(item *IncredibleStruct, p thrift.Protocol) error {
    if err := item.Write(p); err != nil {
    return err
}
    return nil
}

func ReadIncredibleStruct(p thrift.Protocol) (IncredibleStruct, error) {
    var decodeResult IncredibleStruct
    decodeErr := func() error {
        result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type BrilliantStruct = MyStruct

func NewBrilliantStruct() *BrilliantStruct {
    return NewMyStruct()
}

func WriteBrilliantStruct(item *BrilliantStruct, p thrift.Protocol) error {
    if err := item.Write(p); err != nil {
    return err
}
    return nil
}

func ReadBrilliantStruct(p thrift.Protocol) (BrilliantStruct, error) {
    var decodeResult BrilliantStruct
    decodeErr := func() error {
        result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type MyEnum int32

const (
    MyEnum_MyValue1 MyEnum = 0
    MyEnum_MyValue2 MyEnum = 1
    MyEnum_DOMAIN MyEnum = 2
)

// Enum value maps for MyEnum
var (
    MyEnumToName = map[MyEnum]string {
        MyEnum_MyValue1: "MyValue1",
        MyEnum_MyValue2: "MyValue2",
        MyEnum_DOMAIN: "DOMAIN",
    }

    MyEnumToValue = map[string]MyEnum {
        "MyValue1": MyEnum_MyValue1,
        "MyValue2": MyEnum_MyValue2,
        "DOMAIN": MyEnum_DOMAIN,
    }

    MyEnumNames = []string{
        "MyValue1",
        "MyValue2",
        "DOMAIN",
    }

    MyEnumValues = []MyEnum{
        MyEnum_MyValue1,
        MyEnum_MyValue2,
        MyEnum_DOMAIN,
    }
)

func (x MyEnum) String() string {
    if v, ok := MyEnumToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum) Ptr() *MyEnum {
    return &x
}

// Deprecated: Use MyEnumToValue instead (e.g. `x, ok := MyEnumToValue["name"]`).
func MyEnumFromString(s string) (MyEnum, error) {
    if v, ok := MyEnumToValue[s]; ok {
        return v, nil
    }
    return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}

// Deprecated: Use MyEnum.Ptr() instead.
func MyEnumPtr(v MyEnum) *MyEnum {
    return &v
}


type MyStructNestedAnnotation struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStructNestedAnnotation{}

func NewMyStructNestedAnnotation() *MyStructNestedAnnotation {
    return (&MyStructNestedAnnotation{}).
        SetNameNonCompat("")
}

func (x *MyStructNestedAnnotation) GetNameNonCompat() string {
    return x.Name
}

func (x *MyStructNestedAnnotation) GetName() string {
    return x.Name
}

func (x *MyStructNestedAnnotation) SetNameNonCompat(value string) *MyStructNestedAnnotation {
    x.Name = value
    return x
}

func (x *MyStructNestedAnnotation) SetName(value string) *MyStructNestedAnnotation {
    x.Name = value
    return x
}

func (x *MyStructNestedAnnotation) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetNameNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStructNestedAnnotation) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetNameNonCompat(result)
    return nil
}

func (x *MyStructNestedAnnotation) toString1() string {  // Name
    return fmt.Sprintf("%v", x.GetNameNonCompat())
}


// Deprecated: Use MyStructNestedAnnotation.Set* methods instead or set the fields directly.
type MyStructNestedAnnotationBuilder struct {
    obj *MyStructNestedAnnotation
}

func NewMyStructNestedAnnotationBuilder() *MyStructNestedAnnotationBuilder {
    return &MyStructNestedAnnotationBuilder{
        obj: NewMyStructNestedAnnotation(),
    }
}

func (x *MyStructNestedAnnotationBuilder) Name(value string) *MyStructNestedAnnotationBuilder {
    x.obj.Name = value
    return x
}

func (x *MyStructNestedAnnotationBuilder) Emit() *MyStructNestedAnnotation {
    var objCopy MyStructNestedAnnotation = *x.obj
    return &objCopy
}

func (x *MyStructNestedAnnotation) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyStructNestedAnnotation"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStructNestedAnnotation) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyStructNestedAnnotation) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyStructNestedAnnotation({")
    sb.WriteString(fmt.Sprintf("Name:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type MyUnion struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &MyUnion{}

func NewMyUnion() *MyUnion {
    return (&MyUnion{})
}

func (x *MyUnion) countSetFields() int {
    count := int(0)
    return count
}

func (x *MyUnion) CountSetFieldsMyUnion() int {
    return x.countSetFields()
}


// Deprecated: Use MyUnion.Set* methods instead or set the fields directly.
type MyUnionBuilder struct {
    obj *MyUnion
}

func NewMyUnionBuilder() *MyUnionBuilder {
    return &MyUnionBuilder{
        obj: NewMyUnion(),
    }
}

func (x *MyUnionBuilder) Emit() *MyUnion {
    var objCopy MyUnion = *x.obj
    return &objCopy
}

func (x *MyUnion) Write(p thrift.Protocol) error {
    if countSet := x.countSetFields(); countSet > 1 {
        return fmt.Errorf("%T write union: no more than one field must be set (%d set).", x, countSet)
    }
    if err := p.WriteStructBegin("MyUnion"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyUnion) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyUnion) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyUnion({")
    sb.WriteString("})")

    return sb.String()
}

type MyException struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &MyException{}

func NewMyException() *MyException {
    return (&MyException{})
}


// Deprecated: Use MyException.Set* methods instead or set the fields directly.
type MyExceptionBuilder struct {
    obj *MyException
}

func NewMyExceptionBuilder() *MyExceptionBuilder {
    return &MyExceptionBuilder{
        obj: NewMyException(),
    }
}

func (x *MyExceptionBuilder) Emit() *MyException {
    var objCopy MyException = *x.obj
    return &objCopy
}

func (x *MyException) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyException"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyException) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyException) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyException({")
    sb.WriteString("})")

    return sb.String()
}
func (x *MyException) Error() string {
    return x.String()
}

type MyStruct struct {
    PackageName string `thrift:"package,1" tag:"some_package"`
    MajorVer int64 `thrift:"major,2" json:"major" db:"major"`
    AnnotationWithQuote string `thrift:"annotation_with_quote,3" tag:"somevalue"`
    Class_ string `thrift:"class_,4" json:"class_" db:"class_"`
    AnnotationWithTrailingComma string `thrift:"annotation_with_trailing_comma,5" json:"annotation_with_trailing_comma" db:"annotation_with_trailing_comma"`
    EmptyAnnotations string `thrift:"empty_annotations,6" json:"empty_annotations" db:"empty_annotations"`
    MyEnum MyEnum `thrift:"my_enum,7" json:"my_enum" db:"my_enum"`
    CppTypeAnnotation []string `thrift:"cpp_type_annotation,8" json:"cpp_type_annotation" db:"cpp_type_annotation"`
    MyUnion *MyUnion `thrift:"my_union,9" json:"my_union" db:"my_union"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStruct{}

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).
        SetPackageNameNonCompat("").
        SetMajorVerNonCompat(0).
        SetAnnotationWithQuoteNonCompat("").
        SetClass_NonCompat("").
        SetAnnotationWithTrailingCommaNonCompat("").
        SetEmptyAnnotationsNonCompat("").
        SetMyEnumNonCompat(0).
        SetCppTypeAnnotationNonCompat(make([]string, 0)).
        SetMyUnionNonCompat(*NewMyUnion())
}

func (x *MyStruct) GetPackageNameNonCompat() string {
    return x.PackageName
}

func (x *MyStruct) GetPackageName() string {
    return x.PackageName
}

func (x *MyStruct) GetMajorVerNonCompat() int64 {
    return x.MajorVer
}

func (x *MyStruct) GetMajorVer() int64 {
    return x.MajorVer
}

func (x *MyStruct) GetAnnotationWithQuoteNonCompat() string {
    return x.AnnotationWithQuote
}

func (x *MyStruct) GetAnnotationWithQuote() string {
    return x.AnnotationWithQuote
}

func (x *MyStruct) GetClass_NonCompat() string {
    return x.Class_
}

func (x *MyStruct) GetClass_() string {
    return x.Class_
}

func (x *MyStruct) GetAnnotationWithTrailingCommaNonCompat() string {
    return x.AnnotationWithTrailingComma
}

func (x *MyStruct) GetAnnotationWithTrailingComma() string {
    return x.AnnotationWithTrailingComma
}

func (x *MyStruct) GetEmptyAnnotationsNonCompat() string {
    return x.EmptyAnnotations
}

func (x *MyStruct) GetEmptyAnnotations() string {
    return x.EmptyAnnotations
}

func (x *MyStruct) GetMyEnumNonCompat() MyEnum {
    return x.MyEnum
}

func (x *MyStruct) GetMyEnum() MyEnum {
    return x.MyEnum
}

func (x *MyStruct) GetCppTypeAnnotationNonCompat() []string {
    return x.CppTypeAnnotation
}

func (x *MyStruct) GetCppTypeAnnotation() []string {
    if !x.IsSetCppTypeAnnotation() {
        return make([]string, 0)
    }

    return x.CppTypeAnnotation
}

func (x *MyStruct) GetMyUnionNonCompat() *MyUnion {
    return x.MyUnion
}

func (x *MyStruct) GetMyUnion() *MyUnion {
    if !x.IsSetMyUnion() {
        return nil
    }

    return x.MyUnion
}

func (x *MyStruct) SetPackageNameNonCompat(value string) *MyStruct {
    x.PackageName = value
    return x
}

func (x *MyStruct) SetPackageName(value string) *MyStruct {
    x.PackageName = value
    return x
}

func (x *MyStruct) SetMajorVerNonCompat(value int64) *MyStruct {
    x.MajorVer = value
    return x
}

func (x *MyStruct) SetMajorVer(value int64) *MyStruct {
    x.MajorVer = value
    return x
}

func (x *MyStruct) SetAnnotationWithQuoteNonCompat(value string) *MyStruct {
    x.AnnotationWithQuote = value
    return x
}

func (x *MyStruct) SetAnnotationWithQuote(value string) *MyStruct {
    x.AnnotationWithQuote = value
    return x
}

func (x *MyStruct) SetClass_NonCompat(value string) *MyStruct {
    x.Class_ = value
    return x
}

func (x *MyStruct) SetClass_(value string) *MyStruct {
    x.Class_ = value
    return x
}

func (x *MyStruct) SetAnnotationWithTrailingCommaNonCompat(value string) *MyStruct {
    x.AnnotationWithTrailingComma = value
    return x
}

func (x *MyStruct) SetAnnotationWithTrailingComma(value string) *MyStruct {
    x.AnnotationWithTrailingComma = value
    return x
}

func (x *MyStruct) SetEmptyAnnotationsNonCompat(value string) *MyStruct {
    x.EmptyAnnotations = value
    return x
}

func (x *MyStruct) SetEmptyAnnotations(value string) *MyStruct {
    x.EmptyAnnotations = value
    return x
}

func (x *MyStruct) SetMyEnumNonCompat(value MyEnum) *MyStruct {
    x.MyEnum = value
    return x
}

func (x *MyStruct) SetMyEnum(value MyEnum) *MyStruct {
    x.MyEnum = value
    return x
}

func (x *MyStruct) SetCppTypeAnnotationNonCompat(value []string) *MyStruct {
    x.CppTypeAnnotation = value
    return x
}

func (x *MyStruct) SetCppTypeAnnotation(value []string) *MyStruct {
    x.CppTypeAnnotation = value
    return x
}

func (x *MyStruct) SetMyUnionNonCompat(value MyUnion) *MyStruct {
    x.MyUnion = &value
    return x
}

func (x *MyStruct) SetMyUnion(value *MyUnion) *MyStruct {
    x.MyUnion = value
    return x
}

func (x *MyStruct) IsSetCppTypeAnnotation() bool {
    return x != nil && x.CppTypeAnnotation != nil
}

func (x *MyStruct) IsSetMyUnion() bool {
    return x != nil && x.MyUnion != nil
}

func (x *MyStruct) writeField1(p thrift.Protocol) error {  // PackageName
    if err := p.WriteFieldBegin("package", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetPackageNameNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Protocol) error {  // MajorVer
    if err := p.WriteFieldBegin("major", thrift.I64, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMajorVerNonCompat()
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField3(p thrift.Protocol) error {  // AnnotationWithQuote
    if err := p.WriteFieldBegin("annotation_with_quote", thrift.STRING, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetAnnotationWithQuoteNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField4(p thrift.Protocol) error {  // Class_
    if err := p.WriteFieldBegin("class_", thrift.STRING, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetClass_NonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField5(p thrift.Protocol) error {  // AnnotationWithTrailingComma
    if err := p.WriteFieldBegin("annotation_with_trailing_comma", thrift.STRING, 5); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetAnnotationWithTrailingCommaNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField6(p thrift.Protocol) error {  // EmptyAnnotations
    if err := p.WriteFieldBegin("empty_annotations", thrift.STRING, 6); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetEmptyAnnotationsNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField7(p thrift.Protocol) error {  // MyEnum
    if err := p.WriteFieldBegin("my_enum", thrift.I32, 7); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyEnumNonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField8(p thrift.Protocol) error {  // CppTypeAnnotation
    if err := p.WriteFieldBegin("cpp_type_annotation", thrift.LIST, 8); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetCppTypeAnnotationNonCompat()
    if err := p.WriteListBegin(thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField9(p thrift.Protocol) error {  // MyUnion
    if !x.IsSetMyUnion() {
        return nil
    }

    if err := p.WriteFieldBegin("my_union", thrift.STRUCT, 9); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyUnionNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Protocol) error {  // PackageName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetPackageNameNonCompat(result)
    return nil
}

func (x *MyStruct) readField2(p thrift.Protocol) error {  // MajorVer
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.SetMajorVerNonCompat(result)
    return nil
}

func (x *MyStruct) readField3(p thrift.Protocol) error {  // AnnotationWithQuote
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetAnnotationWithQuoteNonCompat(result)
    return nil
}

func (x *MyStruct) readField4(p thrift.Protocol) error {  // Class_
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetClass_NonCompat(result)
    return nil
}

func (x *MyStruct) readField5(p thrift.Protocol) error {  // AnnotationWithTrailingComma
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetAnnotationWithTrailingCommaNonCompat(result)
    return nil
}

func (x *MyStruct) readField6(p thrift.Protocol) error {  // EmptyAnnotations
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetEmptyAnnotationsNonCompat(result)
    return nil
}

func (x *MyStruct) readField7(p thrift.Protocol) error {  // MyEnum
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum(enumResult)

    x.SetMyEnumNonCompat(result)
    return nil
}

func (x *MyStruct) readField8(p thrift.Protocol) error {  // CppTypeAnnotation
    _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]string, 0, size)
for i := 0; i < size; i++ {
    var elem string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult

    x.SetCppTypeAnnotationNonCompat(result)
    return nil
}

func (x *MyStruct) readField9(p thrift.Protocol) error {  // MyUnion
    result := *NewMyUnion()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetMyUnionNonCompat(result)
    return nil
}

func (x *MyStruct) toString1() string {  // PackageName
    return fmt.Sprintf("%v", x.GetPackageNameNonCompat())
}

func (x *MyStruct) toString2() string {  // MajorVer
    return fmt.Sprintf("%v", x.GetMajorVerNonCompat())
}

func (x *MyStruct) toString3() string {  // AnnotationWithQuote
    return fmt.Sprintf("%v", x.GetAnnotationWithQuoteNonCompat())
}

func (x *MyStruct) toString4() string {  // Class_
    return fmt.Sprintf("%v", x.GetClass_NonCompat())
}

func (x *MyStruct) toString5() string {  // AnnotationWithTrailingComma
    return fmt.Sprintf("%v", x.GetAnnotationWithTrailingCommaNonCompat())
}

func (x *MyStruct) toString6() string {  // EmptyAnnotations
    return fmt.Sprintf("%v", x.GetEmptyAnnotationsNonCompat())
}

func (x *MyStruct) toString7() string {  // MyEnum
    return fmt.Sprintf("%v", x.GetMyEnumNonCompat())
}

func (x *MyStruct) toString8() string {  // CppTypeAnnotation
    return fmt.Sprintf("%v", x.GetCppTypeAnnotationNonCompat())
}

func (x *MyStruct) toString9() string {  // MyUnion
    return fmt.Sprintf("%v", x.GetMyUnionNonCompat())
}

// Deprecated: Use NewMyStruct().GetMyUnion() instead.
var MyStruct_MyUnion_DEFAULT = NewMyStruct().GetMyUnion()

// Deprecated: Use NewMyStruct().GetMyUnion() instead.
func (x *MyStruct) DefaultGetMyUnion() *MyUnion {
    if !x.IsSetMyUnion() {
        return NewMyUnion()
    }
    return x.MyUnion
}


// Deprecated: Use MyStruct.Set* methods instead or set the fields directly.
type MyStructBuilder struct {
    obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder {
    return &MyStructBuilder{
        obj: NewMyStruct(),
    }
}

func (x *MyStructBuilder) PackageName(value string) *MyStructBuilder {
    x.obj.PackageName = value
    return x
}

func (x *MyStructBuilder) MajorVer(value int64) *MyStructBuilder {
    x.obj.MajorVer = value
    return x
}

func (x *MyStructBuilder) AnnotationWithQuote(value string) *MyStructBuilder {
    x.obj.AnnotationWithQuote = value
    return x
}

func (x *MyStructBuilder) Class_(value string) *MyStructBuilder {
    x.obj.Class_ = value
    return x
}

func (x *MyStructBuilder) AnnotationWithTrailingComma(value string) *MyStructBuilder {
    x.obj.AnnotationWithTrailingComma = value
    return x
}

func (x *MyStructBuilder) EmptyAnnotations(value string) *MyStructBuilder {
    x.obj.EmptyAnnotations = value
    return x
}

func (x *MyStructBuilder) MyEnum(value MyEnum) *MyStructBuilder {
    x.obj.MyEnum = value
    return x
}

func (x *MyStructBuilder) CppTypeAnnotation(value []string) *MyStructBuilder {
    x.obj.CppTypeAnnotation = value
    return x
}

func (x *MyStructBuilder) MyUnion(value *MyUnion) *MyStructBuilder {
    x.obj.MyUnion = value
    return x
}

func (x *MyStructBuilder) Emit() *MyStruct {
    var objCopy MyStruct = *x.obj
    return &objCopy
}

func (x *MyStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := x.writeField5(p); err != nil {
        return err
    }

    if err := x.writeField6(p); err != nil {
        return err
    }

    if err := x.writeField7(p); err != nil {
        return err
    }

    if err := x.writeField8(p); err != nil {
        return err
    }

    if err := x.writeField9(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // package
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 2:  // major
            expectedType := thrift.Type(thrift.I64)
            if wireType == expectedType {
                if err := x.readField2(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 3:  // annotation_with_quote
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField3(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 4:  // class_
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField4(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 5:  // annotation_with_trailing_comma
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField5(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 6:  // empty_annotations
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField6(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 7:  // my_enum
            expectedType := thrift.Type(thrift.I32)
            if wireType == expectedType {
                if err := x.readField7(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 8:  // cpp_type_annotation
            expectedType := thrift.Type(thrift.LIST)
            if wireType == expectedType {
                if err := x.readField8(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 9:  // my_union
            expectedType := thrift.Type(thrift.STRUCT)
            if wireType == expectedType {
                if err := x.readField9(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyStruct({")
    sb.WriteString(fmt.Sprintf("PackageName:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("MajorVer:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("AnnotationWithQuote:%s ", x.toString3()))
    sb.WriteString(fmt.Sprintf("Class_:%s ", x.toString4()))
    sb.WriteString(fmt.Sprintf("AnnotationWithTrailingComma:%s ", x.toString5()))
    sb.WriteString(fmt.Sprintf("EmptyAnnotations:%s ", x.toString6()))
    sb.WriteString(fmt.Sprintf("MyEnum:%s ", x.toString7()))
    sb.WriteString(fmt.Sprintf("CppTypeAnnotation:%s ", x.toString8()))
    sb.WriteString(fmt.Sprintf("MyUnion:%s", x.toString9()))
    sb.WriteString("})")

    return sb.String()
}

type SecretStruct struct {
    Id int64 `thrift:"id,1" json:"id" db:"id"`
    Password string `thrift:"password,2" json:"password" db:"password"`
}
// Compile time interface enforcer
var _ thrift.Struct = &SecretStruct{}

func NewSecretStruct() *SecretStruct {
    return (&SecretStruct{}).
        SetIdNonCompat(0).
        SetPasswordNonCompat("")
}

func (x *SecretStruct) GetIdNonCompat() int64 {
    return x.Id
}

func (x *SecretStruct) GetId() int64 {
    return x.Id
}

func (x *SecretStruct) GetPasswordNonCompat() string {
    return x.Password
}

func (x *SecretStruct) GetPassword() string {
    return x.Password
}

func (x *SecretStruct) SetIdNonCompat(value int64) *SecretStruct {
    x.Id = value
    return x
}

func (x *SecretStruct) SetId(value int64) *SecretStruct {
    x.Id = value
    return x
}

func (x *SecretStruct) SetPasswordNonCompat(value string) *SecretStruct {
    x.Password = value
    return x
}

func (x *SecretStruct) SetPassword(value string) *SecretStruct {
    x.Password = value
    return x
}

func (x *SecretStruct) writeField1(p thrift.Protocol) error {  // Id
    if err := p.WriteFieldBegin("id", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetIdNonCompat()
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) writeField2(p thrift.Protocol) error {  // Password
    if err := p.WriteFieldBegin("password", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetPasswordNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) readField1(p thrift.Protocol) error {  // Id
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.SetIdNonCompat(result)
    return nil
}

func (x *SecretStruct) readField2(p thrift.Protocol) error {  // Password
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetPasswordNonCompat(result)
    return nil
}

func (x *SecretStruct) toString1() string {  // Id
    return fmt.Sprintf("%v", x.GetIdNonCompat())
}

func (x *SecretStruct) toString2() string {  // Password
    return fmt.Sprintf("%v", x.GetPasswordNonCompat())
}


// Deprecated: Use SecretStruct.Set* methods instead or set the fields directly.
type SecretStructBuilder struct {
    obj *SecretStruct
}

func NewSecretStructBuilder() *SecretStructBuilder {
    return &SecretStructBuilder{
        obj: NewSecretStruct(),
    }
}

func (x *SecretStructBuilder) Id(value int64) *SecretStructBuilder {
    x.obj.Id = value
    return x
}

func (x *SecretStructBuilder) Password(value string) *SecretStructBuilder {
    x.obj.Password = value
    return x
}

func (x *SecretStructBuilder) Emit() *SecretStruct {
    var objCopy SecretStruct = *x.obj
    return &objCopy
}

func (x *SecretStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("SecretStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *SecretStruct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // id
            expectedType := thrift.Type(thrift.I64)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        case 2:  // password
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField2(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *SecretStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("SecretStruct({")
    sb.WriteString(fmt.Sprintf("Id:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("Password:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
	  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/compiler/test/fixtures/basic-annotations/src/module/MyStruct", func() any { return NewMyStruct() })

}
