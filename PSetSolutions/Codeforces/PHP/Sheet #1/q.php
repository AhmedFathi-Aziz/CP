<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[0] == 0 && $a[1] == 0)
        echo 'Origem';
    else if ($a[0] == 0 && $a[1] != 0)
        echo 'Eixo Y';
    else if ($a[0] != 0 && $a[1] == 0)
        echo 'Eixo X';
    else if ($a[0] > 0 && $a[1] > 0)
        echo 'Q1';
    else if ($a[0] < 0 && $a[1] > 0)
        echo 'Q2';
    else if ($a[0] < 0 && $a[1] < 0)
        echo 'Q3';
    else echo 'Q4';
        