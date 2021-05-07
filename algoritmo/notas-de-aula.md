# Algoritmo - NOTAS DE AULA - 2021.1

## Índice

1. [Documentação](#documentação)
1. [Estrutra Base](#estrutura-base)
1. [Comandos de Entrada e Saída](#comandos-de-entrada-e-saída)
1. [Variáveis](#variáveis)
1. [Operadores](#operadores)

## DOCUMENTAÇÃO

* [Funções Biblioteca Stdio.h](https://www.tutorialspoint.com/c_standard_library/stdio_h.htm)
* [Funções Biblioteca Math.h](https://www.tutorialspoint.com/c_standard_library/math_h.htm)
* [Exemplo em C](https://www.programiz.com/c-programming/examples)

## ESTRUTURA BASE
```
#include <stdio.h>
int main() {
   // este é um comentário
   printf("Olá, Mundo!");
   return 0;
}
```

### Sequência 
1. Declaração de variáveis
1. Captura de informações
1. Realizar cálculos
1. Exibir resultados


## COMANDOS DE ENTRADA E SAÍDA
### printf() - Exibir Informações - Saída
O `||` comando `printf()` é utilizado para exibir uma mensagem na tela do programa, atua no fluxo de saída. A mensagem a ser exibida deve estar entre aspas (por ser uma string), e caso deseja inserir variáveis na mensagem informe dentro de texto que naquele ponto será exibido uma variável utilizando o marcador % junto com o tipo da variável (%d, inteiro; %f, floar...) e depois do texto informe as variáveis que devem ser mostradas de forma que a sequência corresponda a ordem em que devem ser exibidas no texto.

#### Sintaxe
```
   printf(string, [variavel1,variavel2...]);
```

#### Exemplos
```
#include <stdio.h>
int main() {
   // exemplo de mensagem
   printf("Olá, Mundo!");
   return 0;
}
```

```
#include <stdio.h>
int main() {
   int soma;
   soma = 2 + 2+
   // exemplo de mensagem com variável
   printf("O resultado é %d", soma);
   return 0;
}
```

```
#include <stdio.h>
int main() {
   int dividendo, divisor;
   dividendo = 6;
   divisor = 3;
   // exemplo de mensagem com variável
   printf("O resultado é da divisão de %d por %d é %d", dividendo, divisor, dividendo/dividor);
   return 0;
}
```

### scanf() - Capturar dados - Entrada



Utilização | Tipo de dado
----|-------|
d, i | inteiro
f | float
c | char
f | double
s | string - char *

Fonte: [Prof Rodolfo Resende - UFMG](https://homepages.dcc.ufmg.br/~rodolfo/aedsi-2-10/printf_scanf/printfscanf.html) 


## VARIÁVEIS

Regras para nomeação de uma variável:
* Devem começar por um caracter alfabético (pref. minúsculo)
* Podem ser seguidos por mais caracteres alfabéticos ou numéricos
* Não devem ser usados caracteres especiais


### Declaração de variáveis

Declaração | Tipo de dado | Descrição
----|-------|-------------------
int | Número inteiro | Números inteiros entre -2147483648 e 2147483647
float | Número com casas decimais | Números reais entre 10 elevado a -38 e 10 elevado a 38
double | Número com casas decimais | Números reais entre 10 elevado a -4932 e 10 elevado a 4932
char | Caracteres | Caracteres individuais do padrão ASCII
bool | Valor lógico (V ou F) | Indica true (verdadeiro) ou false (falso)

Fonte: [pt.wikibooks.org](https://pt.wikibooks.org/wiki/Programar_em_C/Tipos_de_dados) 

## OPERADORES

### ARITMÉTICOS

Operador | Operação 
:----: | :-------
`+` | Soma
`-` | Subtração
`*` | Multiplicação
`/` | Divisão
`%` | Resto inteiro da divisão

### RELACIONAIS
Operador | Operação
:----: |-------
`==` | Igual
`!=` | Diferente
`>` | Maior
`>=` | Maior ou Igual
`<` | Menor
`<=` | Menor ou Igual

### LÓGICOS
Operador | Operação | Descrição
:----: |------- | ----------------
`&&` | E | As duas operações precisam necessáriamente retornar verdadeiro
`|`  | OU | Pelo menos uma das operações precisa retornar verdadeiro
`|` | OU | Pelo menos uma das operações precisa retornar verdadeiro

