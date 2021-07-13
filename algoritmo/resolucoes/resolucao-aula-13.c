#include <stdio.h>

int main(void) {
// ENTRADA E SA�DA - OPERADORES aritm�ticos
/*
Fa�a um algoritmo que le o pre�o de venda do produto, o pre�o de custo do produto e quantidade de unidades vendidas e informe quanto o foi o lucro naquela venda.
*/

/*
Elabore um algoritmo em C, onde o usu�rio informe o tempo em minutos que gasta para realizar um prova e voc� ir� inform�-lo quantas horas equivale o tempo digitado e tamb�m quanto ele passou do tempo m�nimo de prova que � de 20min (Considere que para a quest�o que todo o usu�rio far� um tempo de prova maior que o m�nimo).
*/

/*

//declara��o de variaveis
float tempo, horas, tempo_total;

//Captura de valores
printf("\n Tempo de realiza��o da prova: ");
scanf("%f",&tempo);

//calculos
horas = (tempo / 60);
tempo_total = tempo - 20;

//Exibi��o de dados
printf("\n O valor de tempo em horas: %.1f",horas);
printf("\n tempo ultrapassado em horas: %.1f",tempo_total);
*/

// #DECIS�O e operadores relacionais e l�gicos

/*************************************
Criar um algoritmo para ler um percurso em quil�metros, o tipo de carro, e o tipo de combust�vel (gasolina ou �lcool) e depois informar o consumo estimado de combust�vel deste percursso. Sabendo-se que o carro tipo 1 faz 12 km/l com gasolina e 7km/l com alcool, j� o carro do tipo 2 faz 17km/l com gasolina e 9 km/l com �lccol.
***************************************/

/*
float percurso, carro, combustivel, consumo;

printf("Informe o percurso em quilometros:\n");
scanf("%f", &percurso);

printf("Informe o tipo de carro:\n");
printf("1 para 12 km/l com gasolina e 7 km/l com alcool\n");
printf("2 para 17 km/l com gasolina e 9 km/l com alcool");
scanf("%f", &carro);

printf("Informe o tipo de combustivel:\n");
printf("1 para gasolina\n");
printf("2 para alcool\n");
scanf("%f", &combustivel);

if (carro == 1) {
  if(combustivel == 1){
    consumo = percurso/12;
    printf("O consumo estimado de combustivel �: %.2f litros", consumo);
  }
  if(combustivel == 2){
    consumo = percurso/7;
    printf("O consumo estimado de combustivel �: %.2f litros", consumo);
  }
}
if (carro == 2) {
  if(combustivel == 1){
    consumo = percurso/17;
    printf("O consumo estimado de combustivel �: %.2f litros", consumo);
  }
  if(combustivel == 2){
    consumo = percurso/9;
    printf("O consumo estimado de combustivel �: %.2f litros", consumo);
  }
}
*/


/*
Fa�a um algoritmo para calcular a conta de energia, nele o usu�rio ir� informar o pre�o do kWh , quantidade que kWh consumidos e a bandeira tarif�ria (verde, amarela e vermelha). Ressalta-se que, se a bandeira for verde n�o h� acrescimo,  se a bandeira for amarela o pre�o do kWh receber� um acrescimo de 10% no seu valor, se a bandeira for vermelha o pre�o do kWh  receber� um acrescimo de 20% em seu valor. Entrar� tamb�m na conta a taxa de ilumina��o p�blica, que � um valor fixo de R$13,20 (treze reais e vinte centavos).
*/


// #FOR

/*
Elabore um algoritmo em c, que leia 10 n�meros quaisquer, e mostre ao final: o produto dos 2 primeiros n�meros, a soma do 3�,4� e 5� n�meros, e a m�dia aritm�ticas do 6�, 7�, 8�, 9� e 10� n�mero. (Utilize a estrutura FOR para responder a quest�o).
*/

////Elabore um algoritmo em C que leia o pre�o da Arroba (14.7kg) e depois o peso de 6 bois informando o pre�o que cada boi seria vendido, ao final mostre o boi que seria vendido pelo maior valor.
/*
float preco_arroba, peso, i, preco_boi, maior_preco=0;

printf("\n Informe o pre�o da arroba:");
scanf("%f", &preco_arroba);

for(i=1; i<=6; i++){
  printf("\n Informe o peso do boi:");
  scanf("%f", &peso);

  preco_boi = preco_arroba*(peso/14.7);
  printf("\n O pre�o do boi �: R$%.2f\n", preco_boi);

  if(preco_boi>maior_preco){
    maior_preco=preco_boi;
  }
}//end for
  printf("\n O maior pre�o �: R$%.2f\n", maior_preco);
*/
// WHILE
 /*
 Elabore um algoritmo em c, que leia um conjunto de consultas. O programa deve iniciar perguntado se a consulta foi feita por conv�nio ou foi particular. Caso ela tenha sido feita por conv�nio o usu�rio deve informar qual conv�nio (Unimed, RedeVida, Internow, s�o aceitos apenas esses tr�s), caso a consulta seja feita de forma particular deve ser inserido o valor pago. Ap�s cada entrada deve ser perguntando se o usu�rio deseja inserir uma nova entrada ou encerrar o programa. Quando o programa for encerrado deve ser exibido o n�mero de consultas por convenio e quantas consultas por conv�nio, bem como quantidade de consultas particular e todo valor que foi pago. (Utilize a estrutura while dentro da resolu��o desta quest�o.)
*/
int consulta, convenio, valor, valor_p, entrada, qtd_1=0, qtd_2=0, qtd_3=0, qtd_p=0;

do{
  printf("\n Sua consulta sera feita pelo convenio ou particular");
  do{
    printf("\n Se a sua consulta for pelo convenio digite (1) se for particular digite (2)");
    scanf("%d",&consulta);
  }while(consulta!=1 && consulta!=2);


  if(consulta==1){
    do{
      printf("\n Sua consulta sera feita por qual dos convenios Unimed, RedeVida, Internow ");
      printf("\n Se a sua consulta for pelo convenio Unimed digite (1), RedeVida digite (2), Internow digite (3)");
      scanf("%d",&convenio);
      if(convenio==1){
        qtd_1=qtd_1+1;
      }else if(convenio==2){
      qtd_2=qtd_2+1;
      }else{
      qtd_3=qtd_3+1;
      }
    }while(convenio!=1 && convenio!=2 && convenio!=3);

  }else{
    printf("informe o valor pago pela consulta particular");
    scanf("%d", &valor);
    qtd_p=qtd_p+1;
    valor_p=valor_p+valor;
  }
  printf("\n Digite (1) para continuar e (2) para encerrar a programa��o");
  scanf("%d", &entrada);
}while(entrada==1);

printf("\n quantidade de consultas Unimed,%d", qtd_1);
printf("\n quantidade de consultas Rede Vida,%d", qtd_2);
printf("\n quantidade de consultas Internow,%d", qtd_3);
printf("\n quantidade de consultas particular,%d", qtd_p);
printf("\n valor gasto nas consulta particular,%d",valor_p);

  return 0;

}
