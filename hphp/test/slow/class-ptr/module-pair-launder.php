<?hh

<<__EntryPoint>>
function main(): void {
  include 'module-pair-a.inc';
  include 'module-pair-b-launder.inc';

  BPublic::test();
}
