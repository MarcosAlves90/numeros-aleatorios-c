#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i, aleatorio;
    srand(time(NULL));

    for(i = 0; i < 100; i++) {

        // Valores entre 1 e 100

        aleatorio = rand() % 100 + 1;
        printf("%d \n", aleatorio);

    }

    system("pause");

    return 0;

}