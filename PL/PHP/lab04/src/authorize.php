<?php
session_start();
if($_POST['Submit']){
    if(($_POST['user_name']=="12345")&&($_POST['user_pass']=="12345")){
        $_SESSION['type']=1;
        $_SESSION['counter'][4];
        unset($_SESSION['uriHistory']);
        header("Location: index.php");
        exit;
    }
    if(($_POST['user_name']=="admin")&&($_POST['user_pass']=="admin")){
        $_SESSION['type']=2;
        unset($_SESSION['uriHistory']);
        header("Location: index.php");
        exit;
    }
}
elseif($_POST['Exit']){
    header("Location: index.php");
    exit;
}
?>
<html><body>
Wrong password!
</body></html>