<?php

require_once('Vendor/autoload.php');

$address = new Address(
    '00000-00',
    'Rua Zero',
    '000',
    'Apto. 000',
    'Zero de Novo',
    'Tubarão'
);

$client = new Client(
    'Raul Pacheco Domingos',
    '000.000.000-00',
    '(00) 00000-0000',
    $address
);

$account = new Savings(
    1.5,
    '1823891',
    10000,
    7500,
    $client
);

print($account->client()->address()->address());