#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int i;
    // Flutuante
    float aleatorio;
    // Vetor
    float vetAlt[100];
    srand(time(NULL));

    for(i = 0; i < 100; i++) {

        // Gerar Altura

        aleatorio = (float)rand() / RAND_MAX;
        vetAlt[i] =  aleatorio * 2.5;
        printf("%.1f \n", vetAlt[i]);

    }

    system("pause");

    return 0;

}