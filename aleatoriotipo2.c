#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i;
    // Flutuante
    float aleatorio;
    srand(time(NULL));

    for(i = 0; i < 100; i++) {

        // Valores entre 0 e 1

        aleatorio = (float)rand() / RAND_MAX;
        printf("%.5f \n", aleatorio);

    }

    system("pause");

    return 0;

}