<?php
    $a = explode(' ', trim(fgets(STDIN)));
    echo (int) $a[0] % 10 + (int) $a[1] % 10;