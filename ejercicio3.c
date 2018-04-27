#include <stdio.h>

void imprimir_total (int me){
	printf("El total a pagar es:\n$%d",me);
	}

int cuota_20(){

	int i, me, mesant;
	printf("Ingrese el valor de la primera cuota:\n");
	scanf("%d",&mesant);
	for (i=1;i<=20;i++){
        mesant=mesant*2;
		me=mesant*2;
		printf("$%d\n",me);
	}
	return me;
}

int main(){
	 int z;
	z=cuota_20();
	imprimir_total(z);
	return 0;
}
