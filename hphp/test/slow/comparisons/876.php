<?hh



<<__EntryPoint>>
function main_876() :mixed{
$i = 0;
 ++$i; print $i;
 print "\t";
 print (dict[]===true) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===true) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = true;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === true	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===false) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===false) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = false;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === false	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 1;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === 1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===0) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===0) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 0;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === 0	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===-1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===-1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = -1;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === -1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]==='1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ==='1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '1';
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === '1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]==='0') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ==='0') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '0';
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === '0'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]==='-1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ==='-1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '-1';
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === '-1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===null) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===null) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = null;
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === null	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===dict[]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===dict[]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict[];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array()	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec[1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec[1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[1];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array(1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec[2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec[2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[2];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array(2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec['1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec['1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['1'];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===dict['0' => '1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===dict['0' => '1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['0' => '1'];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('0' => '1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec['a']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec['a']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['a'];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('a')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===dict['a' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===dict['a' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('a' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===dict['b' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===dict['b' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['b' => 1];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('b' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1, 'b' => 2];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array('a' => 1, 'b' => 2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['a' => 1]];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array(array('a' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['b' => 1]];
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === array(array('b' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]==='php') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ==='php') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 'php';
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === 'php'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (dict[]==='') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = dict[];
 print ($a ==='') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '';
 print (dict[]===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "array() === ''	";
 print "\n";
}
