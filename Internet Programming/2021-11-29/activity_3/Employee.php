<?php

class Employee extends Worker
{
    public function __construct(
        float $salary,
        float $taxes,
        string $name,
        string $position,
        string $address,
        int $telephone,
        int $document_rg
    )
    {
        $this->name = $name;
        $this->position = $position;
        $this->address = $address;
        $this->telephone = $telephone;
        $this->document_rg = $document_rg;
    }

    public function calculateSalary()
    {
        
    }

    public function show()
    {

    }
}