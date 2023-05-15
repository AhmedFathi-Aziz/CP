<?php
    $a = explode(' ', trim(fgets(STDIN)));
    $b = explode(' ', trim(fgets(STDIN)));

    echo $a[1] == $b[1] ? 'ARE Brothers' : 'NOT';