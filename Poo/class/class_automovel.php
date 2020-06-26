<?php

class Automovel {
    
    /** @var Marca */
    protected $Marca;
    protected $modelo;
    protected $cor;
    protected $ano;

    public function __construct($modelo) {

        $this->cor = 'Prata';
        $this->modelo = $modelo;
    }
    
    public function getDadosAutomovel(){
        
        $html = 
           '<table border="1">
            <fieldset>
            <legend>Carro</legend>
            <table>
            <tr>
                <td>Nome:'.$this->modelo.'</td>
            </tr>
            <tr>
                <td><label>Ano:'.$this->ano.'</td>
            </tr>
            <tr>
                <td>Cor: </label>'.$this->cor.'</td>
            </tr>
            <tr>
                <td>*Marca:'.$this->Marca->getNome().' </td>  
            </tr>
            <tr>
                <td>*Pais de Fabricação:'.$this->Marca->setPais().' </td>
            </tr>
            <tr>
        </table>
        </fieldset>'
                ;
        
        return $html;
    }


    public function getMarca() {
        return $this->Marca;
    }

    public function setMarca(Marca $Marca) {
        $this->Marca = $Marca;
    }

    
    public function getModelo() {
        return $this->modelo;
    }

    public function getCor() {
        return $this->cor;
    }

    public function getAno() {
        return $this->ano;
    }

    public function setModelo($modelo) {
        $this->modelo = $modelo;
    }

    public function setCor($cor) {
        $this->cor = $cor;
    }

    public function setAno($ano) {

        if (is_int($ano)) {
            $this->ano = $ano;
        }
    }

    public function ligar() {
        return $this->modelo . 'Ligado';
    }

    public function desligar() {
        return $this->modelo . 'Desligado';
    }

}
