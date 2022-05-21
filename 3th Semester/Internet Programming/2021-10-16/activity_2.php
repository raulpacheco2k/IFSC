<?php

//Edite o Exercício 01 e crie um array de arrays, listando o nome e nota de 5
//alunos Imprima na tela uma lista de alunos e seu desempenho acadêmico/
//nota e status - aprovado/recuperação.

class Calculator
{
    static public function median(array $numbers): float
    {
        return round(self::sum($numbers) / count($numbers), 2);
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
            return "A média do aluno é superior a média, logo, o aluno está aprovado!";
        }
        return "A média do aluno é inferior a média, logo, o aluno está em recuperação!";
    }
}

$students = [
    ["name" => "Joana", "notes" => [10, 5, 5]],
    ["name" => "Mateus", "notes" => [2, 6, 8]],
    ["name" => "Mario", "notes" => [8, 2, 5]],
    ["name" => "João", "notes" => [2, 5, 7]],
    ["name" => "Maria", "notes" => [10, 1, 3]]
];

foreach ($students as $student) {
    print("Nome: {$student['name']}" . PHP_EOL);
    print("Média: " . Calculator::median($student['notes']) . PHP_EOL);
    print(School::situation(Calculator::median($student['notes'])) . PHP_EOL);
    print("---------------------------" . PHP_EOL);
}


