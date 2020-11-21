/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/

#include <stdio.h>

void sort(int entrada[])
{
      int iteracoes = 0;
      for (int i = 1; i < 3; i++)
      {
            int temp;
            if (entrada[i - 1] > entrada[i])
            {
                  iteracoes++;
                  temp = entrada[i - 1];
                  entrada[i - 1] = entrada[i];
                  entrada[i] = temp;
            }
      }
      if (iteracoes != 0)
      {
            sort(entrada);
      }
}

void imprimir(int entrada[])
{
      for (int i = 0; i < 3; i++)
      {
            printf("%d\n", entrada[i]);
      }
}

void copiar(int entrada[], int copia[])
{
      for (int i = 0; i < 3; i++)
      {
            copia[i] = entrada[i];
      }
}

int main()
{
      int entrada[3], copia[3];
      scanf("%d %d %d", &entrada[0], &entrada[1], &entrada[2]);
      copiar(entrada, copia);
      sort(entrada);
      imprimir(entrada);
      printf("\n");
      imprimir(copia);

      return 0;
}