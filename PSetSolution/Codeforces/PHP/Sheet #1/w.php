<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[1] == '+') {
        if ($a[0] + $a[2] == $a[4])
            echo 'Yes';
        else echo $a[0] + $a[2];
    } else if ($a[1] == '-') {
        if ($a[0] - $a[2] == $a[4])
            echo 'Yes';
        else echo $a[0] - $a[2];
    } else {
        if ($a[0] * $a[2] == $a[4])
            echo 'Yes';
        else echo $a[0] * $a[2];
    }