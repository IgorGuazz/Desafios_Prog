/*

Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da 
mensagem “eh o maior”. Utilize a fórmula:

MaiorAB= (a+b+abs(a-b))/2

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

Exemplos de Entrada
7 14 106

Exemplos de Saída
106 eh o maior

*/

#include <stdio.h>

int main(){

    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);

    result = MaiorAB(a, b);
    result = MaiorAB(result, c);

    printf("%d eh o maior\n",result);

    return 0;


}

int MaiorAB(int a, int b){
    int res = 0;

    res = (a + b + abs(a - b))/2;

    return res;
}


