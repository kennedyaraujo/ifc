CREATE TABLE IF NOT EXISTS empregado (
  id_empregado INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(45) NOT NULL,
  email VARCHAR(45) NOT NULL,
  salario DOUBLE NOT NULL,
  setor VARCHAR(45) NOT NULL,
  funcao VARCHAR(45) NOT NULL,
  PRIMARY KEY (id_empregado))
ENGINE = InnoDB;

START TRANSACTION;
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (1, 'João Silva', 'joao@gmail.com', 1500, 'financeiro', 'gerencia');
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (2, 'Julia Alves', 'julia@gmail.com', 2000, 'administrativo', 'analista');
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (3 , 'Lucas', 'lucas@gmail.com', 1800, 'financeiro', 'analista financeiro');
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (4, 'Marcos', 'marcos@gmail.com', 3000, 'serviços gerais', 'atendente');
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (5, 'Nicolas', 'nicolas@gmail.com', 1700, 'administrativo', 'analista');
INSERT INTO empregado (id_empregado, nome, email, salario, setor, funcao) VALUES (6, 'Luiz', 'luiz@gmail.com', 1750, 'serviços gerais', 'atendente');

COMMIT;

