
#include <stdio.h>


float calcularSalario(float horasTrabajadas, float valorHora) {
    return horasTrabajadas * valorHora;
}

int main() {
    float horasTrabajadas, valorHora, salario;


    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valorHora);

   
    salario = calcularSalario(horasTrabajadas, valorHora);

    // Mostrar el salario
    printf("El salario es: %.2f\n", salario);

    return 0;
}