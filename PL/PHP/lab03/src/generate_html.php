<?php
function former()
{
    $form = '<form method="GET" action="index.php" name="form1" >';
    $form .= '<h1>Введите текст</h1>
    <textarea name="text" cols="30" rows="5"></textarea>
    <h1>Введите что нужно найти</h1>
    <input type="text" name="words">
    <br>
    <br>
   
    <button type="submit" name="button" value="Search">search</button>

    <h2>Введите тег</h2>
    <input type="text" name="teg" size="15"><br><br>
    <button name="button" type="submit" value="SearchTeg">Искать</button>
    <br>
    <br>';

    $form .= '</form>';
    echo $form;
    return $form;
}
?>
