<?hh
<<file: __EnableUnstableFeatures('enum_atom')>>

interface IBox {}
class Box<T> implements IBox {
  public function __construct(public T $data) {}
}
type E = string;
function f<T>(<<__ViaLabel>> HH\MemberOf<E, Box<T>> $elt) : T {
    return $elt->data;
}

<<__EntryPoint>>
 function main() {
    $x = "A";
    echo("Hello " . f($x) . "!\n");
}
