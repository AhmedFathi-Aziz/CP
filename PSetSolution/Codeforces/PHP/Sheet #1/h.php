<?php
    $a = explode(' ', trim(fgets(STDIN)));
    echo 'floor '. $a[0] . ' / ' . $a[1] . ' = ' . floor((int) $a[0] / (int) $a[1]) . "\n";
    echo 'ceil '. $a[0] . ' / ' . $a[1] . ' = ' . ceil((int) $a[0] / (int) $a[1]) . "\n";
    echo 'round '. $a[0] . ' / ' . $a[1] . ' = ' . round((int) $a[0] / (int) $a[1]) . "\n";