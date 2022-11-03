/*1. Crear un programa que pida los siguientes datos de una canción: 
Artista, Titulo, Duración (en segundos),Tamaño del archivo (en KB). 
Crear una estructura que almacene datos de la canción y luego los muestre por pantalla.*/

#include <iostream>
using namespace std;

struct cancion{
char nombre[50];
char titulo[50];
float duracion;
float tamanio;
};

int main(){
    struct cancion c;
    cout<<"Ingrese el nombre de la cancion:"<<endl;
    cin>>c.nombre;

    cout<<"Ingrese el titulo de la cancion:"<<endl;
    cin>>c.titulo;

    cout<<"Ingrese la duracion de la cancion:"<<endl;
    cin>>c.duracion;

    cout<<"Ingrese el tamanio de la cancion:"<<endl;
    cin>>c.tamanio;


    cout<<"Los datos ingresados son:"<<endl;
    cout<<c.titulo<<"\t"<<c.nombre<<"\t"<<c.duracion<<"\t"<<c.tamanio<<endl;   
    return 0;
}