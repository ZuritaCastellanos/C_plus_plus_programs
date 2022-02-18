
//  13ejercicios
//  Created by Carlos Fabian Castellanos Zurita on 16/02/22.
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    
    char opcion;
    
    cout<<"1 calcular el area de un cuadrado"<<endl;
    cout<<"2 Nombre completo"<<endl;
    cout<<"3 Multilpicacion"<<endl;
    cout<<"4 Division"<<endl;
    cout<<"5 Elevar num"<<endl;
    cout<<"Ingrese numero de opcion: ";
    cin>>opcion;
    
    switch (opcion) {
            
        case '1': {
            int h,w,area;
            cout<<"Ingrese la altura: \n";
            cin>>h;
            cout<<"Ingrese la base: \n";
            cin>>w;
            area = h * w;
            cout<<"El area es: \n"<<area;
            break;
        }
                        
        case '2': {
            string primerNombre, segundoNombre, primerApellido, segundoApellido;
            string informacionCompleta;
            int edad = 0;
            cout<<"Ingresa tu primer nombre: \n";
            cin>>primerNombre;
            cout<<"Ingresa tu segundo nombre: \n";
            cin>>segundoNombre;
            cout<<"Ingresa tu primer apellido: \n";
            cin>>primerApellido;
            cout<<"Ingresa tu segundo apellido: \n";
            cin>>segundoApellido;
            cout<<"Ingresa tu edad: \n";
            cin>>edad;
            cout<<"El resultado es: \n"<<primerNombre+ " " +segundoNombre + " " + primerApellido + " " + segundoApellido + " con edad: " + std::to_string(edad);;
            cout<<"\n";
            break;
        }
            
        case '3': {
            int a,z,r;
            cout<<"Ingrese el primer numero: \n";
            cin>>a;
            cout<<"Ingrese el segundo numero: \n";
            cin>>z;
            r = a + z;
            cout<<"El resultado es: \n"<<r;
            break;
        }
        

    }
}
