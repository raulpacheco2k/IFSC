<?php

class Worker
{
    public function __construct(
        public string $name,
        public string $position,
        protected string $address,
        private int $telephone,
        private int $document_rg
    )
    {
    }

    public function compare()
    {
        
    }

    public function show()
    {

    }
}