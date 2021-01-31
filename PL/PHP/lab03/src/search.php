<?php
function Search($Words, $Text)
{
    $Text = trim($Text, ",.!?"); 
    $Words = trim($Words, ",.!?");
    
    $Text=explode(" ", $Text); 
    $Words=explode(" ", $Words);
    
    foreach ($Words as $Word)
    {
        $i=0;
        while ($Text[$i] && $Word != $Text[$i])
        {
            $i++;
        }
        if ($Text[$i] && $Word == $Text[$i]) {
            echo "Слово \"$Word\" было найдено" . "<br>";
            if (count($Words) == 1) {
                return $i;
            }
        } else
        echo "Слово \"$Word\" не было найдено" . "<br>";   
    }
    
}
?>
