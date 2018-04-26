#include <stdio.h>
/*Al principio podemos observar la funcion que utilizaremos mas adelante, que es el dinero multiplicado por la cantidad de horas */
float pago_por_horas (float dinero, float horas){
    float resultado;
    resultado=(horas*dinero);
    return resultado;
}
/*ahora pasamos al procedimiento en donde ingresaremos cuanto pagaremos por hora trabajada. */
int main (void){
    float horas,dinero,resultado,i,sueldo=0;

    printf("ingrese la cantidad de dinero que se paga por hora \n");
    scanf("%f",&dinero);

    printf("ingrese las horas trabajadas correspondientes a los dias \n");
/*siguiendo con un "For" para poder ingresar por separado las cantidades de horas trabajas en los 6 dias*/
    for(i=1; i<=6;i++){
        printf("Dia numero %1.f\n", i);
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%f",&horas);
        resultado= pago_por_horas(dinero, horas);
        sueldo+=resultado;
    }
/*finalizando en la parte de sueldo, este se nos ira sumando cada vez que ingresemos las horas trabajadas de un dia, calculando
automaticamente el dinero ganado por dia.
y por ultimo nos mostrara el resultado de cuanto debemos pagar por las horas trabajadas de cierta persona"
*/
    printf("el sueldo correspondiente es de: %1.f",sueldo);
    return 0;
}
