<?php
session_start();

if($_SESSION['type']==1){
    echo "User";
    if (!isset($_SESSION['counter'][0])){
        $_SESSION['counter'][0] = 0;
    }
    if (!isset($_SESSION['counter'][1])){
        $_SESSION['counter'][1] = 0;
    }
    if (!isset($_SESSION['counter'][2])){
        $_SESSION['counter'][2] = 0;
    }
    if (!isset($_SESSION['counter'][3])){
        $_SESSION['counter'][3] = 0;
    }
    $_SESSION['counter'][0] = $_SESSION['counter'][0] + 1;
    $_SESSION['history'][] = $_SERVER['REQUEST_URI'];
}
elseif($_SESSION['type']==2){
    echo "Admin";
    $_SESSION['history'][] = $_SERVER['REQUEST_URI'];
}
else{
    echo "Noname"; 
}

echo $_SESSION['counter'][0];
?>
<html>
    <head>
        <title>Wild world</title>
    </head>
        <?php
        if($_SESSION['type']==0){?>
        <center><form action="registration.php">
            <button>Login</button>
        </form></center>
        <?php } 
        elseif($_SESSION['type']==1 or $_SESSION['type']==2){?>
        <center><form action="logoff.php">
            <button>Logoff</button>
        </form></center>
        <form action="history.php">
            <button>history</button>
        </form>
        <?php } ?>
        <?php
        if($_SESSION['type']==2){?>
        <br>
        <form action="info.php">
            <button>Info</button>
        </form>
        <?php } ?>
        <br><br>
    <body background="pictures/Wood13_col.jpg">
        <strong><a href="tigeres.php">Tigers</a></strong><br>
        <?php
        if($_SESSION['type']==1 or $_SESSION['type']==2){?>
        <strong><a href="wolfs.php">Wolfs</a></strong><br>
        <strong><a href="birds.php">Birds</a></strong><br>
        <?php } ?>
    </body>
</html>