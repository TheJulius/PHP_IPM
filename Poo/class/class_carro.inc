<?php

require_once 'class_automovel.php';

class Carro extends Automovel {
   
    public function abrirPorta(){
        return 'Porta do' .$this->modelo. 'aberta';
    }
    public function fecharPorta(){
        return 'Porta do' .$this->modelo. 'fechada';
    }
   
}
