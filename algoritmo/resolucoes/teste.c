
#include <stdio.h>

int main(void) {
    char nome[30];
    char opcao;
    printf("Digite seu nome:");
    scanf("%s",nome);

    printf("%s , digite S para sim, e N para n�o \n",nome);
    scanf("%c",opcao);

    if(opcao=='S' || opcao=='s'){
      printf("Voc� escolheu sim \n");
    }else if(opcao=='N' || opcao=='n'){
      printf("Voc� escolheu n�o \n");
    }else{
      printf("Op��o inv�lida\n");
    }
}
