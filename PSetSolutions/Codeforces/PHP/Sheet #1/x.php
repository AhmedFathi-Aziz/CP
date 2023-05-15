<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[2] > $a[1] || $a[0] > $a[3])
        echo -1;
    else
        echo max($a[0], $a[2]) . ' ' . min($a[1], $a[3]);