#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10]; 
    float suma; 

    numbers[0]= 9.2;
    numbers[1]= 10.2;
    numbers[2]= 11.2;
    numbers[3]= 12.2;
    numbers[4]= 13.2;
    numbers[5]= 15.2;
    numbers[6]= 16.90;
    numbers[7]= 17.11;
    numbers[8]= 29.00;
    numbers[9]= 10.21;


    printf("Valor #1: %.2f \n", numbers[0]);
    printf("Valor #2: %.2f \n", numbers[1]);
    printf("Valor #3: %.2f \n", numbers[2]);
    printf("Valor #4: %.2f \n", numbers[3]);
    printf("Valor #5: %.2f \n", numbers[4]);
    printf("Valor #6: %.2f \n", numbers[5]);
    printf("Valor #7: %.2f \n", numbers[6]);
    printf("Valor #8: %.2f \n", numbers[7]);
    printf("Valor #9: %.2f \n", numbers[8]);
    printf("Valor #10: %.2f \n", numbers[9]);


    suma = numbers[0] + numbers[1] + numbers[2]+ numbers[3] + numbers[4] +numbers[5] + numbers[6] + numbers[7]+ numbers[8] + numbers[9];
    printf("La suma de todos los numeros: %.2f", suma); 

    
    return 0;
}

  