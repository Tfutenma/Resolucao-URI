/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

COD   ESPECIFICACAO     PRECO
1     Cachorro Quente   R$4,00
2     X-Salada          R$4,50
3     X-Bacon           R$5,00
4     Torrada Simples   R$2,00
5     Refrigerante      R$1,00

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

#include <stdio.h>

int main()
{
      int cod, qtd;
      double item[5], total;
      item[0] = 4.00;
      item[1] = 4.50;
      item[2] = 5.00;
      item[3] = 2.00;
      item[4] = 1.50;

      scanf("%d %d", &cod, &qtd);
      total = item[cod - 1] * qtd;
      printf("Total: R$ %.2lf\n", total);

      return 0;
}