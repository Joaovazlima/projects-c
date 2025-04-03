 Lista de Comandos SQL Essenciais
1️⃣ Banco de Dados
CREATE DATABASE nome_do_banco; → Cria um banco de dados.

USE nome_do_banco; → Seleciona um banco de dados para uso.

DROP DATABASE nome_do_banco; → Exclui um banco de dados.

2️⃣ Tabelas
CREATE TABLE nome_da_tabela (coluna1 tipo, coluna2 tipo, ...); → Cria uma tabela.

DROP TABLE nome_da_tabela; → Exclui uma tabela.

ALTER TABLE nome_da_tabela ADD nova_coluna tipo; → Adiciona uma coluna na tabela.

ALTER TABLE nome_da_tabela DROP COLUMN nome_da_coluna; → Remove uma coluna da tabela.

3️⃣ Inserção de Dados
INSERT INTO nome_da_tabela (coluna1, coluna2) VALUES (valor1, valor2); → Insere dados na tabela.

INSERT INTO nome_da_tabela VALUES (valor1, valor2, valor3); → Insere dados sem especificar colunas.

4️⃣ Seleção de Dados (Consultas)
SELECT * FROM nome_da_tabela; → Retorna todos os registros da tabela.

SELECT coluna1, coluna2 FROM nome_da_tabela; → Retorna apenas colunas específicas.

SELECT * FROM nome_da_tabela WHERE coluna = valor; → Filtra registros com base em uma condição.

SELECT * FROM nome_da_tabela ORDER BY coluna ASC/DESC; → Ordena os registros de forma crescente (ASC) ou decrescente (DESC).

SELECT * FROM nome_da_tabela WHERE coluna BETWEEN valor1 AND valor2; → Filtra registros dentro de um intervalo.

SELECT DISTINCT coluna FROM nome_da_tabela; → Retorna valores únicos de uma coluna.

SELECT COUNT(*) FROM nome_da_tabela; → Conta o número de registros da tabela.

SELECT AVG(coluna) FROM nome_da_tabela; → Retorna a média dos valores de uma coluna numérica.

SELECT SUM(coluna) FROM nome_da_tabela; → Soma os valores de uma coluna numérica.

SELECT MIN(coluna), MAX(coluna) FROM nome_da_tabela; → Retorna o menor e o maior valor de uma coluna.

5️⃣ Atualização de Dados
UPDATE nome_da_tabela SET coluna = novo_valor WHERE condição; → Atualiza valores de uma coluna.

6️⃣ Exclusão de Dados
DELETE FROM nome_da_tabela WHERE condição; → Remove registros da tabela.

TRUNCATE TABLE nome_da_tabela; → Remove todos os registros da tabela sem apagar sua estrutura.

7️⃣ Chaves e Relacionamentos
PRIMARY KEY (coluna); → Define uma chave primária.

FOREIGN KEY (coluna) REFERENCES outra_tabela(coluna); → Define uma chave estrangeira.
