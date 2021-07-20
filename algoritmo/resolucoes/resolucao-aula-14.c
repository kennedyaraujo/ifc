 #include <stdio.h>

int main(void) {
/*
Elabore um algoritmo onde o usuário informará o tipo de investimento que deseja fazer e o montante a ser investido e você exibirá qual o valor que ele terá ao final do período.
Tipo I   - CDB30 (30 dias) - 1%
Tipo II  - CDB60 (60 dias) - 3%
Tipo III - CDB90 (90 dias) - 9%
*/

/*
//declaracao de variaveis
float montante;
int tipo;
float redimento1 = 1.01, redimento2 = 1.03, redimento3 = 1.09;
//estratégia com primeiro valor nulo
//float rendimento[4] = {0,1.01,1.03,1.09};
//estratégia com o primeiro valor válido - necessita de operação para subtrair uma unidade do indice rendimento[tipo-1]
float rendimento[3] = {1.01,1.03,1.09};

//printf("valor do item 2 é %f", rendimento[0]);


//captação dos valores
printf("Informe o tipo de investimento: 1 para CDB30; 2 para CDB60; 3 para CDB90: ");
scanf("%d", &tipo);
printf("Informe o montante: R$");
scanf("%f", &montante);
printf("O montante final será de %.1f", montante*rendimento[tipo-1]);

//calculo
if(tipo == 1){
  printf("O montante final será de %f", montante*tipo1);
}else if(tipo == 2){
  printf("O montante final será de %f", montante*tipo2);
}else{
  printf("O montante final será de %f", montante*tipo3);
}
*/


/*
Escreva um programa em C que leia um vetor de 10 posições e imprima os elementos que são maiores que 20, caso não houver nenhum elemento mostrar uma mensagem de aviso ao usuário.
*/


/*
int valor[10], i;


printf("Informe o 1º valor:");
scanf("%d", &valor[0]);
printf("Informe o 2º valor:");
scanf("%d", &valor[2]);
printf("Informe o 3º valor:");
scanf("%d", &valor[3]);
printf("Informe o 4º valor:");
scanf("%d", &valor[4]);
// ...
printf("Informe o 10º valor:");
scanf("%d", &valor[9]);


for(i=0;i<10;i++){
  //printf("%d \n",i);
  printf("Informe o %dº valor:", (i+1));
  scanf("%d", &valor[i]);
}
printf("Os valores maiores que 20, são: ");
for(i=0;i<10;i++){
  if(valor[i] > 20){
    printf("%d ", valor[i]);
  }
}

*/


/*
Elaborar um algoritmo para ler 3 notas de um aluno e depois mostrá-las junto com a média
*/
int notas[3][3], i;
float media, media_prova1, media_prova2, media_prova3;

for(i=0;i<3;i++){
  printf("Informe a 1º nota:");
  scanf("%d", &notas[i][0]);
  printf("Informe a 2º nota:");
  scanf("%d", &notas[i][1]);
  printf("Informe a 3° nota:");
  scanf("%d", &notas[i][2]);
}


for(i=0;i<3;i++){
  media = (notas[i][0]+notas[i][1]+notas[i][2])/3;
  printf("O aluno %d teve as notas %d, %d, %d, e ficou com a media %f \n", i, notas[i][0],notas[i][1], notas[i][2], media);
}

media_prova1 = (notas[0][0]+notas[1][0]+notas[2][0])/3;
media_prova2 = (notas[0][1]+notas[1][1]+notas[2][1])/3;
media_prova3 = (notas[0][2]+notas[1][2]+notas[2][2])/3;
printf("A média das notas nas provas 1,2 e 3 foi respectivamente %f, %f, %f", media_prova1, media_prova2, media_prova3);


/*
Lembrar: informar bois - peso baixo
Lembrar: Questão das notas, fazer com a uma matriz e 3 comandos, depois com dois fors
*/

  return 0;
}
