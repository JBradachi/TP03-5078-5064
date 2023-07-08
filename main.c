#include "Ordenacoes.h"

//gcc main.c ordenacoes.c -o e
int main(){
    int v[10] = {23, 43, 1 , 2, 23, 65, 7, 3, 12, 5};
    int tam = 10;
    Heapsort(v, &tam);
    printa(v, tam);

    return 0;
}