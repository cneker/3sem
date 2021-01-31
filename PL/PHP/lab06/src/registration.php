<?php
include_once "connect.php";
if($_POST['Submit']){
    $name = $_POST['user_name'];
    $password = $_POST['user_pass'];
    mysqli_query($connect, "INSERT INTO `users` (`id`, `name`, `password`, `priority`) VALUES (NULL, '$name', '$password', 'user')");
    header("Location: index.php");
    exit;
}
elseif($_POST['Exit']){
    header("Location: index.php");
    exit;
}
?>