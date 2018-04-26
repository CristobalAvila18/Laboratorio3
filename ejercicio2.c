#include <stdio.h>
/* Hacemos la funcion de "temp", el cual es el encargado de hacer la cantidad de guiones y el asterico donde nos mostrara los grados que pusimos*/
void termometro(int temp){
    int i;
    printf("            .....:::TERMOMETRO:::..... \n");
    printf("0        10        20        30        40        50 \n");
    printf("|        |         |         |         |         | \n");
    for (i=0; i<=temp-2; i++){
        printf("-");
    }
     printf("*");
}
/*Este es el procedimiento en donde tendremos que ingresar la temperatura deseada bajo los parametros dados, como que sea un numetro entre 0 y 50*/
/*Aqui tambien nos mostrara el resultado deseado*/
int main (void){
    int c;
    printf(".....:::Bienvenido al Termometro informatico:::...... \n");
    printf("0        10        20        30        40        50 \n");
    printf("|        |         |         |         |         | \n");
    printf("-------------------------------------------------- \n");
    printf("\n");
    printf("Ingrese los grados celcius del 0 al 50 \n");
    scanf("%d",&c);
    if (c<=50 && c>=0){
        termometro(c);
    }
    else {
        printf("Su numero debe ser entre 0 y 50");
    }
    return 0;
    }






