#include <stdio.h>

int main() {
	int num, i;
	unsigned long long factorial = 1;
	printf("Inglese un número entero positivo: ");
    scanf("%d", &num);
    
    if (num < 0)
    printf("El número ingresado es erroneo");
    else {
         for (i = 1; i <= num; ++i) {
         	factorial *= i;
         	printf("%d! = %llu\n", i, factorial);
            }
    }        
    return 0;
}

