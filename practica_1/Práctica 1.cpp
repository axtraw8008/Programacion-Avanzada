// Identificador de Números primos
// Autor: axtraw8008
// Versión 1.0.0
// El siguiente código permite sacar el area de un triangulo
#include <stdio.h>
int main(){
	int b, h, a;
	printf("Ingrese la base: ");
	scanf("%d", b);
	printf("Ingrese el area: ");
	scanf("%d", h);
	a = (b * h)/2;
	printf("El area es: %d", a);
	return 0;
}