<?php

require_once('./Vendor/autoload.php');

class Agency
{
    public function __construct(
        private int     $number,
        private Address $address
    )
    {
    }
}