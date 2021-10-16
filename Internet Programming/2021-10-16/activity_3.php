<?php

$max = 0;
$array = [44, 30, 7];

foreach ($array as $item) {
    if ($item > $max) {
        $max = $item;
    }
}

function bubble_sort($arr)
{
    $size = count($arr) - 1;
    for ($i = 0; $i < $size; $i++) {
        for ($j = 0; $j < $size - $i; $j++) {
            $k = $j + 1;
            if ($arr[$k] < $arr[$j]) {
                list($arr[$j], $arr[$k]) = array($arr[$k], $arr[$j]);
            }
        }
    }
    return $arr;
}

$array = bubble_sort($array);

foreach ($array as $item) {
    print("$item, ");
}

print(PHP_EOL . "O maior número é {$max}.");