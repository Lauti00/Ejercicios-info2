/*2. Crear un programa en la cual cargue una pila de 5 numeros aleatoriamente (entre 1 y 10), luego los muestre y muestre los valores pares.
*/

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
void push(struct node ** , int d);
void print(struct node**);
void show (struct node**);

int main(int argc, char *argv[]) {
	struct node *stack =NULL;
	struct node *temp=NULL;
	char opcion = ' ';
	int value=0;
	do{
		printf("Menu \n");
		printf("a.Cargar nodos \n");
		printf("b.Mostar nodos \n");
		printf("c.Mostrar valores pares \n");
		scanf(" %c" , &opcion);
		switch(opcion){
		case 'a':
			for(int i=0; i<5; i++){
				value = 1+ rand()%10;
				push(&stack , value);
			}
			printf("Valores cargados correctamente \n");
			break;
			
		case 'b':
			printf("Imprimiendo... \n");
			print(&stack);
			break;
			
		case 'c':
			printf("Los valores pares son... \n");
			show(&stack);
			break;
		}
		printf("Desea continuar (s/n)? \n" );
		scanf(" %c" , &opcion);
		
	} while(opcion== 's');
	
	
	return 0;
}
void push(struct node **stack , int d){
	struct node *temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	
	if(temp==NULL){
		printf("No hay memoria disponible. \n");
		exit(1);
	}
	temp->data=d;
	temp->next= *(stack);
	*(stack)=temp;
}

void print(struct node **stack){
	struct node*temp=NULL;
	temp = *(stack);
	while(temp!=NULL){
		printf("%d \n", temp->data);
		temp= temp->next;
	}
}

void show(struct node **stack){
	struct node *temp=NULL;
	temp = *(stack);
	
	while(temp!=NULL){
	if((temp->data)%2 ==0){
		printf("%d \n" , temp->data);
	}
	temp= temp->next;
}
}
