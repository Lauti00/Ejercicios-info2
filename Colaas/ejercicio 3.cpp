/*3. Crear un programa con el siguiente menu de opciones: 

Agregar un nodo a la cola. (se deben agregar 5 valores)
Borrar el primer nodo de la cola.
Imprimir cola.
Tamaño de la cola
Valor del frente de la cola */
#include <iostream>
#include <ctime>

using namespace std;
struct node {
	int data;
	struct node *next;
};

void push(struct node**, struct node** , int);
void pop(struct node** , struct node**);
void imprimir(struct node*);
int tamanio(struct node*);


int main(int argc, char *argv[]) {
	struct node* front=NULL;
	struct node* back=NULL;
	char opcion= ' ';
	int value=0;
	srand(time(NULL));
	
	do{
		cout<<"Ingrese la operacion que desea."<<endl;
		cout<<"a.Agregar nodo."<<endl;
		cout<<"b.Eliminar un nodo."<<endl;
		cout<<"c.Imprimir nodo."<<endl;
		cout<<"d.Tamanio."<<endl;
		cin>>opcion;
		switch(opcion){
		case 'a':
			for(int i=0; i<5; i++){
			value= 1+rand()%10;	
			push(&front , &back , value);
			}
			cout<<"VALORES CARGADOS CORRECTAMENTE"<<endl;
			
			break;
		case 'b':
			pop(&front , &back);
			break;
		case 'c':
			imprimir(front);
			break;
		case 'd':
			tamanio(front);
			break;
		
		}
		cout<<"Desea continuar (S/N)?"<<endl;
		cin>>opcion;
	} while(opcion=='s');
	
	return 0;
}

void push(struct node **front , struct node **back , int d){
	struct node *new_node=NULL;
	
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL){
		cout<<"No hay memoria disponible."<<endl;
		exit(1);
	}
	new_node->data=d;
	new_node->next=NULL;
	
	if(*back==NULL){
		*back=new_node;
		*front=*back;
	}
	else{
		(*back)->next =new_node;
		*back=new_node;
	}
}

void pop(struct node**front , struct node **back){
	struct node * new_node=NULL;
	new_node = *front;
	
	if((*front ==*back)&&(*back==NULL)){
		cout<<"Cola vacia."<<endl;
	}
	new_node=*front;
	*front= (*front)->next;
	if(*back==new_node){
		*back= (*back)->next;
	}
	cout<<"Primer elemento de la cola ELIMINADO"<<endl;
	free(new_node);
}
	
void imprimir(struct node *front){
	struct node *new_node =NULL;
	new_node=front;
	
	while(new_node!=NULL){
		cout<<new_node->data<<endl;
		new_node= new_node->next;
	}
}
	int tamanio(struct node *front){
		int tam=0;
		struct node *new_node = NULL;
		new_node=front;
		while(new_node!=NULL){
			tam++;
			new_node=new_node->next;
		}
		cout<<tam<<endl;
		return 0;
	}
