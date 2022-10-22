/* 1. Crear un programa con el siguiente menu de opciones: 
Agregar un nodo a la pila. (se deben agregar 5 valores)
Borrar el último nodo de la pila.
Imprimir pila.
Suma de los valores de la pila.*/

#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};
void push(struct node ** , int);
void pop(struct node**);
void print(struct node**);
void sum(struct node**);


int main(int argc, char *argv[]) {
	struct node *stack=NULL;
	struct node *temp=NULL;
	
	char opcion = ' ';
	int value;
	do{
		printf("Menu \n");
		printf("a.Agregar un nodo \n");
		printf("b.Borrar un nodo \n");
		printf("c.Imprimir la pila \n");
		printf("d.Mostrar la suma de valores \n");
		scanf(" %c" , &opcion);
		
		switch(opcion){
		case 'a':
			
				for(int i=0 ; i<5 ; i++){
					printf("Ingrese el numero que desea agregar: \n");
					scanf(" %d" , &value);
					push(&stack , value);
				}
			break;
		
		case 'b':
			pop(&stack);
			printf("Eliminando un nodo.. \n");
			break;
		
		case 'c':
			print(&stack);
			break;
		
		case 'd':
			sum(&stack);
		}
		
		
		printf("Desea continuar (s/n)? \n");
		scanf(" %c" , &opcion);
	} while(opcion == 's');
	
	
	return 0;
}

void push(struct node **stack , int d){
	struct node* temp =NULL;
	temp= (struct node*)malloc(sizeof(struct node));
	temp = (struct node*) temp;
	
	if(temp==NULL){
		printf("No hay memoria disponible \n");
		exit(1);
	}
	
	temp->data=d;
	temp->next=*(stack);
	*(stack)=temp;
	
}

void pop(struct node**stack){
	struct node *temp=NULL;
	temp= *(stack);
	*(stack)= (*stack)->next;
	free(temp);
	
}
void print(struct node **stack){
	struct node *temp =NULL;
	temp=*(stack);
	printf("Imprimiendo la pila... \n");
	while(temp!=NULL){
		printf("%d \n" , temp->data);
		temp=temp->next;
	}
	
}
void sum(struct node **stack){
	int suma=0;
	struct node* temp=NULL;
	temp = *(stack);
	while(temp!=NULL){
		suma+= temp->data;
		temp= temp->next;
	}
	printf("%d \n" , suma);
	
}
