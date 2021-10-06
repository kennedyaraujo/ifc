/* Elabora uma consulta que retorne o nome e cargo de cada empregado no banco */
select * from empregado, cargo where empregado.idcargo=cargo.idcargo;
/* Elabora uma consulta que retorne o nome e setor de cada empregado no banco dos empregados que ganham acima de 2000*/
SELECT e.nome,s.nome as setor FROM  empregado AS e, setor AS s WHERE e.idsetor=s.idsetor AND e.salario>2000;
/* Elabora uma consulta que retorne  nome, setor e cargo de cada empregado no banco */
select empregado.nome, cargo.nome, setor.nome from empregado, cargo, setor where empregado.idcargo=cargo.idcargo AND empregado.idsetor=setor.idsetor;

SELECT e.nome, c.nome, s.nome FROM empregado AS E INNER JOIN cargo AS c ON e.idcargo=c.idcargo INNER JOIN setor AS s ON e.idsetor=s.idsetor;
