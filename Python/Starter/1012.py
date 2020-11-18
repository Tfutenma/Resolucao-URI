# Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
# MaiorAB = (a+b+abs(a-b))/2


# Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

# Entrada
# O arquivo de entrada contém três valores inteiros.

# Saída
# Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

#coding: utf-8

x = input().split()
a = float(x[0])
b = float(x[1])
c = float(x[2])
pi =3.14159 
tri = a * c /2
circ = c * c * pi
trap = ((a+b)*c)/2
quad = b*b
ret = a * b

print("TRIANGULO: {:.3f}".format(tri))
print("CIRCULO: {:.3f}".format(circ))
print("TRAPEZIO: {:.3f}".format(trap))
print("QUADRADO: {:.3f}".format(quad))
print("RETANGULO: {:.3f}".format(ret))