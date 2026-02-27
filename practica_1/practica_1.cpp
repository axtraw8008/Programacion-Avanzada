// Programa: Cálculo del área de un triángulo
// Autor: axtraw8008
// Versión: 1.2.0
// Descripcion: Cálcula el área de un triángulo a partir de la base y la altura

#include <stdio.h>
int main(){
	float b, h, a;
	printf("Ingrese la base en metros: ");
	scanf("%f", &b);
	printf("Ingrese la altura en metros: ");
	scanf("%f", &h);
	a = (b * h)/2.0;
	printf("El area es: %.3f metros", a);
	return 0;
}
