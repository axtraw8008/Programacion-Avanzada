// Programa: Cálculo del área de un triángulo
// Autor: axtraw8008
// Versión: 1.0.1
// Descripcion: Cálcula el área de un triángulo a partir de la base y la altura

#include <stdio.h>
int main(){
	int b, h, a;
	printf("Ingrese la base: ");
	scanf("%d", &b);
	printf("Ingrese el altura: ");
	scanf("%d", &h);
	a = (b * h)/2;
	printf("El area es: %d", a);
	return 0;
}
