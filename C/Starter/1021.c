/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#include <stdio.h>
#include <math.h>
#define MOEDA 6
#define CEDULA 6

int main()
{
      int cedulas[12], moedas[12];
      cedulas[0] = 100;
      cedulas[1] = 50;
      cedulas[2] = 20;
      cedulas[3] = 10;
      cedulas[4] = 5;
      cedulas[5] = 2;
      moedas[0] = 100;
      moedas[1] = 50;
      moedas[2] = 25;
      moedas[3] = 10;
      moedas[4] = 5;
      moedas[5] = 1;

      float entrada;
      int entradaDin, entradaMoeda;
      scanf("%f", &entrada);
      entradaDin = (int)entrada;
      entradaMoeda = round(((float)entrada - entradaDin) * 100);

      printf("NOTAS:\n");

      for (int i = 0; i < CEDULA; i++)
      {

            cedulas[i + CEDULA] = entradaDin / cedulas[i];
            entradaDin = round(entradaDin % cedulas[i]);
            printf("%d nota(s) de R$ %d.00\n", cedulas[i + CEDULA], cedulas[i]);
      }

      printf("MOEDAS:\n");

      entradaMoeda = round((entradaDin * 100) + entradaMoeda);

      for (int i = 0; i < MOEDA; i++)
      {
            moedas[i + MOEDA] = entradaMoeda / (moedas[i]);
            entradaMoeda = round(entradaMoeda % moedas[i]);
            printf("%d moeda(s) de R$ %.2f\n", moedas[i + MOEDA], (moedas[i] / 100.00));
      }

      return 0;
}