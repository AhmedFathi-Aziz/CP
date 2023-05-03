<?php
    $a = explode(' ', trim(fgets(STDIN)));
    echo min($a[0], $a[1], $a[2]) . ' ' . max($a[0], $a[1], $a[2]);