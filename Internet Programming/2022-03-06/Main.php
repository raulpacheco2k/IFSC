<?php

require_once('Vendor/autoload.php');

$candidate = new Candidate(1, "Maria", 1);
$candidate = new Candidate(2, "João", 2);
$candidate = new Candidate(3, "Mathues", 3);



print $candidate->getName();
