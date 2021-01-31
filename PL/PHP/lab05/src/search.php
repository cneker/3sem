<h4>Поиск по данным:</h4>
<form action='' method="GET">
    <input type="text" placeholder="поиск" name="search">
    <input type='submit' value='Search' name="Submit">
</form>
<?php
include_once 'class.php';
$users_array->searchphp($_GET['search']);
?>


<html>
    <form action="index.php" method="GET">
        <button>Back</button>
    </form>
</html>