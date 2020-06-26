<?php

require_once 'class_automovel.php';

class moto extends Automovel {
    
    private $cilindradas;
    
    public function getCilindradas() {
        return $this->cilindradas;
    }

    public function setCilindradas($cilindradas) {
        $this->cilindradas = $cilindradas;
    }
    
    public function empinar(){
        
    }


}
