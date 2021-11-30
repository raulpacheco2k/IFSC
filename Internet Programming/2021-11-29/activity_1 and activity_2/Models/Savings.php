<?php

require_once('./Vendor/autoload.php');

class Savings extends BankAccount
{
    public function __construct(
        protected float  $interestRate,
        protected int    $number,
        protected float  $balance,
        protected float  $limit,
        protected Client $client
    )
    {
        parent::__construct($number, $balance, $limit, $client);
    }

    /**
     * @return Client
     */
    public function client(): Client
    {
        return $this->client;
    }
}