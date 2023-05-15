<?php
    $a = fgets(STDIN);
    $b = (int) $a;

    $a -= $b;
    if ($a)
        echo 'float ' . $b . ' ' . $a;
    else echo 'int ' . $b;