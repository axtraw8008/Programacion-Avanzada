// Programa: Cálculo del área de un triángulo o un cuadrado
// Autor: axtraw8008
// Versión: 2.1.0
// Descripcion: Cálcula el área de un triángulo o cuadrado a partir de la base y la altura o el lado, respectivamente

#include <stdio.h>
#include <math.h>
int main(){
	float b, h, l, a;
	int op;
	printf("Que figura desea sacar el area de?\n1) Triangulo\n2) Cuadrado\n");
	scanf("%d", &op);
	switch (op){
		case 1:
			printf("Ingrese la base en metros: ");
			scanf("%f", &b);
			printf("Ingrese la altura en metros: ");
			scanf("%f", &h);
			a = (b * h)/2.0;
			printf("El area del triangulo es de: %.3f metros.", a);
			break;
		case 2:
			printf("Ingrese cualquiera de los lados en metros: ");
			scanf("%f", &l);
			a = pow(l,2);
			printf("El area del cuadrado es de: %.3f metros.", a);
			break;
		default:
			printf("Opcion no valida.");
		}
	return 0;
}

