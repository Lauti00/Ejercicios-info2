/* 1. Escriba un programa que cree un archivo binario llamado "datos_personales.txt” 
que pregunte los siguientes datos personales: nombre, apellido, dni, edad, nacionalidad. Luego abrir el archivo y mostrarlo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	FILE *fp;
	char cadena[50]="Cadena de un array";
	fp=fopen("./datos_personales.txt" ,"w");
	if(fp==NULL){
		cout<<"No se puede abrir el archivo."<<endl;
		exit(1);
	}
	
	fputs("Lautaro" , fp);
	fputs("Niccolini" , fp);
	fputs("1234567" , fp);
	fputs("22" , fp);
	fputs("Argentino" , fp);
	fclose(fp);
	
	fp= fopen("./datos_personales.txt" , "r");
	if(fp==NULL){
		cout<<"Imposible abrir el archivo."<<endl;
		exit(1);
	}
	fgets(cadena , (50+1),fp);
	cout<<"Cadena recuperada"<<cadena <<endl;
	fclose(fp);
	
	
	return 0;
}

