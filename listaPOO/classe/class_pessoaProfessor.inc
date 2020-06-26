<?php

class class_pessoaProfessor {
    private $nome;
    private $matricula;
    private $horasTrabalhadas;
    private $TipoProfessor;
    
    function __construct($horasTrabalhadas) {
        $this->horasTrabalhadas = 40;
        $this->horasTrabalhadas = $horasTrabalhadas;
    }

    
    function getTipoProfessor() {
        return $this->TipoProfessor;
    }

    function setTipoProfessor($TipoProfessor) {
        $this->TipoProfessor = $TipoProfessor;
    }

        function getNome() {
        return $this->nome;
    }

    function getMatricula() {
        return $this->matricula;
    }

    function getHorasTrabalhadas() {
        return $this->horasTrabalhadas;
    }

    function setNome($nome) {
        $this->nome = $nome;
    }

    function setMatricula($matricula) {
        $this->matricula = $matricula;
    }

    function setHorasTrabalhadas($horasTrabalhadas) {
        $this->horasTrabalhadas = $horasTrabalhadas;
    }
    
    function Salario($horasTrabalhadas){
        
            return $horasTrabalhadas * 15.25;
            
        }
        
    }
