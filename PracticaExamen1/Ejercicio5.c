#include <stdio.h> 
#include <math.h> 

float calcularSalario(float horasTrabajadas, float valorHora); 

int main(int argc, char const *argv[])
{
    float horas, valor; 
    float salariototal; 

    printf("-------Bienvenido-------\n"); 

    printf("Digite las horas laborales: ");
    scanf("%f", &horas) ; 

    printf("Digite el valor de las horas: ");
    scanf("%f", &valor ); 
    
    salariototal = calcularSalario(horas, valor); 

    printf("\n\nEl total de su salario es: %.2f",salariototal); 
    
    return 0;
}

float calcularSalario(float horasTrabajadas, float valorHora) {
    return horasTrabajadas * valorHora;
}