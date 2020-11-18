# Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
# MaiorAB = (a+b+abs(a-b))/2


# Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

# Entrada
# O arquivo de entrada contém três valores inteiros.

# Saída
# Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".


#coding: utf-8

x = input().split()
a = int(x[0])
b = int(x[1])
c = int(x[2])

maiorab = (a+b+abs(a-b))/2
maior = (maiorab+c+abs(maiorab-c))/2

print("{:.0f} eh o maior".format(maior))