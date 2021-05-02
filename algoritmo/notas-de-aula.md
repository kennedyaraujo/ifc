# Algoritmo - NOTAS DE AULA - 2021.1

#### DOCUMENTAÇÃO

* [Funções Biblioteca Stdio.h](https://www.tutorialspoint.com/c_standard_library/stdio_h.htm)
* [Funções Biblioteca Math.h](https://www.tutorialspoint.com/c_standard_library/math_h.htm)
* [Exemplo em C](https://www.programiz.com/c-programming/examples)

#### ESTRUTURA BASE
```
#include <stdio.h>
int main() {
   // este é um comentário
   printf("Olá, Mundo!");
   return 0;
}
```

##### Sequência 
1. Declaração de variáveis
1. Captura de informações
1. Realizar cálculos
1. Exibir resultados


#### COMANDOS DE ENTRADA E SAÍDA
###### printf()
###### scanf()

Utilização | Tipo de dado
----|-------|
d, i | inteiro
f | float
c | char
f | double
s | string - char *
Fonte:[Prof Rodolfo Resende - UFMG](https://homepages.dcc.ufmg.br/~rodolfo/aedsi-2-10/printf_scanf/printfscanf.html) 


#### VARIÁVEIS

##### Declaração de variáveis

Declaração | Tipo de dado | Descrição
----|-------|-------------------
int | Número inteiro | Números inteiros entre -2147483648 e 2147483647
float | Número com casas decimais | Números reais entre 10 elevado a -38 e 10 elevado a 38
double | Número com casas decimais | Números reais entre 10 elevado a -4932 e 10 elevado a 4932
char | Caracteres | Caracteres individuais do padrão ASCII
bool | Valor lógico (V ou F) | Indica true (verdadeiro) ou false (falso)

Fonte: [pt.wikibooks.org](https://pt.wikibooks.org/wiki/Programar_em_C/Tipos_de_dados) 

#### OPERADORES

##### ARITMÉTICOS

Operador | Operação 
:----: | :-------
`+` | Soma
`-` | Subtração
`*` | Multiplicação
`/` | Divisão
`%` | Resto inteiro da divisão

##### RELACIONAIS
Operador | Operação
:----: |-------
`==` | Igual
`!=` | Diferente
`>` | Maior
`>=` | Maior ou Igual
`<` | Menor
`<=` | Menor ou Igual

###### LÓGICOS
Operador | Operação | Descrição
:----: |------- | ----------------
`&&` | E | As duas operações precisam necessáriamente retornar verdadeiro
`||` | OU | Pelo menos uma das operações precisa retornar verdadeiro

