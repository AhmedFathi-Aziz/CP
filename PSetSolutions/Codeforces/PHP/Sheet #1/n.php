<?php
    $a = trim(fgets(STDIN));
    echo ctype_upper($a) ? strtolower($a) : strtoupper($a);