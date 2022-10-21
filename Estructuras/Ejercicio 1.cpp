/* 1. Crear un programa que pida los siguientes datos de una canción: 
Artista, Titulo, Duración (en segundos),Tamaño del archivo (en KB). Crear una estructura que almacene datos de la canción y luego los muestre por pantalla.*/
#include <iostream>

using namespace std;

struct cancion {
	char artista[20];
	char titulo[20];
	int duracion;
	int tamanio;
};

int main(int argc, char *argv[]) {
	struct cancion c ={ "Carlos" , "Hola" , 10 , 20
	};
	
	printf("Los valores ingresados son: \n");
	printf("Artista: %s \n" , c.artista);
	printf("Titulo: %s \n" , c.titulo);
	printf("Duracion: %d \n" , c.duracion);
	printf("Tamanio: %d \n" , c.tamanio);
	
	return 0;
}

