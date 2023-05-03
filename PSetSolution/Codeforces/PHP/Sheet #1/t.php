<?php
    $a = explode(' ', trim(fgets(STDIN)));
    $b = $a;

    sort($a);
    for ($i = 0; $i < count($a); $i++)
        echo $a[$i] . "\n";
    echo "\n";
    for ($i = 0; $i < count($b); $i++)
        echo $b[$i] . "\n";