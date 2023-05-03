<?php
    $s = fgets(STDIN);
    if ($s >= 0 && $s <= 25)
        echo "Interval [0,25]\n";
    else if ($s > 25 && $s <= 50)
         echo "Interval (25,50]\n";
    else if ($s > 50 && $s <= 75)
              echo "Interval (50,75]\n";
    else if ($s > 75 && $s <= 100)
         echo "Interval (75,100]\n";
    else echo "Out of Intervals\n";
