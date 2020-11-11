#coding: utf-8

x = input().split()
a = int(x[0])
b = int(x[1])
c = int(x[2])

maiorab = (a+b+abs(a-b))/2
maior = (maiorab+c+abs(maiorab-c))/2

print("{:.0f} eh o maior".format(maior))