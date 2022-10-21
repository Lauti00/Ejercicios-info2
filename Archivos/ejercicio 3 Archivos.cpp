#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void open(string );
void read(string, FILE *);

int fprintf(FILE *fp , const char *str);
int fscanf(FILE *fp , const char *str);

int main(int argc, char *argv[]) {
	char dato[30];
	char opcion = ' ';
	FILE *fp;
	do{
		printf("menu\n");
		printf("a.Abrir y escribir un archivo. \n");
		printf("b.Leer archivo. \n");
		scanf(" %c" , &opcion);
		switch(opcion){
		case 'a':
			open(dato);
			printf("Archivo abierto correctamente. \n");
			break;
			
		case 'b':
			read(dato , fp);
			break;
		}
		printf("Desea continuar? (s/n)? \n");
		scanf(" %c" , &opcion);
	} while(opcion == 's');

	return 0;
}

void open(string dato){
	FILE *fp = fopen("./Menu.txt" , "w");
	if(fp==NULL){
		printf("El archivo no exite. \n");
		exit(1);
	}
	for(int i=0 ; i<3 ; i++){
		scanf("%s" , dato);
		fprintf(fp, "%s" , dato);
	}
	fclose(fp);
}
void read(string dato, FILE *fp){
	fp=fopen("./Menu.txt" , "r");
	if(fp==NULL){
		printf("El archivo no existe \n");
		exit(1);
	}
	while(!feof(fp)){
		fscanf(fp, "%s" , &dato);
		printf("%s\n" , dato);
	}
	fclose(fp);
}
