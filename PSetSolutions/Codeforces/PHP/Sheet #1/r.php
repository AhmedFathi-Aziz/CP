<?php
    $a = fgets(STDIN);
    echo (int) ($a / 365) . ' years' . "\n";
    $a %= 365;
    echo (int) ($a / 30) . ' months' . "\n";
    $a %= 30;
    echo $a . ' days';