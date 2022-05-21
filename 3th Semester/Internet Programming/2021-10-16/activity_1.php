<?php

// Faça um programa que calcule a média aritmética de três notas de um
// aluno. Imprima a média final, e indique se o aluno foi aprovado ou está em
// recuperação (média 6).


class Calculator
{
    static public function median(array $numbers): float
    {
        return self::sum($numbers) / count($numbers);
    }

    static public function sum(array $numbers): float
    {
        return array_sum($numbers);
    }
}

class School
{
    static public function situation($median): string
    {
        if ($median >= 6) {
            return "A média do aluno é {$median}, logo, o aluno está aprovado!";
        }
        return "A média do aluno é {$median}, logo, o aluno está em recuperação!";
    }
}

$median = round(Calculator::median(array(8, 0, 8)), 1);

print(School::situation($median));


