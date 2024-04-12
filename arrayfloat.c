#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[6]; 
    numbers[0]= 9.2;
    numbers[1]= 10.2;
    numbers[2]= 11.2;
    numbers[3]= 12.2;
    numbers[4]= 13.2;
    numbers[5]= 15.2;
    printf("Valor #1: %.2f \n", numbers[0]);
    printf("Valor #2: %.2f \n", numbers[1]);
    printf("Valor #3: %.2f \n", numbers[2]);
    printf("Valor #4: %.2f \n", numbers[3]);
    printf("Valor #5: %.2f \n", numbers[4]);
    printf("Valor #6: %.2f \n", numbers[5]);

    printf("suma: %.2f \n", numbers[0] + numbers[1] + numbers[2]+ numbers[3] + numbers[4]);


    return 0;
}

