/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.

Exemplo de Entrada	
5

Exemplo de Saída
0 1 1 2 3
*/

#include <stdio.h>


int main()
{
  int N;
  int i;
  int last1=1, last2=0, current;

  scanf("%d", &N);
  if(N == 0){
    printf("\n");
  }else{
    if(N == 1){
      printf("0 1\n");
    }else{
      printf("0 1 ");
      for(i=0; i<(N-3); i++){
        current = last1 + last2;
        last2 = last1;
        last1 = current;
        printf("%d ", current );
      }
      current = last1 + last2;
      printf("%d\n", current);
      }
  }
  return 0;

}
