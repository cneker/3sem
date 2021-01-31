<?php
session_start();
foreach ($_SESSION['history'] as $his){
    echo $his,"<br>";
}
?>
<form action="index.php">
    <button>Main</button>
</form>