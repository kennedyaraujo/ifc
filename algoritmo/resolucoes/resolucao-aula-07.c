#include <stdio.h>

int main(void) {
  int i;

/* Contagem decrescente
for(i=10; i>0; i--){
   printf("\n%d", i);
}
*/


/*
Faça um algoritmo que escreva os números ímpares entre 1 e 100.
*/
//solução 1
/*for(i=1; i<=100; i++){
  if(i%2==1){
    printf("\n%d", i);
  }else{
    printf("\nNão mostrou o %d", i);
  }
}

//solução 2
for(i=1; i<=100; i=i+2){
    printf("\n%d", i);
}
*/


//Faça um programa, que mostre na tela uma contagem que se inicia e se encerra com os números determinados pelo usuário
/*
int inicio, fim;
printf("Informe o número onde a contagem começa:");
scanf("%d",&inicio);
printf("Informe o número onde a contagem termina:");
scanf("%d",&fim);
//for(i=1; i<=100; i++){
for(i=inicio; i<=fim; i++){
  printf("\n%d", i);
}
*/





//Construa a tabuada do 5, utilizando apenas um único printf
/*
for(i=5; i<=50; i=i+5){
  printf("\n 5 x %d = %d", (i/5), i);
}

for(i=1; i<=10; i=i+1){
  printf("\n 5 x %d = %d", i, (i*5));
}
*/


//Crie um algoritmo que leia a nota de 5 alunos e mostre a média das notas
/*
float nota, somatorio, media;
i=0;
for (i=1; i<=5 ;i++){
  printf ("Informe a nota do aluno:");
  scanf ("%f", &nota);
  somatorio=somatorio+nota;
}
media=somatorio/5.0;
printf("\nA média das notas informadas é= %.1f", media);
printf("\nA média das notas informadas é= %.1f", (somatorio/5.0));
*/



/*
//Crie um algoritmo que leia a nota de 5 alunos e ao final mostre a maior delas
float nota, maior=0;
for (i=1; i<=5 ;i++){
  printf ("Informe a nota do aluno:");
  scanf ("%f", &nota);
  if(nota > maior){
    maior = nota;
  }
}
printf("\nO maior valor é %.1f", maior);
*/




//Crie um algoritmo que o salário de oito funcionário e informe a quantidade de colaboradores que ganham mais de 1000 reais e média salarial destes funcionarios

float salario, cont = 0, media = 0;

for(i = 1; i <=8; i++){
  printf("Informe o valor do salário:");
  scanf("%f", &salario);

  if(salario > 1000.00){
    cont = cont + 1;
    media = media + salario;
  }
}
  printf("\n%.0f colaboradores ganham mais que mil reais e a media de seus salarios é %.2f: ", cont, (media/cont));







  return 0;
}
