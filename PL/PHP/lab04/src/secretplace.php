<?php
session_start();
if(!isset($_SESSION['logged_user'])){
    header("Location: index.php");
    exit;
}