<?php

require_once('./Vendor/autoload.php');

class Person
{
    public function __construct(
        private string $name,
        private string $document_cpf,
        private string $telefone,
        private Address $address
    )
    {
    }


}