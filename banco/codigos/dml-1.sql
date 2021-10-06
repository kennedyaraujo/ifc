SELECT nome, categoria, valor_compra, valor_venda, estoque, data_cadastro, data_vencimento, fabricante FROM mercado.produto;

INSERT INTO produto (nome, categoria, valor_compra, valor_venda, estoque, data_cadastro, data_vencimento, fabricante) VALUES ('Bolacha de ãgua e sal', 'biscoitos', 2.8, 3.8, 5, '2018-07-06','2019-06-11', 'Mabel');
INSERT INTO produto (nome, categoria, valor_compra, valor_venda, estoque, data_cadastro, data_vencimento, fabricante) VALUES ('Suco de uva integral', 'bebidas', 7, 9.7, 8, '2018-05-16','2020-03-02', 'Serra');
INSERT INTO produto (nome, categoria, valor_compra, valor_venda, estoque, data_cadastro,data_vencimento, fabricante) VALUES ('Café Torrado', 'bebidas', 4, 5.5, 12, '2018-08-21', '2021-03-12', 'Pilão');
INSERT INTO produto (nome, categoria, valor_compra, valor_venda, estoque, data_cadastro,data_vencimento, fabricante) VALUES ('Chã mate torrado', 'bebidas', 1.6, 2.5, 6, '2018-08-04','2020-06-25', 'Otto');
INSERT INTO produto (nome, categoria, valor_compra, valor_venda, estoque, data_cadastro,data_vencimento, fabricante) VALUES ('Páprica doce', 'temperos vermelhos', 1.2, 2.1, 3, '2018-10-08', '2020-05-08', 'Ilfo');
INSERT INTO produto SET nome='Açafrão', categoria='temperos amarelos', valor_compra=2.7, valor_venda=3.5, estoque=3, data_cadastro='2018-08-04',data_vencimento='2019-12-12', fabricante='Ilfo';
UPDATE produto SET valor_venda=4.99 WHERE valor_venda=5;
SET SQL_SAFE_UPDATES = 0;
UPDATE produto SET valor_venda= valor_venda - (valor_venda * 0.15) WHERE valor_venda < 10; 
Update produto set estoque=3 where nome="Suco de Uva integral";
Update produto set estoque=6 where idproduto=10;
UPDATE produto SET estoque=3, data_cadastro=NOW(), data_vencimento=ADDDATE(NOW(), INTERVAL 2 YEAR) WHERE estoque=0;
UPDATE mercado.produto SET categoria='derivados de leite' WHERE categoria='laticínios';

UPDATE produto SET nome=REPLACE(nome,'ã','á') WHERE categoria IN ('bebidas','biscoitos');

UPDATE produto SET categoria = "temperos" WHERE categoria LIKE "%tempero%";
UPDATE produto SET nome=REPLACE(nome, 'integral', 'natural') WHERE nome LIKE '%integral%';
UPDATE produto SET data_vencimento = ADDDATE(data_vencimento,INTERVAL 1 MONTH) WHERE data_cadastro= '2018-08-04';
DELETE FROM produto WHERE fabricante="Nestle" OR fabricante="Yoki";
SELECT * FROM produto WHERE MONTH(data_cadastro)=08 AND DAY(data_cadastro)=04;
SELECT * FROM produto WHERE data_cadastro LIKE "%-08-04";