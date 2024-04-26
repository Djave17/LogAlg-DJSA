#include <stdio.h> 

void sumanota(); 
void validar(int  nf);


void sumanota(){
    int Acumulado, examen;
    int notafinal;
    printf("Escriba su acumulado: ", Acumulado); 
    scanf ("%d", &Acumulado); 
    printf("\n Escriba la nota de su examen: ", examen); 
    scanf ("%d", &examen);
    notafinal = Acumulado + examen;
    printf ("\n La nota final es: %d \n", notafinal); 
    printf("\n\n"); 
    validar(notafinal);
}

void validar(int nf){
    if (nf>69)
    {
        printf("\n Felicidades has aprobado!!!!!"); 
    }
    else{
        printf("No has aprobado"); 
    }
    
}
    
int main(int argc, char const *argv[])
{   
    int acumulado, examen; 
    sumanota();
    return 0;
}
