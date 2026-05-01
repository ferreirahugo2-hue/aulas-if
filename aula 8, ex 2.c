#include <stdio.h>

int somar(int n) {
    
    if (n == 1) { 
     return 1;}
        
     else { 
        
        return n + somar(n - 1);
    }
}
int main() {
    int numero = 5;

    int resultado = somar(numero);

    printf("%d\n", resultado); 

    return 0;
}