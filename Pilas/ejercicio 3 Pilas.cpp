/* 3. Crear un programa con el siguiente menu de opciones: 
Agregar un nodo a la pila. (se deben agregar 5 valores)
Borrar el último nodo de la pila.
Imprimir pila.
Tamaño de la pila
Mostrar el último valor de la pila */


#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};
void push(struct node** , int);
void pop(struct node**);
void print(struct node**);
void size(struct node**);
void show(struct node**);


int main(int argc, char *argv[]) {
	struct node *stack=NULL;
	struct node *temp=NULL;
	char opcion = ' ';
	int value =0;
	do{
		printf("Menu \n");
		printf("a.Cargar nodo \n");
		printf("b.Eliminar un nodo \n");
		printf("c.Imprimir un nodo \n");
		printf("d. Tamanio de la pila \n");
		printf("e.Mostrar ultimo valor \n");
		scanf(" %c" , &opcion);
		switch(opcion){
		case 'a':
			for(int i=0 ; i<5; i++){
			printf("Ingrese el valor que desea cargar: \n");
			scanf("%d" , &value);
			
			push(&stack , value);
			}
			printf("Nodos cargados correctamente \n");
			break;
			
		case 'b':
			pop(&stack);
			printf("Nodo eliminado correctamente \n");
			break;
			
		case 'c':
			printf("Imprimiendo .... \n");
			print(&stack);
			break;
			
		case 'd':
			printf("El tamanio de la pila es.... \n");
			size(&stack);
			break;
		case 'e':
			printf("El ultimo valor de la pila es: \n");
			show(&stack);
			break;
		}
		
		
		printf("Desea continuar (s/n)? \n ");
		scanf(" %c" , &opcion);
	} while(opcion== 's');
	
	return 0;
}

void push(struct node **stack , int d){
	struct node *temp =NULL;
	temp=(struct node *) malloc(sizeof(struct node));
	
	if(temp==NULL){
		printf("No hay memoria disponible. \n");
		exit(1);
	}
	
	temp ->data=d;
	temp->next= *(stack);
	*(stack)=temp;
}

void pop(struct node** stack){
	struct node *temp=NULL;
	temp=*(stack);
	
	*(stack)=(*stack)->next;
	free(temp);
}

void print(struct node **stack){
	struct node *temp=NULL;
	temp=*(stack);
	
	while(temp!=NULL){
		printf("%d \n" , temp->data);
		temp= temp->next;
	}
}

void size(struct node** stack){
	struct node *temp=NULL;
	int tam=0;
	temp = *(stack);
	
	while(temp!=NULL){
		tam+=1;
	temp = temp->next;
}
	printf("%d \n" , tam);
}

void show (struct node** stack){
	struct node *temp=NULL;
	temp=*(stack);
	while(temp!=NULL){
		if(temp->next ==NULL){
			printf("%d \n",  temp->data);
		}
		temp= temp->next;
	}
	
	
}
