/* 2. Crear un programa en la cual cargue una cola de 5 numeros aleatoriamente (entre 1 y 10), luego los muestre y muestre los valores pares.
*/

#include <ctime>
#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
void push(struct node** , struct node ** , int);
void mostrar(struct node*);
void mostrarpar(struct node*);

int main(int argc, char *argv[]) {
	struct node *back=NULL;
	struct node *front=NULL;
	
	int value=0;
	char opcion=' ';
	srand(time(NULL));
	do{
		cout<<"Seleccione la opcion que desee:"<<endl;
		
		cout<<"a.Agregar valores."<<endl;
		cout<<"b.Mostrar valores."<<endl;
		cout<<"c.Mostrar valores pares."<<endl;
		cin>>opcion;
		
		switch(opcion){
		case 'a':
			for(int i=0; i<5 ; i++){
				value= 1+ rand() %10;
				push(&front , &back , value);
			}
			cout<<"VALORES CARGADOS CORRECTAMENTE"<<endl;
			break;
		case 'b':
			mostrar(front);
			break;
		
	case 'c': 
			mostrarpar(front);
			break;
		}	
		
		cout<<"Desea continuar (S/N)?"<<endl;
		cin>>opcion;
		
	} while(opcion=='s');
	return 0;
}
void push(struct node **front , struct node**back , int d){
	struct node*new_node =NULL;
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
		(*back)->next= new_node;
		*back=new_node;
	}	
}

void mostrar(struct node *front){
	struct node* new_node=NULL;
	new_node = front;
	
	cout<<"IMPRESION COLA"<<endl;
	while(new_node!=NULL){
		cout<<new_node->data<<endl;
		new_node= new_node->next;
	}
}

	void mostrarpar(struct node* front)
	{
		struct node *new_node = NULL;
		new_node=front;
		cout<<"IMPRESION NUMEROS PARES"<<endl;
		while(new_node!=NULL){
			if((new_node->data)%2==0)
			{
				cout<<new_node->data<<endl;
			
			}
			new_node=new_node->next;
		}
		
	}	
	
