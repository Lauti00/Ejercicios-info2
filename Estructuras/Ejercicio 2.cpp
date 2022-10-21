/* 2. Ampliar el programa del ejercicio anterior, para que almacene datos de hasta 3 canciones en un vector de estructura. 
Luego crear un menú que permita las opciones (cada una es una función): 

a. agregar una nueva canción

b. mostrar todas las canciones

c. buscar una canción por titulo*/
#include <iostream>

using namespace std;
void agregar(struct cancion c[3], int);
void mostrar(struct cancion c[3], int);

struct cancion {
	char artista[30];
	char titulo[30];
	int duracion;
	int tamanio;
};

int main(int argc, char *argv[]) {
	struct cancion c[3];
	int opcion;
	int cantidad =0;
	
	do{
		printf("----MENU---- \n");
		printf("1.Agregar nueva cancion \n");
		printf("2.Mostrar todas las canciones \n");
		printf("3.Buscar una cancion por el titulo \n");
		printf("4. Salir \n");
		scanf("%d", &opcion);
		
		switch(opcion){
		
		case 1:
			agregar(c , cantidad);
			break;
			
		case 2:
			mostrar (c,cantidad);
			break;
			
		case 3:
			break;
		
		case 4:
			exit(1);
		}
		
	} while(opcion!=0);
	
	return 0;
}
void agregar (struct cancion c[3], int cantidad){
	printf("Ingrese la cantidad de canciones que desea agregar: \n");
	scanf("%d" , &cantidad);
	
	for(int i=0 ; i<cantidad ; i++){
		printf("Ingrese los valores que desee agregar: \n");
		printf("Artista: \n");
		scanf("%s" , &c[i].artista , '.');
		printf("Titulo: \n");
		scanf("%s" , &c[i].titulo , '.');
		printf("Duracion \n");
		scanf("%d" ,&c[i].duracion);
		printf("Tamanio: \n");
		scanf("%d" ,&c[i].tamanio);
	}
}

void mostrar (struct cancion c[3], int cantidad){
	for(int i=0; i<cantidad ; i++){
		printf("Los valores ingresados son: \n");
		printf("Artista: %s \n" , c[i].artista);
		printf("Titulo: %s \n" , c[i].titulo);
		printf("Duracion: %d \n" , c[i].duracion);
		printf("Tamanio: %d \n" , c[i].tamanio);
	}
	
}
