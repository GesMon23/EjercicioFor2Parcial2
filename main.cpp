// DESPLEGAR LA TABLA DE MULTIPLICAR QUE EL USUARIO INDIQUE.
#include <iostream>
int main(int argc, char** argv) {
	int numero, resultado;
	printf("INGRESE EL NUMERO AL QUE DESEE CONOCER SU TABLA DE MULTIPLICACION\n");
	scanf("%d", &numero);
	for(int i=1;i<=10;i++){
		resultado=numero*i;
		printf("%d x %d = %d \n", numero, i, resultado);
	}
	system("pause");
}
