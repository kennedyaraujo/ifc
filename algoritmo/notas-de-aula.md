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

### Lembretes
   * Toda linha deve ser finalizada com um ponto e virgula ;
   * Comentários
      * Uma linha: `//`
      * Multiplas linhas: `/*    */`

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
   soma = 2 + 2;
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

---

## OPERADORES

### OPERADORES ARITMÉTICOS

Operador | Operação 
:----: | :-------
`+` | Soma
`-` | Subtração
`*` | Multiplicação
`/` | Divisão
`%` | Resto inteiro da divisão

### OPERADORES RELACIONAIS
Operador | Operação
:----: |-------
`==` | Igual
`!=` | Diferente
`>` | Maior
`>=` | Maior ou Igual
`<` | Menor
`<=` | Menor ou Igual

### OPERADORES LÓGICOS
Operador | Operação | Descrição
:----: |------- | ----------------
`&&` | E | As duas operações precisam necessáriamente retornar verdadeiro
&#124;&#124; | OU | Apenas uma das opções precisa ser verdadeira


---

### ESTRUTURA DE DECISÃO

### CONDICIONAL - IF

#### Estrutura base

```
if(<condição>){
   //código a ser executado se a condição for verdadeira
}
```
Caso o código a ser executado tenha apenas uma linha o uso das chaves no if é opcional
```
if(<condição>)
   //código a ser executado se a condição for verdadeira
```



```
if(<condição>){
   //código a ser executado se a condição for verdadeira
}else{
   //código a ser executado se a condição for falso
}
```

```
if(<condição1>){
   //código a ser executado se a condição 1 for verdadeira
}else if(<condição2>){
   //código a ser executado se a condição 2 for verdadeira
}else{
   //código a ser executado se a condição for falso
}
```

#### Exemplos

```
//REQUISITAR UM NÚMERO E INFORMAR SE ELE É PAR OU ÍMPAR
#include <stdio.h>
int main(void) {
  //declarar as variáveis
  int numero;

  //capturar informações
  printf("Informe um número:\n");
  scanf("%d", &numero);

  //fazer o calculo e mostrar o resultado
  if(numero%2 == 0){
    printf("O número é par\n");
  }else{
    printf("O numero é ímpar\n");
  }

  return 0;
}

```


```
// Solicite ao usuário o numero do mês e informe em qual trimestre ele se encontra
#include <stdio.h>
int main(void) {   
   //capturar variavel
   int mes;
   //capturar informacoes - breno reck
   printf("Informe o mês: \n");
   scanf("%d",&mes);

   if(mes <= 3){
      printf("1° TRI.\n");
   }
   //if(mes==4 || mes==5 || mes==6)
   if(mes>3 && mes<=6){
      printf("2° TRI.\n");
   }
   if(mes>6 && mes<=9){
      printf("3° TRI.\n");
   }
   if(mes>9){
      printf("4° TRI.\n");
   }

  return 0;
}

```


De início imagine que cada condição precisará de um [operador relacionnal](#relacionais) fazendo a comparação entre dois valores que podem ser representados por variáveis.



## ESTRUTURAS DE REPETIÇÃO

### WHILE (ENQUANTO)

#### Estrutura base
```
while(<condição>){
   //código a ser executado enquanto a condição for verdadeira
}
```

#### Exemplo
```
//Faça um programa, utilizando while, que mostre na tela os números de 0 a 100.
#include <stdio.h>
int main(void) {
   int contador=0;
   while(contador<=100){
      printf("%d\n", contador);
      contador = contador + 1;   
   } 
   return 0; 
}
```

```
//Faça um algoritmo que escreva os números ímpares entre 1 e 100.
#include <stdio.h>
int main(void) {
   
   int contador=1;

   //solução 1
   while(contador<=100){
      printf("%d\n", contador);
      contador = contador + 2;
   }
   //solução 2
   while(contador<=100){
      if(contador%2==1){
         printf("%d\n", contador);
      }
      contador = contador + 1;
   }
   return 0;
}
```

```
//Faça um algoritmo que escreva os números ímpares entre 1 e 100.
#include <stdio.h>
int main(void) {
   
   int contador=1;

   //solução 1
   while(contador<=100){
      printf("%d\n", contador);
      contador = contador + 2;
   }
   //solução 2
   while(contador<=100){
      if(contador%2==1){
         printf("%d\n", contador);
      }
      contador = contador + 1;
   }
   return 0;
}
```

```
//Faça um algoritmo que capture o mês que o usuário nasceu, e realize a validação desse dado.
#include <stdio.h>
int main(void) {
   
   float mes;

   printf("Informe o mês que você nasceu:");
   scanf("%f", &mes);
   //soluçãoo 1
   while(mes<1 || mes>12){
      printf("Número inválido, favor informe novamente:");
      scanf("%f", &mes);
   }
   //solução 2
   do{
      printf("Informe o mês que você nasceu:");
      scanf("%f", &mes);
   }while(mes<1 || mes>12);


   if(mes == 1){
      printf("Você nasceu em janeiro");
   }else if(mes ==2){
      printf("Você nasceu em fevereiro");
   }
   return 0;
}
```

```
//Crie um programa que leia um número do teclado até que encontre um número igual a zero. No final, mostre a soma dos números digitados.
#include <stdio.h>
int main(void) {
   
float numero, soma;
do{
  printf("Informe numero:");
  scanf("%f", &numero);
  soma = soma + numero;

  printf("Msg1 - A soma de todos os numeros sera: %.1f\n", soma);
}while(numero!=0);

printf("Msg2 - A soma de todos os numeros sera: %.1f\n", soma);

  return 0;
}
```


### FOR 
#### Estrutura base
```
for(<inicialização>, <condição>, <incremento>){
   //código a ser executado se a condição for verdadeira
}
```
Caso o código a ser executado tenha apenas uma linha o uso das chaves no if é opcional