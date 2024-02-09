// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package rust // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type Exhaustive struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Exhaustive{}

func NewExhaustive() *Exhaustive {
    return (&Exhaustive{})
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewExhaustive().Set<FieldNameFoo>().Set<FieldNameBar>()
type ExhaustiveBuilder struct {
    obj *Exhaustive
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewExhaustive().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewExhaustiveBuilder() *ExhaustiveBuilder {
    return &ExhaustiveBuilder{
        obj: NewExhaustive(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewExhaustive().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *ExhaustiveBuilder) Emit() *Exhaustive {
    var objCopy Exhaustive = *x.obj
    return &objCopy
}

func (x *Exhaustive) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Exhaustive"); err != nil {
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

func (x *Exhaustive) Read(p thrift.Protocol) error {
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

        switch {
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

func (x *Exhaustive) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Exhaustive({")
    sb.WriteString("})")

    return sb.String()
}

type Ord struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Ord{}

func NewOrd() *Ord {
    return (&Ord{})
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewOrd().Set<FieldNameFoo>().Set<FieldNameBar>()
type OrdBuilder struct {
    obj *Ord
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewOrd().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewOrdBuilder() *OrdBuilder {
    return &OrdBuilder{
        obj: NewOrd(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewOrd().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *OrdBuilder) Emit() *Ord {
    var objCopy Ord = *x.obj
    return &objCopy
}

func (x *Ord) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Ord"); err != nil {
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

func (x *Ord) Read(p thrift.Protocol) error {
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

        switch {
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

func (x *Ord) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Ord({")
    sb.WriteString("})")

    return sb.String()
}

type NewType_ struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &NewType_{}

func NewNewType_() *NewType_ {
    return (&NewType_{})
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNewType_().Set<FieldNameFoo>().Set<FieldNameBar>()
type NewType_Builder struct {
    obj *NewType_
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNewType_().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewNewType_Builder() *NewType_Builder {
    return &NewType_Builder{
        obj: NewNewType_(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewNewType_().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *NewType_Builder) Emit() *NewType_ {
    var objCopy NewType_ = *x.obj
    return &objCopy
}

func (x *NewType_) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("NewType"); err != nil {
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

func (x *NewType_) Read(p thrift.Protocol) error {
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

        switch {
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

func (x *NewType_) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("NewType_({")
    sb.WriteString("})")

    return sb.String()
}

type Type struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Type{}

func NewType() *Type {
    return (&Type{}).
        SetNameNonCompat("")
}

func (x *Type) GetNameNonCompat() string {
    return x.Name
}

func (x *Type) GetName() string {
    return x.Name
}

func (x *Type) SetNameNonCompat(value string) *Type {
    x.Name = value
    return x
}

func (x *Type) SetName(value string) *Type {
    x.Name = value
    return x
}

func (x *Type) writeField1(p thrift.Protocol) error {  // Name
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

func (x *Type) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetNameNonCompat(result)
    return nil
}

func (x *Type) toString1() string {  // Name
    return fmt.Sprintf("%v", x.GetNameNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewType().Set<FieldNameFoo>().Set<FieldNameBar>()
type TypeBuilder struct {
    obj *Type
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewType().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewTypeBuilder() *TypeBuilder {
    return &TypeBuilder{
        obj: NewType(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewType().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *TypeBuilder) Name(value string) *TypeBuilder {
    x.obj.Name = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewType().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *TypeBuilder) Emit() *Type {
    var objCopy Type = *x.obj
    return &objCopy
}

func (x *Type) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Type"); err != nil {
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

func (x *Type) Read(p thrift.Protocol) error {
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

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            if err := x.readField1(p); err != nil {
                return err
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

func (x *Type) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Type({")
    sb.WriteString(fmt.Sprintf("Name:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type Adapter struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Adapter{}

func NewAdapter() *Adapter {
    return (&Adapter{}).
        SetNameNonCompat("")
}

func (x *Adapter) GetNameNonCompat() string {
    return x.Name
}

func (x *Adapter) GetName() string {
    return x.Name
}

func (x *Adapter) SetNameNonCompat(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) SetName(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) writeField1(p thrift.Protocol) error {  // Name
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

func (x *Adapter) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetNameNonCompat(result)
    return nil
}

func (x *Adapter) toString1() string {  // Name
    return fmt.Sprintf("%v", x.GetNameNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewAdapter().Set<FieldNameFoo>().Set<FieldNameBar>()
type AdapterBuilder struct {
    obj *Adapter
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewAdapter().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewAdapterBuilder() *AdapterBuilder {
    return &AdapterBuilder{
        obj: NewAdapter(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewAdapter().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *AdapterBuilder) Name(value string) *AdapterBuilder {
    x.obj.Name = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewAdapter().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *AdapterBuilder) Emit() *Adapter {
    var objCopy Adapter = *x.obj
    return &objCopy
}

func (x *Adapter) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Adapter"); err != nil {
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

func (x *Adapter) Read(p thrift.Protocol) error {
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

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            if err := x.readField1(p); err != nil {
                return err
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

func (x *Adapter) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Adapter({")
    sb.WriteString(fmt.Sprintf("Name:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type Derive struct {
    Derives []string `thrift:"derives,1" json:"derives" db:"derives"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Derive{}

func NewDerive() *Derive {
    return (&Derive{}).
        SetDerivesNonCompat(make([]string, 0))
}

func (x *Derive) GetDerivesNonCompat() []string {
    return x.Derives
}

func (x *Derive) GetDerives() []string {
    if !x.IsSetDerives() {
        return make([]string, 0)
    }

    return x.Derives
}

func (x *Derive) SetDerivesNonCompat(value []string) *Derive {
    x.Derives = value
    return x
}

func (x *Derive) SetDerives(value []string) *Derive {
    x.Derives = value
    return x
}

func (x *Derive) IsSetDerives() bool {
    return x != nil && x.Derives != nil
}

func (x *Derive) writeField1(p thrift.Protocol) error {  // Derives
    if err := p.WriteFieldBegin("derives", thrift.LIST, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetDerivesNonCompat()
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

func (x *Derive) readField1(p thrift.Protocol) error {  // Derives
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

    x.SetDerivesNonCompat(result)
    return nil
}

func (x *Derive) toString1() string {  // Derives
    return fmt.Sprintf("%v", x.GetDerivesNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewDerive().Set<FieldNameFoo>().Set<FieldNameBar>()
type DeriveBuilder struct {
    obj *Derive
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewDerive().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewDeriveBuilder() *DeriveBuilder {
    return &DeriveBuilder{
        obj: NewDerive(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewDerive().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *DeriveBuilder) Derives(value []string) *DeriveBuilder {
    x.obj.Derives = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewDerive().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *DeriveBuilder) Emit() *Derive {
    var objCopy Derive = *x.obj
    return &objCopy
}

func (x *Derive) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Derive"); err != nil {
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

func (x *Derive) Read(p thrift.Protocol) error {
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

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.LIST)):  // derives
            if err := x.readField1(p); err != nil {
                return err
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

func (x *Derive) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("Derive({")
    sb.WriteString(fmt.Sprintf("Derives:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

type ServiceExn struct {
    AnyhowToApplicationExn bool `thrift:"anyhow_to_application_exn,1" json:"anyhow_to_application_exn" db:"anyhow_to_application_exn"`
}
// Compile time interface enforcer
var _ thrift.Struct = &ServiceExn{}

func NewServiceExn() *ServiceExn {
    return (&ServiceExn{}).
        SetAnyhowToApplicationExnNonCompat(false)
}

func (x *ServiceExn) GetAnyhowToApplicationExnNonCompat() bool {
    return x.AnyhowToApplicationExn
}

func (x *ServiceExn) GetAnyhowToApplicationExn() bool {
    return x.AnyhowToApplicationExn
}

func (x *ServiceExn) SetAnyhowToApplicationExnNonCompat(value bool) *ServiceExn {
    x.AnyhowToApplicationExn = value
    return x
}

func (x *ServiceExn) SetAnyhowToApplicationExn(value bool) *ServiceExn {
    x.AnyhowToApplicationExn = value
    return x
}

func (x *ServiceExn) writeField1(p thrift.Protocol) error {  // AnyhowToApplicationExn
    if err := p.WriteFieldBegin("anyhow_to_application_exn", thrift.BOOL, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetAnyhowToApplicationExnNonCompat()
    if err := p.WriteBool(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *ServiceExn) readField1(p thrift.Protocol) error {  // AnyhowToApplicationExn
    result, err := p.ReadBool()
if err != nil {
    return err
}

    x.SetAnyhowToApplicationExnNonCompat(result)
    return nil
}

func (x *ServiceExn) toString1() string {  // AnyhowToApplicationExn
    return fmt.Sprintf("%v", x.GetAnyhowToApplicationExnNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewServiceExn().Set<FieldNameFoo>().Set<FieldNameBar>()
type ServiceExnBuilder struct {
    obj *ServiceExn
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewServiceExn().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewServiceExnBuilder() *ServiceExnBuilder {
    return &ServiceExnBuilder{
        obj: NewServiceExn(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewServiceExn().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *ServiceExnBuilder) AnyhowToApplicationExn(value bool) *ServiceExnBuilder {
    x.obj.AnyhowToApplicationExn = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewServiceExn().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *ServiceExnBuilder) Emit() *ServiceExn {
    var objCopy ServiceExn = *x.obj
    return &objCopy
}

func (x *ServiceExn) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("ServiceExn"); err != nil {
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

func (x *ServiceExn) Read(p thrift.Protocol) error {
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

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.BOOL)):  // anyhow_to_application_exn
            if err := x.readField1(p); err != nil {
                return err
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

func (x *ServiceExn) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("ServiceExn({")
    sb.WriteString(fmt.Sprintf("AnyhowToApplicationExn:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/annotation/rust/Exhaustive", func() any { return NewExhaustive() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Ord", func() any { return NewOrd() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/NewType", func() any { return NewNewType_() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Type", func() any { return NewType() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Adapter", func() any { return NewAdapter() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Derive", func() any { return NewDerive() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/ServiceExn", func() any { return NewServiceExn() })

}
