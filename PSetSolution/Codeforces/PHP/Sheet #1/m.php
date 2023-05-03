<?php
    $a = trim(fgets(STDIN));
    if (ctype_alpha($a))
    {
        echo 'ALPHA' . "\n";
        echo ctype_upper($a) ? 'IS CAPITAL' : 'IS SMALL';
    }
    else echo 'IS DIGIT';