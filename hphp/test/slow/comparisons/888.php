<?hh



<<__EntryPoint>>
function main_888() :mixed{
$i = 0;
 ++$i; print $i;
 print "\t";
 print (''===true) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===true) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = true;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === true	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===false) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===false) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = false;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === false	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 1;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === 1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===0) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===0) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 0;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === 0	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===-1) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===-1) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = -1;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === -1	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''==='1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ==='1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '1';
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === '1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''==='0') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ==='0') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '0';
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === '0'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''==='-1') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ==='-1') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '-1';
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === '-1'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===null) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===null) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = null;
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === null	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===dict[]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===dict[]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict[];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array()	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec[1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec[1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[1];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array(1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec[2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec[2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[2];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array(2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec['1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec['1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['1'];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===dict['0' => '1']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===dict['0' => '1']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['0' => '1'];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('0' => '1')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec['a']) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec['a']) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec['a'];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('a')	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===dict['a' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===dict['a' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('a' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===dict['b' => 1]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===dict['b' => 1]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['b' => 1];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('b' => 1)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===dict['a' => 1, 'b' => 2]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = dict['a' => 1, 'b' => 2];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array('a' => 1, 'b' => 2)	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec[dict['a' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['a' => 1]];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array(array('a' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ===vec[dict['b' => 1]]) ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = vec[dict['b' => 1]];
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === array(array('b' => 1))	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''==='php') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ==='php') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = 'php';
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === 'php'	";
 print "\n";
 ++$i; print $i;
 print "\t";
 print (''==='') ? 'Y' : 'N';
 $a = 1;
 $a = 't';
 $a = '';
 print ($a ==='') ? 'Y' : 'N';
 $b = 1;
 $b = 't';
 $b = '';
 print (''===$b) ? 'Y' : 'N';
 print ($a ===$b) ? 'Y' : 'N';
 print "\t";
 print "'' === ''	";
 print "\n";
}
