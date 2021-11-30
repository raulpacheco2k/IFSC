<?php

require_once('./Vendor/autoload.php');

class Card
{
    public function __construct(
        private int    $number,
        private int    $cvv,
        private string $validate
    )
    {
    }
}