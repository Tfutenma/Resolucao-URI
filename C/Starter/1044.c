/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.
*/

#include <stdio.h>

void saoMultiplos(int a, int b)
{
      if ((a > b && a % b == 0) || (a < b && b % a == 0))
      {

            printf("Sao Multiplos\n");
      }
      else
      {
            printf("Nao sao Multiplos\n");
      }
}

int main()
{

      int a, b;
      scanf("%d %d", &a, &b);
      saoMultiplos(a, b);

      return 0;
}