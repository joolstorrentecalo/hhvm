<?hh



<<__EntryPoint>>
function main_869() :mixed{
$i = 0;
 ++$i; print $i;
 print "\t";
 print (1===true) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===true) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = true;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === true	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===false) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===false) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = false;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === false	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 1;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === 1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===0) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===0) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 0;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === 0	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===-1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===-1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = -1;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === -1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1==='1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ==='1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '1';
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === '1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1==='0') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ==='0') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '0';
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === '0'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1==='-1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ==='-1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '-1';
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === '-1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===null) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===null) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = null;
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === null	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===dict[]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===dict[]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict[];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array()	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec[1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec[1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[1];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array(1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec[2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec[2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[2];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array(2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec['1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec['1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['1'];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===dict['0' => '1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===dict['0' => '1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['0' => '1'];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('0' => '1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec['a']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec['a']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['a'];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('a')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===dict['a' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===dict['a' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('a' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===dict['b' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===dict['b' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['b' => 1];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('b' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1, 'b' => 2];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array('a' => 1, 'b' => 2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['a' => 1]];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array(array('a' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['b' => 1]];
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === array(array('b' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1==='php') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ==='php') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 'php';
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === 'php'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (1==='') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = 1;
 print ($a ==='') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '';
 print (1===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "1 === ''	";
 print "\n";
}
