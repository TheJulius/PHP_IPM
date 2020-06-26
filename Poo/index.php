<!DOCTYPE html>

<html>
    <head>
        <meta charset="windows-1252">
        <title></title>
    </head>
    
        <?php
        
        require_once 'class/class_carro.inc';
        require_once 'class/class_moto.php';
        require_once 'class/class_marca.php';
        
        $oMarea = new Carro('Marea');
        
        $oMarea->setAno(1994);
        
        $oFiat = new Marca();
        $oFiat->setNome('Fiat');
        $oFiat->setPais('Italia');
        $oMarea->setMarca($oFiat);
      
        
        echo $oMarea->getModelo(). ' da cor '.$oMarea->getCor();
        $oMarea->abrirPorta();
        $oMarea->fecharPorta();
        $oMarea->desligar();
        echo 'Marca: '.$oMarea->getMarca()->getNome();
        echo '<br>';
        
        
        $oLogus = new Carro('Logus');
        
        $oVw = new Marca();
        $oVw->setNome('Volkswagen');
        $oVw->setPais('Alemanha');
        $oLogus->setMarca($oVw);
        
        $oLogus->getCor('Yellow');
        $oLogus->getAno(1995);
        
        echo $oLogus->getModelo(). ' da cor '.$oLogus->getCor();
        $oLogus->abrirPorta();
        $oLogus->fecharPorta();
        $oLogus->desligar();
        echo 'Marca: '.$oLogus->getMarca()->getNome();
        
        $oCG = new moto('CG');
        
        ?>
        
        
    
</html>
