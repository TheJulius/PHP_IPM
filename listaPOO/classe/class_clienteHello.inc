<?php

require_once 'class_usuario.inc';

class ClienteHello extends usuario{
    
    public function hello(){
        return 'Seja bem vindo: ' .$this->getNome();
    }
}
