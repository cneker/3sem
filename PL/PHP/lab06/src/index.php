<?php

include_once "connect.php";

session_start();

if($_SESSION['type']=="user"){
    echo "User";
    echo "<br>Hellow, ", $_SESSION['name'];
}
elseif($_SESSION['type']=="admin"){
    echo "Admin";
    echo "<br>Hellow, ", $_SESSION['name'];
}
else{
    echo "Noname"; 
}

?>




<html>
    <head>
        <title>Wild world</title>
    </head>
        <?php
        if($_SESSION['type']=="user" or $_SESSION['type']=="admin"){?>
        <center><form action="logoff.php">
            <button>Logoff</button>
        </form></center>
        <?php } 
        elseif($_SESSION['type']==0){?>
        <center><form action="login.html">
            <button>Login</button>
        </form><form action="registration.html">
            <button>Registration</button>
        </form></center>>
        <?php } ?>
        <?php
        if($_SESSION['type']=="admin"){?>
        <br>
        <form action="info.php">
            <button>Info</button>
        </form>
        <?php } ?>
        <br><br>
    <body background="pictures/Wood13_col.jpg">
        <strong><a href="tigeres.php">Tigers</a></strong><br>
        <?php
        if($_SESSION['type']=="user" or $_SESSION['type']=="admin"){?>
        <strong><a href="wolfs.php">Wolfs</a></strong><br>
        <strong><a href="birds.php">Birds</a></strong><br>
        <?php } ?>
    </body>
</html>