<?php

require_once 'class_usuario.inc';

class Administrador extends usuario{
    
    public function hello() {
        return 'Olá Administrador: '.$this->getNome();
        
    }
}
