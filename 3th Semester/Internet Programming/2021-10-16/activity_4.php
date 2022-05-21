<?php

//Crie um programa em PHP que receba o salário de um colaborador e calcule reajuste
//segundo o seguinte critério, baseado no salário atual:
//i. Salários até (e incluindo) R$ 280,00: aumento de 20%;
//ii. Salários entre R$ 280,00 e R$ 700,00: aumento de 15%;
//iii. Salários entre R$ 700,00 e R$ 1500,00: aumento de 10%;
//iv. Salários de R$ 1500,00 em diante: aumento de 5%;
//Após o aumento ser calculado, deverá ser informado: o salário antes do reajuste; o
//percentual de aumento aplicado; o valor do aumento e o novo salário.

class Salary
{
    public float $increase_amount;
    public float $new_salary;

    public function __construct(
        public float $original_salary,
        public int   $percentage_of_applied_increase,
    )
    {
        $this->increase_amount = $this->original_salary * ($this->percentage_of_applied_increase / 100);
        $this->new_salary = $this->original_salary + $this->increase_amount;
    }
}

$salary = 2000;

if ($salary <= 280) {
    $salary = new Salary($salary, 20);
} elseif ($salary <= 700) {
    $salary = new Salary($salary, 15);
} elseif ($salary <= 1500) {
    $salary = new Salary($salary, 10);
} else {
    $salary = new Salary($salary, 5);
}

print($salary->new_salary);