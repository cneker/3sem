<?php
session_start();
if($_SESSION['type']==1){
/*     $str = serialize($_SESSION['history']); */
    $str = serialize(($_SESSION['counter']));
}
$fp = fopen("logas.txt", "w");
fwrite($fp, $str);
fclose($fp);
session_unset();
session_destroy();
header("Location: index.php");
?>