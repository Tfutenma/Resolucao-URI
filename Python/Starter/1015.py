# Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

# Distancia = sqrt(pwd((x2-x1),2+pwd((y2 - y1),2))

# Entrada
# O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

# Saída
# Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.


# coding: utf-8

import math

entrada1 = input().split()
entrada2 = input().split()
x1 = float(entrada1[0])
y1 = float(entrada1[1])
x2 = float(entrada2[0])
y2 = float(entrada2[1])
dist = math.sqrt(math.pow((x2 - x1), 2) + math.pow((y2 - y1), 2))
print("{:.4f}".format(dist))
