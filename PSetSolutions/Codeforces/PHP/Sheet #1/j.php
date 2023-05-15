<?php
    $a = explode(' ', trim(fgets(STDIN)));
    if ($a[0] % $a[1] == 0 || $a[1] % $a[0] == 0)
        echo 'Multiples';
    else echo 'No Multiples';