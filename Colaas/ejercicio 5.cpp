/* 5. Desarrolle un programa que cargue una cola de numeros enteros aleatorios.  
Luego realice un menu de opciones:
Agregar un nodo a la cola. (cuando agrega un valor, el mismo no tiene que estar repetido en la cola)
Borrar el primer nodo de la cola.
Imprimir cola.*/

#include <ctime>
#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};
void push(struct node** , struct node** , int);
void pop(struct node**, struct node**);
void print(struct node*);


int main(int argc, char *argv[]) {
int value=0;
srand(time(NULL));
char opcion = ' ';

struct node *front =NULL;
struct node *back=NULL;

do{
	cout<<"Ha ingresado al menu , seleccione la opcion que desea."<<endl;
	cout<<"a.Agregar un nodo"<<endl;
	cout<<"b.Borrar el primer nodo."<<endl;
	cout<<"c.Imprimir cola."<<endl;
	cin>>opcion;
	
	switch(opcion){
	case 'a':
		for(int i=0; i<5 ; i++){
			value= 1+ rand()%100;
			push(&front , &back , value);
		}
		cout<<"COLA CARGADA DE FORMA EXITOSA"<<endl;
		break;
	case 'b':
		pop(&front , &back);
		break;
		
	case 'c':
		print(front);
		break;
	}
	cout<<"Desea continuar (S/N)?"<<endl;
	cin>>opcion;
	
}while(opcion == 's');
	return 0;
}

void push (struct node **front , struct node** back , int d){
struct node *new_node =NULL;

new_node=(struct node*)malloc(sizeof(struct node));

if(new_node==NULL){
	cout<<"No hay memoria disponible."<<endl;
	exit(1);
}

new_node->data=d;
new_node->next=NULL;

if(*back ==NULL){
	*back=new_node;
	*front=*back;
}
else{
	(*back)->next =new_node;
	*back=new_node;
}
}
void pop(struct node **front , struct node **back){
	struct node* new_node =NULL;
	new_node=*front;
	
	if((*front==*back)&&(*back==NULL)){
		cout<<"Cola vacia"<<endl;
		exit(1);
	}
	new_node=*front;
	*front =(*front)->next;
	
	if(*back==new_node){
		*back= (*back)->next;
	}
	cout<<"Eliminando el primer valor de la cola"<<endl;
	free(new_node);
		
}

void print(struct node *front){
	struct node *new_node=NULL;
	new_node= front;
	while(new_node!=NULL){
		cout<<new_node->data<<endl;
		new_node=new_node->next;
	}
}
