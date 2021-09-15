-- MySQL Script generated by MySQL Workbench
-- Mon Sep 24 23:45:03 2018
-- -----------------------------------------------------
-- Table  `produto`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS  `produto` (
  `idproduto` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NOT NULL,
  `categoria` VARCHAR(45) NOT NULL,
  `valor_compra` DOUBLE NOT NULL,
  `valor_venda` DOUBLE NOT NULL,
  `estoque` INT NOT NULL,
  `data_cadastro` DATE NOT NULL,
  `data_vencimento` DATE NOT NULL,
  `fabricante` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idproduto`))
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- -----------------------------------------------------
-- Data for table  `produto`
-- -----------------------------------------------------
START TRANSACTION;
USE `mercado`;
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (1, 'Aveia em flocos', 'cereais', 2.67, 5, 0, '2018-03-17', '2018-03-17', 'Yoki');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (2, 'Biscoito de chocolate', 'biscoitos', 1.49, 2, 6, '2018-03-27', '2019-12-17', 'Nestle');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (3, 'Cookie de chocolate', 'biscoitos', 4.79, 5.60, 7, '2018-03-25', '2018-03-25', 'Bauduco');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (4, 'Margarina sem sal', 'laticínios', 5.76, 8.64, 5, '2018-03-12', '2018-09-17', 'Qually');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (5, 'Margarina com sal', 'laticínios', 5.89, 8.99, 6, '2018-03-29', '2018-03-17', 'Primor');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (6, 'Linhaça dourada', 'cereais', 3.23, 4.56, 2, '2018-03-29', '2018-12-14', 'Naturais');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (7, 'Linhaça marrom', 'cereais', 2.12, 8.45, 3, '2018-03-15', '2019-05-29', 'Nestle');
INSERT INTO  `produto` (`idproduto`, `nome`, `categoria`, `valor_compra`, `valor_venda`, `estoque`, `data_cadastro`, `data_vencimento`, `fabricante`) VALUES (8, 'Farinha de aveia', 'cereais', 3.34, 5.23, 0, '2018-03-12', '2020-03-12', 'Itemila');

COMMIT;

