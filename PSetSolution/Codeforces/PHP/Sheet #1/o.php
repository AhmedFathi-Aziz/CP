<?php
    $a = trim(fgets(STDIN));
    $n1 = '';
    $n2 = '';
    $operator = '';
    $flag = true;
    for ($i = 0; $i < strlen($a); $i++) {
        if (ctype_digit($a[$i]) && $flag)
            $n1 .= $a[$i];
        else {
            if ($flag) {
                $operator = $a[$i];
                $flag = false;
                continue;
            }
            else $n2 .= $a[$i];
        }
    }
    switch($operator) {
        case '+':
            echo (int) $n1 + (int) $n2;
            break;
        case '-':
            echo (int) $n1 - (int) $n2;
            break;
        case '*':
            echo (int) $n1 * (int) $n2;
            break;
        case '/':
            echo (int) ((int) $n1 / (int) $n2);
    }