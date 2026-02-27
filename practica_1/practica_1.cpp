// Programa: Cálculo del área de un triángulo
// Autor: axtraw8008
// Versión: 1.1.0
// Descripcion: Cálcula el área de un triángulo a partir de la base y la altura

#include <stdio.h>
int main(){
	int b, h, a;
	printf("Ingrese la base: ");
	scanf("%f", &b);
	printf("Ingrese el altura: ");
	scanf("%f", &h);
	a = (b * h)/2;
	printf("El area es: %f", a);
	return 0;
}
