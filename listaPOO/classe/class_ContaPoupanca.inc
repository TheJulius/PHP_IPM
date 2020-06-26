<?php

require_once 'class_ContaBancaria.inc';

class ContaPoupanca extends ContaBancaria {
    
    private $juros;
    
    function getJuros() {
        return $this->juros;
    }

    function setJuros($juros) {
        $this->juros = $juros;
    }
    
    public function AdicionarRendimento($juros) {
        return $this->setSaldoAtual = $this->setSaldoAtual() * $juros;  
    }
    
}
