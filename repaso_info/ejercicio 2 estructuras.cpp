/*2. Ampliar el programa del ejercicio anterior, para que almacene datos de hasta 3 canciones en un vector de estructura. 
Luego crear un menú que permita las opciones (cada una es una función): 
a. agregar una nueva canción
b. mostrar todas las canciones
c. buscar una canción por titulo*/
#include <string>
#include <iostream>
using namespace std;
struct cancion{
    char nombre[50];
    char titulo[50];
    float tamanio;
    float duracion;
};

int main(){
    struct cancion c[3];
    char opcion=' ';
    do{
        cout<<"Ha ingresado al menu"<<endl;
        cout<<"a.Agregar una cancion"<<endl;
        cout<<"b.Mostrar todas las canciones"<<endl;
        cout<<"c.Buscar cancion por titulo"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 'a':
            for(int i=0; i<3; i++){
                cout<<"Ingrese el nombre de la cancion"<<endl;
                cin>>c[i].nombre;
                cout<<"Ingrese el titulo de la cancion:"<<endl;
                cin>>c[i].titulo;
                cout<<"Ingrese el tamanio de la cancion"<<endl;
                cin>>c[i].tamanio;
                cout<<"Ingrese la duracion de la cancion"<<endl;
                cin>>c[i].duracion;
            }
            break;
        case 'b':
            for(int i=0; i<3; i++){
                cout<<"Los datos ingresados de la cancion:"<<i+1<<endl;
                cout<<c[i].nombre<<"\t"<<c[i].titulo<<"\t"<<c[i].tamanio<<"\t"<<c[i].duracion<<endl;
            }
            break;

        case 'c':
            char buscar_titulo[50];
            cout<<"Ingrese la cancion a buscar:"<<endl;
            cin>>buscar_titulo;

            for(int i=0; i<3; i++){
                if(c[i].titulo==buscar_titulo){
                    cout<<"El titulo encontrado es"<<c[i].titulo<<endl;
                }
              
            }
            break;
        default:
            break;
        }
        cout<<"Desea continuar (s/n)?"<<endl;
        cin>>opcion;

    }while(opcion=='s' || opcion=='S');

    return 0;
}