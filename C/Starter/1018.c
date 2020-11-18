/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

#include <stdio.h>
#define TAMANHO 14
#define QTDCEDULAS 7

int main()
{
      int entrada, cedulas[TAMANHO];
      scanf("%d", &entrada);
      cedulas[0] = 100;
      cedulas[1] = 50;
      cedulas[2] = 20;
      cedulas[3] = 10;
      cedulas[4] = 5;
      cedulas[5] = 2;
      cedulas[6] = 1;
      printf("%d\n", entrada);
      for (int i = 0; i < QTDCEDULAS; i++)
      {
            cedulas[i + QTDCEDULAS] = entrada / cedulas[i];
            entrada = entrada % cedulas[i];
            printf("%d nota(s) de R$ %d,00\n", cedulas[i + QTDCEDULAS], cedulas[i]);
      }

      return 0;
}