<?php
include_once 'class.php';

if(isset($_POST['Login']) && isset($_POST['Name']) && isset($_POST['Password']) 
&& !empty($_POST['Login']) && !empty($_POST['Name']) && !empty($_POST['Password']))
{      
$users_array->addRow(array("Login"=>$_POST['Login'],"Name"=>$_POST['Name'],"Password"=>$_POST['Password']));
$users_array->writephp($users_array->data);
    echo "User addddd!<br>";
}
else{exit("Неверно введены данные!");}
?>


<html>
    <form action="index.php" method="GET">
        <button>Back</button>
    </form>
</html>