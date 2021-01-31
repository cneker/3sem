<!DOCTYPE html>

<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>laba3</title>
</head>

<body>

    <?php
    include("generate_html.php");
    $form = former();


    if ($_GET['button'] == "Search") {
        if (!($_GET['words'] && $_GET['text']))
            echo "Вы ввели неверные данные, попробуйте ещё";
        else {
            $Words = $_GET['words'];
            $Text = $_GET['text'];
            include("search.php");
            Search($Words, $Text);
        }
    }

    if($_GET['button'] == "SearchTeg"){
        $Teg = $_GET['teg'];
        include("search_teg.php");
        search_teg($Teg);
    }

    include("statistic.php");
    get_info();
    include("generate_tegs.php");
    get_tegs();


    ?>

</body>

</html>