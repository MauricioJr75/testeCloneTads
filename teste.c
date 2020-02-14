#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

int main(){

    int a;
    char x;

    system("clear");
    do {

    printf("\n\tDigite um numero inteiro: ");
    scanf("%i", &a);

    if(a%2==0){
        printf("\n\tO numero '%i' e um numero par\n", a);
    }
    else printf("\n\tO numero '%i' e um numero impar\n", a);

    printf("\n\tDeseja executar novamente? ");
    __fpurge(stdin);
    scanf("%c", &x);

    }while(x=='S' || x=='s');

    return 0;
}