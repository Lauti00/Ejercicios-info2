/*3. Crear un programa que gestione el listado de los empleados de la empresa. 
Para ello crear una estructura Empleado,
en la cual contenga los siguientes datos: legajo, puesto de trabajo, sueldo y anios_antiguedad. 
Luego, crear un vector de estructuras del tipo empleado de tamaño 3. 
Crear un menú que permita las opciones: 
a. agregar un empleado
b. mostrar todos los empleados
c. buscar un empleado por legajo para ver si existe o no.
d. actualizarSueldo*/

#include <iostream>
using namespace std;
struct empleado{
int legajo;
char puesto[50];
int sueldo;
int anios_antiguedad;
};

int main(){
    empleado e[3];
    char opcion=' ';
    

do{
    cout<<"Ha ingresado al menu"<<endl;
    cout<<"a.Agregar un empleado"<<endl;
    cout<<"b.Mostrar todos los empleados"<<endl;
    cout<<"c.Buscar empleado por legajo"<<endl;
    cout<<"d.Actualizar sueldo"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 'a':
        int cantidad;
        cout<<"Ingrese la cantidad de empleados que desea agregar"<<endl;
        cin>>cantidad;
        for(int i=0; i<cantidad; i++){
            cout<<"Ingrese el legajo"<<endl;
            cin>>e[i].legajo;

            cout<<"Ingrese el puesto"<<endl;
            cin>>e[i].puesto;

            cout<<"Ingrese el sueldo"<<endl;
            cin>>e[i].sueldo;

            cout<<"Ingrese los anios de antiguedad"<<endl;
            cin>>e[i].anios_antiguedad;
        }
        break;
    
    case 'b':
        for(int i=0; i<cantidad; i++){
            cout<<"Los datos ingresados del empleado"<<i+1<<endl;
            cout<<e[i].legajo<<"\t"<<e[i].puesto<<"\t"<<e[i].sueldo<<"\t"<<e[i].anios_antiguedad<<endl;
    }
        break;
    
    case 'c':
        int buscar;
        cout<<"Ingrese el numero de legajo que esta buscando:"<<endl;
        cin>>buscar;
        for(int i=0; i<cantidad; i++){
            if(e[i].legajo==buscar){
                cout<<"El empleado encontrado tiene los siguientes valores"<<endl;
                cout<<e[i].legajo<<"\t"<<e[i].puesto<<"\t"<<e[i].sueldo<<"\t"<<e[i].anios_antiguedad<<endl;
            }
        }
        break;

    case 'd':
        int legajo;
        cout<<"Ingrese el legajo para actualizar el sueldo"<<endl;
        cin>>legajo;
            for(int i=0; i<cantidad; i++){
                if(e[i].legajo==legajo){
                    int sueldo;
                    cout<<"Ingrese el nuevo sueldo"<<endl;
                    cin>>sueldo;
                    e[i].sueldo=sueldo;
                    cout<<"El nuevo valor del sueldo es:"<<e[i].sueldo<<endl;
                }
            }
        break;

    default:
        break;
    }
    cout<<"Desea continuar(s/n)?"<<endl;
    cin>>opcion;
}while(opcion=='s' || opcion=='S');
return 0;
}