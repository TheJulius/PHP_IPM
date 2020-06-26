<?php

class Cliente {

    private $nome;
    private $email;
    private $telefone;

    function getNome() {
        return $this->nome;
    }

    function getEmail() {
        return $this->email;
    }

    function getTelefone() {
        return $this->telefone;
    }

    function setNome($nome) {
        $this->nome = $nome;
    }

    function setEmail($email) {
        $this->email = $email;
    }

    function setTelefone($telefone) {
        $this->telefone = $telefone;
    }

    public function exibir() {
        $html = 
       '<fieldset>
        <legend>Cliente</legend>
            <table>
            <tr>
                <td>Saldo Inicial: ' . $this->nome . '</td>
            </tr>
            <tr>
                <td>Email: ' . $this->email . '</td>
            </tr>
            <tr>
                <td>Telefone: '. $this->telefone . '</td>
            </tr>
        </table>
        </fieldset>'
        ;
        return $html;
    }

}
