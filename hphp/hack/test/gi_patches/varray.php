<?hh

/* HH_FIXME[2071] */
/* HH_FIXME[4030] */
function f(varray $v) {
  $v[3] = "foo";
  return $v[34897];
}

/* HH_FIXME[2071] */
/* HH_FIXME[4030] */
function g(varray $v) {
  expect<string>($v[0]);
}

/* HH_FIXME[2071] */
function h(): varray {
  return varray['billie', 'willie'];
}

/* HH_FIXME[2071] */
function i(): varray {
  $x = varray[];
  $x[] = 'bob';
  return $x;
}

function expect<T>(T $_): void {}
