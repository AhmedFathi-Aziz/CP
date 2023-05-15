<?php
    $numbers = explode(' ', trim(fgets(STDIN)));

    for ($i = 0; $i < count($numbers); $i++)
        echo $numbers[$i] . "\n";