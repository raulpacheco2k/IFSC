<?php

require_once('./Vendor/autoload.php');

class Address
{
    public function __construct(
        protected string $zipCode,
        protected string $street,
        protected int    $number,
        protected string $complement,
        protected string $neighborhood,
        protected string $city,
    )
    {
    }

    public function address(): string
    {
        return "$this->street n.$this->number, $this->complement, $this->neighborhood, $this->city, $this->zipCode";
    }
}