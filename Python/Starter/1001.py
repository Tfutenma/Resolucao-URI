# Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu 
# resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma 
# além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, 
# caso contrário, você receberá "Presentation Error".

# Entrada
# A entrada contém 2 valores inteiros.

# Saída
# Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável X e pelo final de linha. 
# Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo.




#coding: utf-8

num = int(input())
horas = int(input())
valor = float(input())

print("NUMBER = {}".format(num))
print("SALARY = U$ {:.2f}".format(horas*valor))