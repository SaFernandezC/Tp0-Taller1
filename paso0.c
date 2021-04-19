#include <stdio.h>

typedef struct par_ordenado{
    int x;        
    short int y;   
}par_ordenado_t;

int main(){
    
    par_ordenado_t par;

    size_t number = 5;
    
    printf("Sizeof(par_ordenado) --> %li\n", sizeof(par));
    printf("Sizeof(suma_elementos) --> %li\n", sizeof(par.x)+sizeof(par.y));
   
    return 0;
}
