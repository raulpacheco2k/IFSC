<?php

require_once('./Vendor/autoload.php');

abstract class BankAccount
{
    public function __construct(
        protected int    $number,
        protected float  $balance,
        protected float  $limit,
        protected Client $client
    )
    {
    }

    public function getBalance(): float
    {
        return $this->balance;
    }

    private function setBalance(float $balance): void
    {
        $this->balance = $balance;
    }

    public function getLimit(): float
    {
        return $this->limit;
    }

    public function withdraw(float $value): void
    {
        if ($value <= ($this->getBalance() + $this->getLimit())) {
            $this->setBalance($this->getBalance() - $value);
        }
    }

    public function deposit(): void
    {

    }

    public function extract(): string
    {
        return "";
    }
}