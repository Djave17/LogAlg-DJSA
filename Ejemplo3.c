#include <stdio.h> 

int main(int argc, char const *argv[])
{
    char Nombre[60]; 
    int edad; 
    printf ("Bienvenido \n Nombre: "); 
    scanf("%s", &Nombre);
    printf("\n Edad: "); 
    scanf("%i", &edad); 

    if (edad >= 18){
        printf (" %s eres mayor de edad", Nombre);        
    }

    else {
        printf (" %s NO eres mayor de edad", Nombre);
    }
    
    
    return 0;
}
