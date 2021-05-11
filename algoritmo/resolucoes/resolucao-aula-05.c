#include <stdio.h>

int main(void) {
/*
Ler 3 valores e escrever o maior deles.


//declarar variaveis - Welivelton
int valor1, valor2, valor3;

//capturar a informação - Welivelton
printf("informe o primeiro valor: \n");
scanf("%d",&valor1);

printf("informe o segundo valor: \n");
scanf("%d",&valor2);

printf("informe o terceiro valor: \n");
scanf("%d",&valor3);


// mostrar o maior sendo este for o primeiro - Vinicius de Melo
if (valor1>valor2 && valor1>valor3){
  printf("o primeiro valor é maior: %d", valor1);
}


// mostrar o maior quando este for o segundo - willian moraes
if (valor2>valor3 && valor2>valor1){
  printf("o segundo valor é maior: %d", valor2);
}

// mostrar o maior quando este for o terceiro - Nauan Colussi
if (valor3>valor2 && valor3>valor1){
  printf("O maior valor dentre os 3 é: %d", valor3);
}




// mostrar o maior sendo este for o primeiro - Vinicius de Melo
if (valor1>valor2 && valor1>valor3){
  printf("o primeiro valor é maior: %d", valor1);
}else if (valor2>valor3 && valor2>valor1){
  printf("o segundo valor é maior: %d", valor2);
}else{
  printf("O maior valor dentre os 3 é: %d", valor3);
}
*/



/*
Ler 3 valores e escrever a soma dos 2 maiores.

//declarar variaveis - Miguel
int valor1,valor2,valor3,soma;


//capturar a informação - Miguel
printf("informe o primeiro valor: \n");
scanf("%d",&valor1);

printf("informe o segundo valor: \n");
scanf("%d",&valor2);

printf("informe o terceiro valor: \n");
scanf("%d",&valor3);


// mostrar soma quando o primeiro for o menor -  Josué
if(valor1<valor2 && valor1<valor3){
  soma = valor2+valor3;
  printf(" \n O valor da soma é: %d \n",soma);
}


// mostrar  some quando o segundo for o menor - Matheus Bolzan
if(valor2<valor1 && valor2<valor3){
  soma = valor1 +valor3;
  printf(" \n o valor da soma é: %d \n",soma);
}

// mostrar some quando o terceiro for o menor - Kleverson
if(valor3<valor1 && valor3<valor2){
  //soma = valor1 + valor2;
  printf(" \n o valor da soma é: %d \n", valor1+valor2);
}

*/


/*
23. Ler 3 valores e escrevê-los em ordem crescente.


//declarar variaveis -   João Vitor
int valor1,valor2,valor3;

//capturar a informação - João Vitor
printf("informe o primeiro valor: \n");
scanf("%d",&valor1);

printf("informe o segundo valor: \n");
scanf("%d",&valor2);

printf("informe o terceiro valor: \n");
scanf("%d",&valor3);


if(valor1>valor2 && valor1>valor3){
  printf("%d,", valor1);
  if(valor2>valor3){
    printf("%d,%d", valor2, valor3);
  }else{
    printf("%d,%d", valor3, valor2);
  }
}else if(valor2>valor1 && valor2>valor3){
  printf("%d,", valor2);
  if(valor1>valor3){
    printf("%d,%d", valor1, valor3);
  }else{
    printf("%d,%d", valor3, valor1);
  }
}else{
   printf("%d,", valor3);
  if(valor2>valor1){
    printf("%d,%d", valor2, valor1);
  }else{
    printf("%d,%d", valor1, valor2);
  }
}

*/


/*
26. Desenvolva um algoritmo que calcule o imposto de renda de um
contribuinte considerando que os dados do contribuinte são: número do
CPF, número de dependentes e renda mensal. Para o contribuinte será
feito um desconto de 5% de salário mínimo por dependente (máximo de 3
dependentes 15%).

Os valores da alíquota para cálculo do imposto são:

Renda líquida Alíquota
até 2 salários mínimos Isento
2..3 salários mínimos 5%
3..5 salários mínimos 10%
5..7 salários mínimos 15%
acima de 7 salários mínimos 20%

Deve ser solicitado o valor atual do salário mínimo ao iniciar o algoritmo
(R$937,00)

*/

// definir as variaves e capturar as informacoes necessarias - Guilherme
int cpf, numero_de_dependentes;
float renda_mensal, salario_minimo, imposto, desconto;

printf("informe o cpf: \n");
scanf("%d",&cpf);

printf("informe o numero_de_dependentes: \n");
scanf("%d",&numero_de_dependentes);

printf("informe a renda_mensal: \n");
scanf("%f",&renda_mensal);

printf("informe o valor atual do salario_minimo: \n");
scanf("%f",&salario_minimo);


//ajuste do número de dependentes
if(numero_de_dependentes>3){
  numero_de_dependentes=3;
}

desconto = 0.05*salario_minimo*numero_de_dependentes;

// Saída (imposto de renda de um contribuinte) - isento - wellivelton
if(renda_mensal<=(2*salario_minimo)){
  printf("o contribuinte é isento");
}
// Saída (imposto de renda de um contribuinte) - 2..3 salários mínimos 5% - João Vitor
if(renda_mensal>(salario_minimo*2) && renda_mensal<=(salario_minimo*3)){
  imposto = renda_mensal * 0.05 - desconto;
  printf("O valor de IRPF a pagar é: %.2f reais", imposto);
}

// Saída (imposto de renda de um contribuinte) - 3..5 salários mínimos 10% - Felipe Zini
if(renda_mensal>(salario_minimo*3) && renda_mensal<= (salario_minimo*5)){
  imposto = renda_mensal * 0.1 - desconto;
  printf("O valor de IRPF a pagar é: %.2f reais", imposto);
}

// Saída (imposto de renda de um contribuinte) - 5..7 salários mínimos 15% - Ezequiel
if(renda_mensal>(salario_minimo*5) && renda_mensal<=(salario_minimo*7)){
  imposto = renda_mensal * 0.15 - desconto;
  printf("O valor de IRPF a pagar é: %.2f reais", imposto);
}

// Saída (imposto de renda de um contribuinte) - acima de 7 salários mínimos 20% - Breno
if(renda_mensal>(salario_minimo * 7)){
  imposto= renda_mensal * 0.20 - desconto;
  printf("O valor de IRPF a pagar é: %.2f reais",imposto);
}

  return 0;
}
