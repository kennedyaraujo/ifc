#include <stdio.h>


int main(void) {
//Quest�o 1
/*
Construa um algoritmo que ir� receber  valor do eletrodom�stico, e a quantidade de presta��es. Informe o valor firnal que o consumidor ir� pagar em cada parcela. Voc� deve adicionar 3% por parcela que o produto ser� dividivo (juros simples).
*/





//Quest�o 2
/*
Escreva um algoritmo que leia um determinado n�mero e informe se ele est� no intervalo de 0 a 25.
*/





//Quest�o 3
/*
Construa o algoritmo que leia o voto de 20 eleitores e defina qual o candidato vencedor, sabendo que dentro da elei��o existem apenas tr�s candidatos (1,2,3). Utilize o for para resolu��o da quest�o.
*/
/*
int i, voto, candidato1;

for(i=1; i<=20; i++){
  printf("Informe seu voto");
  scanf("%d", &voto);

  if(voto==1){
    candidato1 = candidato1 +1;
  }
}
*/


/*------- ------ -- --- -- -*/



//Quest�o 4
/*
Escreva um programa em C para ler 2 valores inteiros e imprimir o resultado da divis�o do primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INV�LIDO e lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOC� DESEJA OUTRO C�LCULO(S/N)? Se a resposta for S o programa dever� retornar ao come�o, caso contr�rio dever� encerrar a sua execu��o imprimindo quantos c�lculos foram feitos.
*/

float valor1, valor2, divisao, opcao;
int qtdcalculos =1;

/*
POSSIBILIDADE 1
*/
/*
do{
  printf("Informe o primeiro valor");
  scanf("%f",&valor1);

  do{
    printf("Informe o segundo valor");
    scanf("%f",&valor2);
  }while(valor2 == 0);

  divisao = valor1/valor2;
  printf("O resultado da divis�o � %f", divisao);

  printf("Voc� deseja outro calculo, digite 1 para SIM ou 2 para N�O");
  scanf("%f",&opcao);
}while(opcao==1);
printf("Foi(ram) realizado(s) %d calculos", qtdcalculos);
*/



/*
POSSIBILIDADE 2
*/
/*
printf("Informe o primeiro valor");
scanf("%f",&valor1);
printf("Informe o segundo valor");
scanf("%f",&valor2);

while(valor2 == 0){
  printf("Informe o segundo valor");
  scanf("%f",&valor2);
}

divisao = valor1/valor2;
printf("O resultado da divis�o � %f", divisao);

printf("Voc� deseja outro calculo, digite 1 para SIM ou 2 para N�O");
scanf("%f",&opcao);

while(opcao == 1){
  qtdcalculos = qtdcalculos + 1;
  printf("Informe o primeiro valor");
  scanf("%f",&valor1);
  printf("Informe o segundo valor");
  scanf("%f",&valor2);

  while(valor2 == 0){
    printf("Informe o segundo valor");
    scanf("%f",&valor2);
  }

  divisao = valor1/valor2;
  printf("O resultado da divis�o � %f", divisao);

  printf("Voc� deseja outro calculo, digite 1 para SIM ou 2 para N�O");
  scanf("%f",&opcao);
}
printf("Foi(ram) realizado(s) %d calculos", qtdcalculos);

*/





/*
 do{
      printf("Informe o m�s que voc� nasceu:");
      scanf("%f", &mes);
  }while(mes<1 || mes>12);
*/











/*
Emerson

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{

float candidato1, candidato2, candidato3, a, b, c, v;
int cont;
a=0;
b=0;
c=0;

for (cont = 1; cont<=20; cont++)
{
printf("Candidato 1, 2 ou 3? \n");
scanf("%f", &v);

if (v=1)
    a+1;
else

if (v=2)
    b+1;
else
    c+1;

}

return 0;

printf("Os votos dos cantidatos foram: \n", a, b, c);

}
*/

int voto, e1, e2, e3, i;

for(i=0; i<20; i++){
  printf("\n %d Informe seu voto:", i);
  scanf("%d",&voto);

  if(voto==1){
    e1=e1+1;
  }else if(voto==2){
     e2=e2+1;
  }else if(voto==3){
    e3=e3+1;
  }
}//end for(i=0; i<20; i++)


if(e1>e2 && e1>e3){
    printf("\n condidato vencedor � o eleitor 1");
}else if(e2>e1 && e2>e3){
    printf("\n condidato vencedor � o eleitor 2");
}else if(e3>e1 && e3>e2){
    printf("\n condidato vencedor � o eleitor 3");
}
    return 0;
}
