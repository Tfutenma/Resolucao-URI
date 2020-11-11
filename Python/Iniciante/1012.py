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