#include <stdio.h>

int main(void) {

/*
Fa�a um programa, utilizando while, que mostre na tela os n�meros de 0 a 100.
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
Fa�a um algoritmo que escreva os n�meros �mpares entre 1 e 100.
*/
/* 1� resolu��o
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



//Fa�a um programa, utilizando while, que mostre na tela uma contagem que se inicia e se encerra com os n�meros determinados pelo usu�rio

/*
int inicio, fim;
printf("Informe o n�mero onde a contagem come�a:");
scanf("%d",&inicio);
printf("Informe o n�mero onde a contagem termina:");
scanf("%d",&fim);

while(inicio<=fim){
  printf("%d\n", inicio);
  inicio = inicio + 1;
}
*/



//Fa�a um algoritmo que calcule o somat�rio de todos os n�meros pares entre dois n�meros informados pelo usu�rio.
/*
int inicio, fim, contador, somatorio;
somatorio = 0;
printf("Informe o n�mero onde a contagem come�a:");
scanf("%d",&inicio);
printf("Informe o n�mero onde a contagem termina:");
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

printf("O somatorio dos numeros pares entre %d e %d ser� %d", inicio, fim, somatorio);
*/

//Fa�a um programa que pe�a ao usu�rio um n�mero entre 12 e 20. Se a pessoa digitar um n�mero diferente, mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero digitado.
/*
float mes;

printf("Informe o m�s que voc� nasceu:");
scanf("%f", &mes);
//solu��oo 1
while(mes<1 || mes>12){
  printf("N�mero inv�lido, favor informe novamente:");
  scanf("%f", &mes);
}

if(mes == 1){
  printf("Voc� nasceu em janeiro");
}else if(mes ==2){
  printf("Voc� nasceu em fevereiro");
}

//solu��oo 2
do{
  printf("Informe o m�s que voc� nasceu:");
  scanf("%f", &mes);
}while(mes<1 || mes>12);
if(mes == 1){
  printf("Voc� nasceu em janeiro");
}else if(mes ==2){
  printf("Voc� nasceu em fevereiro");
}
*/



//Crie um programa que leia um n�mero do teclado at� que encontre um n�mero igual a zero. No final, mostre a soma dos n�meros digitados.
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
