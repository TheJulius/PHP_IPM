<?php

class usuario {
    
    private $nome;
    private $sobrenome;
    
    public function getNome() {
        return $this->nome;
    }

    public function getSobrenome() {
        return $this->sobrenome;
    }

    public function setNome($nome) {
        $this->nome = $nome;
    }

    public function setSobrenome($sobrenome) {
        $this->sobrenome = $sobrenome;
    }
    
    public function hello() {
        return 'Olá Usuário: '.$this->nome;
        
    }


    
}
