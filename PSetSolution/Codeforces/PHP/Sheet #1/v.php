<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[1] == '=') {
        if ($a[0] == $a[2])
            echo 'Right';
        else echo 'Wrong';
    } else if ($a[1] == '>') {
        if ($a[0] > $a[2])
            echo 'Right';
        else echo 'Wrong';
    } else {
        if ($a[0] < $a[2])
            echo 'Right';
        else echo 'Wrong';
    }