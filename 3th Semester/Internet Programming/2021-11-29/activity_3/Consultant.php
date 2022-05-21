<?php

class Consultant extends Worker
{
    public function __construct(
        int $hours,
        private $tariffs,
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

    public function chargeCalculate()
    {
        
    }

    public function show()
    {
        
    }
}