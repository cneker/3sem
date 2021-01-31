<?php

$connect = mysqli_connect('localhost', 'root', 'root', 'crud');

if (!$connect){
    echo "Erroror";
}