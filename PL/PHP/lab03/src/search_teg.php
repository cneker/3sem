<?php

function search_teg($Teg)
{
    $Array = '<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
        <title>
            Bomj
        </title>
    </head>
    <body background="images/Wood13_col.jpg">
    <strong>Author of this masterpiece</strong>
    <a href="https://vk.com/cnekir">Тык</a>
    <center>
        <p><font color="white"><i>What beautiful animals</i></font></p>
        <table>
            <tr><td><img src="images/Jaguar-spotted-muzzle-predator-big-cat-1065015.jpg"></td>
                <td><img src="images/2d5f967c2b42438.jpg"></td>
                <td><img src="images/koshki-b026189ad125.jpg"></td>
            </tr>
        <tr><td align="center"><font color="white">Jaguar</font></td>
            <td align="center"><font color="white">Tiger</font></td>
            <td align="center"><font color="white">Cheetah</font></td>
        </tr>
        </table>
    </center>
    <font color="white">
    <strong><p>Classification:</p></strong>
    <ul>
        <li>Domain: Eukaryotos</(li)>
        <li>Kingdom: Animals</li>
        <li>Type: Hords</li>
        <li>Class: Mammals</li>
        <li>Squad: Predatory</li>
    </ul>
    <p>Characteristic sign of predators are well differentiated teeth, and fangs are always large, developed. One root tooth on each side of the jaw is transformed into a so-called predatory tooth, which has large dimensions and a sharp cutting edge. With its help, the animals cut the bones and cut the tendon. At omnivnoe animals predatory teeth are expressed worse. Substantial differences are noticeable in the jaws of the lastonogies compared to the terrestrial predators. The jaw of the erasers have devices to hold slippery fish. The walruses have peculiar mutant teeth - tusks, and the seals-craboyeds modified indigenous teeth.</p>
    <p>On the skull of the predatory animal well distinguishable clearly outlined cheekbone arc and extensive temporal depression near the eye socket. This is the location of the powerful temporal muscles for the strong bite of the victim. The structure of the jaw of the predatory is such that movements in the temporally-jawbone joint are possible only up and down, and not as in chewing from side to side.</p>
</font>
</body>
</html>';
    
$Teg2 = "|<$Teg>(.+)</$Teg>|";
$Teg1 = str_replace("<$Teg>", "<$Teg><mark>", $Array);
$Teg3 = str_replace("</$Teg>", "</mark></$Teg>", $Array);
echo $Teg1;
if (preg_match_all("$Teg2", $Array, $arr)){
    foreach ($arr[1] as $value) echo $value." ";
}
else{
    echo "<br>Тег не был найден<br>";
}

}
?>