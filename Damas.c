/*
O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é a dama, que pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais.

O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez: dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas),
de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que você escrevesse um programa que resolve esse tipo de problema.  

Entrada
A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro inteiros X1, Y1, X2 e Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). A dama começa na casa de coordenadas (X1, Y1),
e a casa de destino é a casa de coordenadas(X2, Y2). No tabuleiro, as colunas são numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo também de 1 a 8.
As coordenadas de uma casa na linha X e coluna Y são (X, Y ).

O final da entrada é indicado por uma linha contendo quatro zeros.

Saída
Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo um número inteiro, indicando o menor número de movimentos necessários para a dama chegar em sua casa de destino.


Exemplo de Entrada	
4 4 6 2
3 5 3 5
5 5 4 3
0 0 0 0

Exemplo de Saída
1
0
2
*/

#include <stdio.h>

int main(){
  int x1, y1;
  int x2, y2;
  int moves;
  int xd1, yd1, xd2, yd2;
  int i;
  int found = 0;

  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  while((x1 != 0) && (y1 != 0) && (x2 != 0) && (y2 != 0)){
    if((x1 == x2) && (y1 == y2)){
      moves = 0;
      printf("%d\n", moves);
    } else{
      if((x1 == x2) || (y1 == y2)){
        moves = 1;
        printf("%d\n", moves);
      } else{
        for(i=1; i < 8; i++){
          xd1 = x1 - i;
          yd1 = y1 -i;
          xd2 = x1 +i;
          yd2 = y1 +i;
          if(((xd1==x2)&&(yd1==y2)) || ((xd1==x2)&&(yd2==y2)) || ((xd2==x2)&&(yd1==y2)) || ((xd2==x2)&&(yd2==y2))){
            moves = 1;
            printf("%d\n", moves);
            found = 1;
          }
        }
        if(!found){
          moves = 2;
          printf("%d\n", moves);
        }
        found = 0;
      }
    }
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  }
  return 0;
}
