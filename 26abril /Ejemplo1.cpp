/*REALICE UN PROGRAMA QUE PERMITA: 
1. ingresar x cantidad de numero 
2. Calcular la suma de dichos numeros
3. Mostrar todos los numeros
4. salir*/

/*Uso de switch - recursividad*/

#include <iostream> 

using namespace std;

/*Constantes*/
#define MAX 1000

/*Variables global*/
int nums[MAX]; 
int pos = 0; // posicion del elemento del arreglo


void agregarnum(int num){ 
    if (pos<MAX)
    {
        nums[pos] = num; 
        pos++; 
    } 
    else
    {
        cout<<"No se puede agregar el numero"; 
    
    }
    
    
} 

int sumar (int suma, int lastElem){ 
    if (lastElem == -1)
    {
        return suma; 
    }
    suma = suma + nums[lastElem];
    sumar(suma, lastElem - 1); 
}

void menu(){ 
    int suma=0; 
    int num; 
    int op;
    cout << pos << endl;
    cout<< "1. Agregar elemento "<< endl; 
    cout<< "2. Sumar "<< endl; 
    cout<< "3. Mostrar "<< endl; 
    cout<< "4. Salir "<< endl; 

    cin>> op; 
    switch (op)
    {
    case 1:
        cout<<"Digite un numero"<<endl; 
        cin>>num; 
        agregarnum(num);
        break;
        
    case 2: 
    int sum=0;
    for(int i=0; i<pos; i++){
        cout << nums[i] << endl;
        sum += nums[i];
    }
    cout << "David la suma es " << sum << endl; 
        cout<<"La suma es: "<<sumar(suma, pos - 1) << endl; 
        break; 
    case 3: 


        break; 
    case 4: 
        break; 
    
    default:
        cout<<"No existe la opcion \n";
        break;
    }
    menu(); 
    
}
int main(int argc, char const *argv[])
{
    menu(); 
   
    return 0;
}
