<?php
session_start();
$file = file_get_contents("logas.txt");
$value = unserialize($file);
echo "Main window - ", $value[0],"<br>";
echo "Tigers window - ",$value[1],"<br>";
echo "Wolfs window - ",$value[2],"<br>";
echo "Birds window - ",$value[3],"<br>";
/* print_r($value); */
?>
<form action="index.php">
    <button>Main</button>
</form>