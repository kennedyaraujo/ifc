
#include <stdio.h>

int main(void) {
    char nome[30];
    char opcao;
    printf("Digite seu nome:");
    scanf("%s",nome);

    printf("%s , digite S para sim, e N para não \n",nome);
    scanf("%c",opcao);

    if(opcao=='S' || opcao=='s'){
      printf("Você escolheu sim \n");
    }else if(opcao=='N' || opcao=='n'){
      printf("Você escolheu não \n");
    }else{
      printf("Opção inválida\n");
    }
}
