#include <stdio.h>

int main(void) {
// ENTRADA E SAÍDA - OPERADORES aritméticos
/*
Faça um algoritmo que le o preço de venda do produto, o preço de custo do produto e quantidade de unidades vendidas e informe quanto o foi o lucro naquela venda.
*/

/*
Elabore um algoritmo em C, onde o usuário informe o tempo em minutos que gasta para realizar um prova e você irá informá-lo quantas horas equivale o tempo digitado e também quanto ele passou do tempo mínimo de prova que é de 20min (Considere que para a questão que todo o usuário fará um tempo de prova maior que o mínimo).
*/

/*

//declaração de variaveis
float tempo, horas, tempo_total;

//Captura de valores
printf("\n Tempo de realização da prova: ");
scanf("%f",&tempo);

//calculos
horas = (tempo / 60);
tempo_total = tempo - 20;

//Exibição de dados
printf("\n O valor de tempo em horas: %.1f",horas);
printf("\n tempo ultrapassado em horas: %.1f",tempo_total);
*/

// #DECISÃO e operadores relacionais e lógicos

/*************************************
Criar um algoritmo para ler um percurso em quilômetros, o tipo de carro, e o tipo de combustível (gasolina ou álcool) e depois informar o consumo estimado de combustível deste percursso. Sabendo-se que o carro tipo 1 faz 12 km/l com gasolina e 7km/l com alcool, já o carro do tipo 2 faz 17km/l com gasolina e 9 km/l com álccol.
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
    printf("O consumo estimado de combustivel é: %.2f litros", consumo);
  }
  if(combustivel == 2){
    consumo = percurso/7;
    printf("O consumo estimado de combustivel é: %.2f litros", consumo);
  }
}
if (carro == 2) {
  if(combustivel == 1){
    consumo = percurso/17;
    printf("O consumo estimado de combustivel é: %.2f litros", consumo);
  }
  if(combustivel == 2){
    consumo = percurso/9;
    printf("O consumo estimado de combustivel é: %.2f litros", consumo);
  }
}
*/


/*
Faça um algoritmo para calcular a conta de energia, nele o usuário irá informar o preço do kWh , quantidade que kWh consumidos e a bandeira tarifária (verde, amarela e vermelha). Ressalta-se que, se a bandeira for verde não há acrescimo,  se a bandeira for amarela o preço do kWh receberá um acrescimo de 10% no seu valor, se a bandeira for vermelha o preço do kWh  receberá um acrescimo de 20% em seu valor. Entrará também na conta a taxa de iluminação pública, que é um valor fixo de R$13,20 (treze reais e vinte centavos).
*/


// #FOR

/*
Elabore um algoritmo em c, que leia 10 números quaisquer, e mostre ao final: o produto dos 2 primeiros números, a soma do 3°,4º e 5° números, e a média aritméticas do 6º, 7°, 8°, 9º e 10° número. (Utilize a estrutura FOR para responder a questão).
*/

////Elabore um algoritmo em C que leia o preço da Arroba (14.7kg) e depois o peso de 6 bois informando o preço que cada boi seria vendido, ao final mostre o boi que seria vendido pelo maior valor.
/*
float preco_arroba, peso, i, preco_boi, maior_preco=0;

printf("\n Informe o preço da arroba:");
scanf("%f", &preco_arroba);

for(i=1; i<=6; i++){
  printf("\n Informe o peso do boi:");
  scanf("%f", &peso);

  preco_boi = preco_arroba*(peso/14.7);
  printf("\n O preço do boi é: R$%.2f\n", preco_boi);

  if(preco_boi>maior_preco){
    maior_preco=preco_boi;
  }
}//end for
  printf("\n O maior preço é: R$%.2f\n", maior_preco);
*/
// WHILE
 /*
 Elabore um algoritmo em c, que leia um conjunto de consultas. O programa deve iniciar perguntado se a consulta foi feita por convênio ou foi particular. Caso ela tenha sido feita por convênio o usuário deve informar qual convênio (Unimed, RedeVida, Internow, são aceitos apenas esses três), caso a consulta seja feita de forma particular deve ser inserido o valor pago. Após cada entrada deve ser perguntando se o usuário deseja inserir uma nova entrada ou encerrar o programa. Quando o programa for encerrado deve ser exibido o número de consultas por convenio e quantas consultas por convênio, bem como quantidade de consultas particular e todo valor que foi pago. (Utilize a estrutura while dentro da resolução desta questão.)
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
  printf("\n Digite (1) para continuar e (2) para encerrar a programação");
  scanf("%d", &entrada);
}while(entrada==1);

printf("\n quantidade de consultas Unimed,%d", qtd_1);
printf("\n quantidade de consultas Rede Vida,%d", qtd_2);
printf("\n quantidade de consultas Internow,%d", qtd_3);
printf("\n quantidade de consultas particular,%d", qtd_p);
printf("\n valor gasto nas consulta particular,%d",valor_p);

  return 0;

}
