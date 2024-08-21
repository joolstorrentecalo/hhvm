//// a.php
<?hh
// package pkg1
class A {}

//// b.php
<?hh
<<file: __PackageOverride('pkg2')>> // package pkg2 (include pkg1)
class B {}

//// c.php
<?hh
<<file: __PackageOverride('pkg3')>> // package pkg3 (include pkg2)
<<__EntryPoint>>
function test(): void {
   $b = new B(); // ok
   $a = new A(); // error
}
