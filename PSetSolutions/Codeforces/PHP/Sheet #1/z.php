<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[1] * log10($a[0]) > $a[3] * log10($a[2]))
        echo 'YES';
    else echo 'NO';