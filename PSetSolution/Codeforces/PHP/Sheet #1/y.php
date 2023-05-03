<?php
    $a = explode(' ', trim(fgets(STDIN)));
    $out = $a[0] % 100 * $a[1] % 100 * $a[2] % 100 * $a[3] % 100;
    
    if (($out / 10) % 10 == 0)
        echo 0 . $out % 10;
    else echo $out % 100;