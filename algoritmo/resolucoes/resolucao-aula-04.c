#include <stdio.h>

int main(void) {

  /*
  //REQUISITAR UM NÚMERO E INFORMAR SE ELE É PAR OU ÍMPAR

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

  */


  /*  
  Escreva um algoritmo que leia dois valores inteiros e diferentes e mostre-os em ordem crescente;
  */
  /*
//declarar variáveis- VInicius
int numero1, numero2;

//capturar numero1 - miguel goes
printf("informe o primeiro numero: \n");
scanf("%d", &numero1);


//capturar numero2 - felipe zini
printf("Informe o segundo numero: \n");
scanf("%d", &numero2);


// fazer as operações e exibir um resultado
if(numero1 > numero2){
  printf("Os numeros são: %d, %d", numero2, numero1);
}else{
  printf("Os numeros são: %d, %d", numero1, numero2);
}
*/




  /*  
  Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem crescente. Utilize para tal uma seleção encadeada;
  */





  /*
  Faça um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e, também, verifique se mostre se ela já tem idade para votar (16 anos ou mais) e para conseguir a Carteira de habilitação (18 anos ou mais).
  
//declarar as variáveis
int idade, ano;

//capturar informacoes - breno reck
printf("Informe o ano que você nasceu: \n");
scanf("%d",&ano);

//realizar os calculos - emerson
idade = 2021 - ano;   


//exibir a idade - exibir
printf("Sua idade é: %d \n", idade);


//exibir mensagem - Voto - ezequiel
if(idade >= 16){
  printf("Você possui idade suficiente para votar.\n");
}else{
  printf("Você não possui idade suficiente para votar.\n");
}


//exibir mensagem - Carteira - jessica
if(idade >= 18){
  printf("Você possui idade suficiente para tirar a carteira.\n");
}else{
  printf("Você não possui idade suficiente para tirar a carteira.\n");
}

*/


/*
// Solicite ao usuário o numero do mês e informe em qual trimestre ele se encontra
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

*/



//27 - Lista - A empresa “MultiSoft” decidiu conceder um aumento de salário para os seus funcionários de acordo com a tabela abaixo:
/*
Salário Atual R$
Índice de aumento
0 a 300,00
10%
300,01 a 600,00
11%
600,01 a 900,00
12%
900,01 a 1500,00
6%
1500,01 a 2000,00
3%
Acima de 2000
Sem aumento
*/

//declarar variaveis - welivelton
float salario_atual, novo_salario;



//capturar dados - vinicius de melo
printf("informe o salário atual: \n");
scanf("%f",&salario_atual);



//calcular e exibir 0 a 300  -  thiago melo
if (salario_atual<=300){
  novo_salario=1.1*salario_atual;
  //novo_salario= salario_atual + (salario_atual*0.1);
  //novo_salario= (salario_atual + (salario_atual*(10/100)));
  //novo_salario = 330;
  printf("--- Salario com reajuste é:%f %f \n", salario_atual,novo_salario);
}



//calcular e exibir 300,01 a 600 - nauan
if (salario_atual>300 && salario_atual <=600){
  novo_salario = salario_atual*1.11;
  printf("O seu novo salário com reajuste é: %f \n", novo_salario);
}




//calcular e exibir 600,01 a 900,00 - miguel
if (salario_atual>=600.01 && salario_atual <=900){
  novo_salario=salario_atual*1.12;
  printf("salario com reajuste é: %f \n", novo_salario);
}




//calcular e exibir 900,01 a 1500,00 - miguel goes
if (salario_atual>=900.01 && salario_atual <=1500.00){
salario_atual=novo_salario*1.06;
printf("novo salario com reajuste é: %f \n", novo_salario);
}

//calcular e exibir 1500,01 a 2000,00 - matheus bolzan
if (salario_atual>1500 && salario_atual <=2000){
  novo_salario=salario_atual*1.03;
  printf("O seu novo sário com reajuste é: %f\n", novo_salario);
}

//calcular e exibir >2000 - klevern
if(salario_atual>2000){
  printf("não há aumento de sálario: %f \n", salario_atual);
}




  return 0;
}