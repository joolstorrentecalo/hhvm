<?hh

function f(): void {
  $d = dict[];
  $i = 42;
  switch ($i) {
    case 0:
      $d['a'] = 42;
      break;
    case 1:
      $d = dict[];
      $d['b'] = 'hi';
      break;
    default:
      $d['c'] = false;
  }
  $d['d'] = 3.14;
}
