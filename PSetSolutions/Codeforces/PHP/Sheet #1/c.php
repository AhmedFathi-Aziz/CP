<?php
    $a = explode(' ', trim(fgets(STDIN)));
    echo $a[0] . ' + ' . $a[1] . ' = ' . (int) $a[0] + (int) $a[1] . "\n";
    echo $a[0] . ' * ' . $a[1] . ' = ' . (int) $a[0] * (int) $a[1] . "\n";
    echo $a[0] . ' - ' . $a[1] . ' = ' . (int) $a[0] - (int) $a[1] . "\n";