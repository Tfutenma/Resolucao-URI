#coding: utf-8

produto1 = input().split()
cod1 = int(produto1[0])
num1 = int(produto1[1])
valor1 = float(produto1[2])

produto2 = input().split()
cod2 = int(produto2[0])
num2 = int(produto2[1])
valor2 = float(produto2[2])

total = num1 * valor1 + num2 * valor2 

print("VALOR A PAGAR: R$ {:.2f}".format(total))
