#include <stdio.h>


int main(void) {
//Questão 1
/*
Construa um algoritmo que irá receber  valor do eletrodoméstico, e a quantidade de prestações. Informe o valor firnal que o consumidor irá pagar em cada parcela. Você deve adicionar 3% por parcela que o produto será dividivo (juros simples).
*/





//Questão 2
/*
Escreva um algoritmo que leia um determinado número e informe se ele está no intervalo de 0 a 25.
*/





//Questão 3
/*
Construa o algoritmo que leia o voto de 20 eleitores e defina qual o candidato vencedor, sabendo que dentro da eleição existem apenas três candidatos (1,2,3). Utilize o for para resolução da questão.
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



//Questão 4
/*
Escreva um programa em C para ler 2 valores inteiros e imprimir o resultado da divisão do primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÁLIDO e lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRO CÁLCULO(S/N)? Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
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
  printf("O resultado da divisão é %f", divisao);

  printf("Você deseja outro calculo, digite 1 para SIM ou 2 para NÂO");
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
printf("O resultado da divisão é %f", divisao);

printf("Você deseja outro calculo, digite 1 para SIM ou 2 para NÂO");
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
  printf("O resultado da divisão é %f", divisao);

  printf("Você deseja outro calculo, digite 1 para SIM ou 2 para NÂO");
  scanf("%f",&opcao);
}
printf("Foi(ram) realizado(s) %d calculos", qtdcalculos);

*/





/*
 do{
      printf("Informe o mês que você nasceu:");
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
    printf("\n condidato vencedor é o eleitor 1");
}else if(e2>e1 && e2>e3){
    printf("\n condidato vencedor é o eleitor 2");
}else if(e3>e1 && e3>e2){
    printf("\n condidato vencedor é o eleitor 3");
}
    return 0;
}
