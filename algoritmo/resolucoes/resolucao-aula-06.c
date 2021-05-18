#include <stdio.h>

int main(void) {

/*
Faça um programa, utilizando while, que mostre na tela os números de 0 a 100.
*/

/*
  printf("0\n");
  printf("1\n");
  printf("2\n");
  printf("...\n");
  printf("98\n99\n100");
*/

/* While */
/*
int contador=0;
while(contador<=100){
  printf("%d\n", contador);
  contador = contador + 1;
}
*/


/*
Faça um algoritmo que escreva os números ímpares entre 1 e 100.
*/
/* 1° resolução
int contador=1;
while(contador<=100){
  printf("%d\n", contador);
  contador = contador + 2;
}
*/
/*
int contador=1;
while(contador<=100){
  if(contador%2==1){
    printf("%d\n", contador);
  }
  contador = contador + 1;
}
*/



//Faça um programa, utilizando while, que mostre na tela uma contagem que se inicia e se encerra com os números determinados pelo usuário

/*
int inicio, fim;
printf("Informe o número onde a contagem começa:");
scanf("%d",&inicio);
printf("Informe o número onde a contagem termina:");
scanf("%d",&fim);

while(inicio<=fim){
  printf("%d\n", inicio);
  inicio = inicio + 1;
}
*/



//Faça um algoritmo que calcule o somatório de todos os números pares entre dois números informados pelo usuário.
/*
int inicio, fim, contador, somatorio;
somatorio = 0;
printf("Informe o número onde a contagem começa:");
scanf("%d",&inicio);
printf("Informe o número onde a contagem termina:");
scanf("%d",&fim);

contador = inicio;
//enquanto inicio for menor ou igual a fim
while(contador<=fim){
  //se inicio resto dois for igual a zero, ou seja se inicio dor par
  if(contador%2==0){
    somatorio = somatorio + contador;
  }
  contador = contador + 1;
}

printf("O somatorio dos numeros pares entre %d e %d será %d", inicio, fim, somatorio);
*/

//Faça um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o número digitado.
/*
float mes;

printf("Informe o mês que você nasceu:");
scanf("%f", &mes);
//soluçãoo 1
while(mes<1 || mes>12){
  printf("Número inválido, favor informe novamente:");
  scanf("%f", &mes);
}

if(mes == 1){
  printf("Você nasceu em janeiro");
}else if(mes ==2){
  printf("Você nasceu em fevereiro");
}

//soluçãoo 2
do{
  printf("Informe o mês que você nasceu:");
  scanf("%f", &mes);
}while(mes<1 || mes>12);
if(mes == 1){
  printf("Você nasceu em janeiro");
}else if(mes ==2){
  printf("Você nasceu em fevereiro");
}
*/



//Crie um programa que leia um número do teclado até que encontre um número igual a zero. No final, mostre a soma dos números digitados.
float numero, soma;
do{
  printf("Informe numero:");
  scanf("%f", &numero);
  soma = soma + numero;

  printf("\n Msg1 - A soma de todos os numeros sera: %.1f", soma);
}while(numero!=0);

printf("\n Msg2 - A soma de todos os numeros sera: %.1f", soma);

  return 0;
}
