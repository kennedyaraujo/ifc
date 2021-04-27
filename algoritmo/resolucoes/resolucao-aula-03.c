#include <stdio.h>
#include <math.h>

int main(void) {
/*
elabore um algoritmo que calcule a area da base de um cubo (a=L.L)


  //declarar as variaveis
  float area, lado;

  //capturar as informações
  printf("Informe o valor do lado do cubo: \n");
  scanf("%f",&lado);

  // realizar os calculos
  area = lado * lado;
  
  // mostrar para o usuário
  printf("\n A área do cubo é: %f", area);
  
*/

/*
Desenvolva um algoritmo para ler uma temperatura em graus Celsius (℃) e apresentar o valor equivalente em Farenheit (℉) e em Kelvin (K).

°F =°C * 1.8000+ 32.00
T(K) = T(°C) + 273.15



//declaração de variáveis
float celsius, farenheit, kelvin;

//captura das informações - breno
printf("Informe a temperatura em Graus Celsius: \n");
scanf("%f",&celsius);


//calculo dos valores - gabriel
farenheit= celsius * 1.8+32;
kelvin= celsius + 273.15;




  //exibir o resultado para o usuário - miguel goes
  printf(" \n o valor em farenheit é: %f", farenheit);
  printf(" \n o valor em kelvin é: %f", kelvin);


  printf(" \n o valor farenheit é: %f e o valor em kelvin é: %f",farenheit,kelvin);

  return 0;
  
*/


/*
Faça um algoritmo para calcular e exibir um salário reajustado em 23,75%. O salário atual deve ser fornecido pelo usuário.


//declaração de variáveis - Nauan
float salario, salarioReajustado;

//captura das informações - jessica
  printf("Informe o salario: \n");
  scanf("%f",&salario);


//realizar os calculos - matheus bolzan
//salarioReajustado = salario + 
salarioReajustado = salario * 1.2375;


//exibir o resultado para o usuario  - joão vitor
  printf("  \n O salário reajustado é: %.2f ", salarioReajustado);


 
 
*/

/*
Faça um algoritmo para calcular e exibir do salário líquido de um professor, onde o número de horas, o valor da hora e o percentual do INSS devem ser fornecidos pelo usuário:
salario_bruto = num_hora_aula * valor_hora_aula 
salario_liquido = salario_bruto – (salario_bruto * percentual_INSS).



//declaração de variaveis - weelivelton
float hora, valor, inss, salario, salario_bruto;

//capturar as informações - guilher m 

printf("informe hora trabalhada: \n");
scanf("%f", &hora);

printf("informe valor da hora: \n");
scanf("%f", &valor);

printf("informe percentual inss: \n");
scanf("%f", &inss);



//realizar os calculos - emerson
salario_bruto = hora*valor;
salario = salario_bruto - (salario_bruto*(inss/100));


//exibir o resultado para os usuários - eziquiel
  printf("\nO valor do salário líquido é: %f",salario);



//Faça um algoritmo para calcular a área superficial de uma esfera (4*pi*r^2).

float area, raio;


printf("Informe o raio da esfera: \n");
scanf("%f", &raio);


area = 4 * 3.14 * pow(raio, 2);

printf("\nO valor da area  é: %f",area);
*/


/*
Faça um algoritmo para calcular e exibir o valor de uma prestação em atraso:
prestacao_atrasada = prestacao + (prestacao * (taxa/100) * num_dias_atraso);

onde a taxa é o percentual de juros por dia, num_dias_atraso é o número de dias em atraso e prestação é o valor da prestação normal. O valor da prestação, a taxa e o número de dias em atraso devem ser fornecidos pelo usuário.




//definição de variáveis - dilton
float prestacao_atrasada, prestacao, taxa, num_dias_atraso;


//capturar as informações - bruno gaio
printf("Informe a taxa: \n");
  scanf("%f",&taxa);
printf("dias de atraso: \n");
  scanf("%f",&num_dias_atraso);
printf("prestacao: \n");
  scanf("%f",&prestacao);



//realizar os calculos - breno reck
prestacao_atrasada = prestacao + (prestacao *(taxa/100) *num_dias_atraso);

//Exibir resultados -willian
printf("\n o valor da prestacao atrasada é: %f", prestacao_atrasada);

 return 0;
*/
} 