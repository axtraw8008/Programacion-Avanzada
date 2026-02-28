// Programa: Cálculo del área de un triángulo
// Autor: axtraw8008
// Versión: 2.0.0
// Descripcion: Cálcula el área de un triángulo a partir de la base y la altura

#include <stdio.h>
int main(){
	float b, h, a;
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
			printf("Ingrese la base en metros: ");
			scanf("%f", &b);
			printf("Ingrese la altura en metros: ");
			scanf("%f", &h);
			a = (b * h);
			printf("El area del triangulo es de: %.3f metros.", a);
			break;
		default:
			printf("Opcion no valida.");
		}
	return 0;
}
