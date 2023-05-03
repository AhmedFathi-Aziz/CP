<?php
    $a = explode(' ', trim(fgets(STDIN)));
    echo $a[0] >= $a[1] ? 'Yes' : 'No';