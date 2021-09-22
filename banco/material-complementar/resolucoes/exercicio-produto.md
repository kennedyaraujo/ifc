# Resolução Exercício 01

1. Selecione todos os produtos
    * SELECT * FROM produto;
    * SELECT idproduto,nome FROM produto;
1. Selecione todos os produtos da categoria cereais
    * SELECT * FROM produto WHERE  categoria='cereais'  
1. Listar produtos que não possuem estoque na loja
    * SELECT * FROM produto WHERE estoque = 0
1. Listar todos os produtos que tenham o id par
    * SELECT * FROM produto WHERE idproduto%2=0 
    * Selecione produtos aptos a participar de uma promoção pague 1, leve 2
        * SELECT * FROM produto WHERE estoque%2=0 AND estoque>0
1. Mostrar os produtos que tenham estoque na loja e custem mais de 17 reais
    * SELECT nome,estoque,valor_venda FROM produto WHERE estoque<>0 AND valor_venda>17
1. Selecione os produtos que custam entre 8 e 10 reais (responder com o operador relacional e o between)
    * SELECT * FROM produto WHERE (valor_venda>=8) AND (valor_venda<=10);
    * SELECT * FROM produto WHERE valor_venda BETWEEN 8 AND 10;
1. Selecione os produtos da categoria cereais e biscoitos que custam entre 20 e 30 reais 
    * SELECT * FROM produto WHERE (categoria='cereais' OR categoria='biscoitos') AND (valor_venda>=20 AND valor_venda<=30)
    * SELECT nome, categoria FROM produto WHERE categoria in ('cereais','biscoitos') AND valor_venda BETWEEN  20 AND 30;
1. Selecione todos os produtos sabor chocolate
   * SELECT * FROM produto WHERE nome LIKE '%chocolate%' 
1. Selecione todas as margarinas que possuem alguma quantidade em estoque
    * SELECT nome, estoque FROM produto WHERE nome LIKE '%margarina%' AND estoque>0
1. Selecione os produtos que foram inseridos entre os dias 17/03 e 25/03 de 2018 (responder com o operador relacional e o between)
    * SELECT * FROM produto WHERE data_cadastro BETWEEN '2018-03-17' AND '2018-03-25'
    * SELECT * FROM produto WHERE data_cadastro >= '2018-03-17' AND data_cadastro <= '2018-03-25'
1. Mostrar todas as categorias presentes na tabela produto
    * SELECT DISTINCT categoria FROM produto
1. Selecione os produtos que caso recebam um desconto de 50% custarão mais de 15 reais
    * SELECT nome FROM produto WHERE (valor_venda*0.5>15);
1. Número de produtos que foram inseridos na data de 12 de março de 2018
    * CONTEÚDO NÃO ABORDADO
1. Mostre os produtos que caso tenham um aumento de 2 unidades no estoque passarão de 8 unidades
    * SELECT * FROM produto WHERE estoque+2>8;
1. Listar os itens ou que pertençam a categoria cereais ou estejam com o estoque zerado
    * SELECT idproduto, nome, categoria, estoque FROM produto WHERE (categoria='cereais' XOR estoque=0);