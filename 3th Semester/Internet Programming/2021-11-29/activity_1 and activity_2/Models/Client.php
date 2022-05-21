<?php

require_once('./Vendor/autoload.php');

class Client extends Person
{
    public function __construct(
        protected string  $name,
        protected string  $document_cpf,
        protected string  $telephone,
        protected Address $address
    )
    {
        parent::__construct(
            $name,
            $document_cpf,
            $telephone,
            $address
        );
    }

    public function address(): Address
    {
        return $this->address;
    }
}