<!DOCTYPE html>

<html>
    <head>
        <meta charset="windows-1252">
        <title></title>
    </head>
    <body>
        <?php
        require_once 'classe/class_cliente.inc';
        require_once 'classe/class_clienteJuridico.inc';
        require_once 'classe/class_clienteFisico.inc';
        require_once 'classe/class_ContaBancaria.inc';
        
        $oCliente = new Cliente();
        
        $oCliente->setNome('Julio');
        $oCliente->setEmail('Julio@emailcriativo.com');
        $oCliente->setTelefone(4991656997);
        
        echo $oCliente->exibir();
        
        $oCliente2 = new Cliente();
        
        $oCliente2->setNome('Julio2');
        $oCliente2->setEmail('Julio2@emailcriativo.com');
        $oCliente2->setTelefone(49916569972);
        
        echo $oCliente2->exibir();
        
        $oCliente3 = new ContaBancaria($oCliente);
        echo $oCliente3->setSaldoInicial(150);
        echo $oCliente3->sacar(100);
        echo $oCliente3->depositar(200);
        echo $oCliente3->exibeExtrato();
        ?>
    </body>
</html>
