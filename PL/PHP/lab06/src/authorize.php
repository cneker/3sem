<?php
include_once "connect.php";
$users = mysqli_query($connect, "SELECT * FROM `users`");
$users = mysqli_fetch_all($users);
session_start();
foreach ($users as $user)
{
    $name = "$user[1]";
    $password = "$user[2]";
    $priority = "$user[3]";
    if($_POST['Submit']){
        if(($_POST['user_name']==$name)&&($_POST['user_pass']==$password)){
            $_SESSION['type']=$priority;
            $_SESSION['name']=$name;
            header("Location: index.php");
            exit;
        }
        elseif(($_POST['user_name']==$name)&&($_POST['user_pass']==$password)){
            $_SESSION['type']=$priority;
            $_SESSION['name']=$name;
            header("Location: index.php");
            exit;
        }
    }
    elseif($_POST['Exit']){
        header("Location: index.php");
        exit;
    }
}
?>
<html><body>
Wrong password! or not)
</body></html>