#coding: utf-8

nome = input()
salario = float(input())
totalVendas = float(input())
total = (totalVendas * 0.15) + salario

print("TOTAL = R$ %.2f" %total)