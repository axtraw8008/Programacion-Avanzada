# Programa: Cálculo del área de una figura
# Autor: Munuwa
# Versión: 2.0.0
# Descripcion: Cálcula el área de una figura dependiendo el dato solicitado

print("Seleccione la figura:")
print("1. Triangulo")
print("2. Cuadrado")
opcion = int(input("Ingrese el numero de la opcion: "))

if opcion == 1:
    base = int(input("Ingrese la base: "))
    altura = int(input("Ingrese el área: "))
    area = (base * altura)/2
    print("El área del triángulo es:", area)

if opcion == 2:
    lado = int(input("Ingrese un lado de la figura: "))
    area = lado**2
    print("El area del triangulo es:", area)