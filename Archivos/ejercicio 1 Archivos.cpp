/* 1. Escriba un programa 
que cree un archivo binario llamado "datos_personales.txt” que pregunte los siguientes datos personales:
 nombre, apellido, dni, edad, nacionalidad. Luego abrir el archivo y mostrarlo.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

char *fgets(char string , int tam , FILE *fp);
int main(int argc, char *argv[]) {
	char nombre[30];
	char apellido [30];
	char dni[30];
	char edad[30];
	char nacionalidad[30];
	char cadena[50];
	FILE *fp;
	
	fp= fopen("datos_personales.txt" , "w");
	if(fp==NULL){
		cout<<"Imposible abrir el archivo."<<endl;
		exit(1);
	}
	
	for(int i=0 ; i<1 ; i++){
		cout<<"Ingrese el nombre:"<<endl;
		cin>>nombre;
		fputs(nombre , fp);
		cout<<"Ingrese el apellido."<<endl;
		cin>>apellido;
		fputs(apellido, fp);
		cout<<"Ingrese el dni:"<<endl;
		cin>>dni;
		fputs(dni, fp);
		cout<<"Ingrese la edad."<<endl;
		cin>>edad;
		fputs(edad, fp);
		cout<<"Ingrese la nacionalidad."<<endl;
		cin>>nacionalidad;
		fputs(nacionalidad, fp);
	}
	fclose(fp);
	
	fopen("./datos_personales.txt" , "r");
	if(fp==NULL){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	fclose(fp);
	
	for(int i=0; i<1 ; i++){
		cout<<"Nombre:"<<nombre<<endl;
		cout<<"Apellido:"<<apellido<<endl;
		cout<<"Dni:"<<dni<<endl;
		cout<<"Edad:"<<edad<<endl;
		cout<<"Nacionalidad"<<edad<<endl;
		
	}
	fgets(cadena, (50+1), fp);
	
	return 0;
}

