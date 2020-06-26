<?php

require_once 'class_cliente.inc';

class ContaBancaria extends Cliente {
    
    function __construct($Cliente) {
        $this->Cliente = $Cliente;
    }

        /** @var Cliente */
    protected $Cliente;
    private $dataCriacao;
    private $saldoInicial;
    private $saldoAtual;
    private $operacao = [];

    function getCliente() {
        return $this->Cliente;
    }

    function getDataCriacao() {
        return $this->dataCriacao;
    }

    function getSaldoInicial() {
        return $this->saldoInicial;
    }

    function getSaldoAtual() {
        return $this->saldoAtual;
    }

    function getOperacao() {
        return $this->operacao;
    }

    function setCliente(Cliente $Cliente) {
        $this->Cliente = $Cliente;
    }

    function setDataCriacao($dataCriacao) {
        $this->dataCriacao = $dataCriacao;
    }

    function setSaldoInicial($saldoInicial) {
        $this->saldoInicial = $saldoInicial;
    }

    function setSaldoAtual($saldoAtual) {
        $this->saldoAtual = $saldoAtual;
    }

    function setOperacao($operacao) {
        $this->operacao = $operacao;
    }

    public function sacar($valor) {

        $this->saldoAtual = $this->saldoInicial;

        if ($valor > $this->saldoInicial) {
            $mensagem = '<br> Saldo Insuficiente';
            array_push($this->operacao, ['Saque',$mensagem]);
            return $mensagem;
        } else {
            $this->saldoAtual = $this->saldoInicial - $valor;
            $this->saldoInicial = $this->saldoAtual;
            array_push($this->operacao, ['Saque',$valor]);
            $mensagem2 = '<br> Realizado Saque do cliente ' . $this->Cliente->getNome() . ' no valor de R$' . $valor . '. Saldo Atual: ' . $this->saldoAtual.'<br>';
            return $mensagem2;
        }
    }

    public function depositar($valor) {

        $this->saldoAtual = $this->saldoInicial + $valor;
        $this->saldoInicial = $this->saldoAtual;
        array_push($this->operacao, ['Deposito',$valor]);
        $mensagem3 = '<br> Realizado Depósito do cliente ' . $this->Cliente->getNome() . ' no valor de R$' . $valor . '. Saldo Atual: ' . $this->saldoAtual.'<br>';
        return $mensagem3;
    }

    public function exibeSaldo() {

        $mensagem4 = '<br> Saldo Atual: ' . $this->saldoAtual;
        return $mensagem4;
    }

    public function exibeExtrato() {

        $html = '<br>
        <fieldset>
        <legend>Extrato</legend>
            <table>
            <tr>
                <th>Operação</th><th>Valor</th>
            </tr>
            <tr>
                <td>Saldo Inicial</td><td> ' . $this->saldoInicial . '</td>
            </tr><tr>';
        foreach ($this->operacao as $value) {
            $html .= '<td>' . $value[0] . '</td>' .
                    '<td>' . $value[1] . '</td>';
        }
        $html .= '</tr><tr>
                <td>Saldo Atual</td><td> ' . $this->saldoAtual . '</td>
            </tr>
        </table>
        </fieldset>
        <br>';
        
        return $html;
    }

}
