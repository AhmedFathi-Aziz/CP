<?php
    $a = fgets(STDIN);
    $a /= 1000;
    if ($a & 1)
        echo 'ODD';
    else echo 'EVEN';