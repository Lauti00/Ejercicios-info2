/*4. Crear un programa con el siguiente menu de opciones: 
Agregar un nodo a la cola.
Borrar el primer nodo de la cola.
Imprimir cola.
Cantidad de nodos en la cola.
Cantidades de letras mayusculas y minusculas en la cola. */
#include <iostream>

struct node{
	char data;
	struct node *next;
};

void push(struct node** , struct node** , char );
void pop(struct node** , struct node**);
void print(struct node*);
void tamanio(struct node*);
void cantidad(struct node*);

using namespace std;

int main(int argc, char *argv[]) {
	struct node * back=NULL;
	struct node *front=NULL;
	char value=' ';
	char opcion = ' ';
	
	do{
		cout<<"Ha ingresado al menu, elija la opcion que desea:"<<endl;
		cout<<"a. Agregar un nodo"<<endl;
		cout<<"b. Borrar el primer nodo"<<endl;
		cout<<"c. Imprimir la cola"<<endl;
		cout<<"d. Cantidad de nodos"<<endl;
		cout<<"e.Cantidad de letrar mayusculas y minusculas"<<endl;
		cin>>opcion;
		
		switch(opcion){
		case 'a':
			for(int i=0; i<5; i++){
			cout<<"Ingrese el dato que desea agregar."<<endl;
			cin>>value;
			push(&front , &back , value);
			}
		cout<<"VALORES AGREGADOS CORRECTAMENTE"<<endl;
			break;
			
		case 'b':
			pop(&front , &back);
			break;
			
		case 'c':
			print(front);
			break;
			
		case 'd':
			cantidad(front);
			break;
			
		case 'e':
			break;
			
		}
		cout<<"Desea continuar (S/N)?"<<endl;
		cin>>opcion;
		
	} while(opcion=='s');
	
	return 0;
}

void push(struct node **front , struct node **back , char d){
	struct node *new_node =NULL;
	
	new_node = (struct node*)malloc(sizeof(struct node));
	
	if(new_node ==NULL){
		cout<<"No hay memoria disponible."<<endl;
		exit(1);
	}
	
	new_node->data=d;
	new_node->next=NULL;
	
	if((*back)==NULL){
		*back=new_node;
		*front=*back;
	}
	else{
		(*back)->next=new_node;
		*back=new_node;
	}	
}


void pop(struct node ** front , struct node** back){
	struct node *new_node=NULL;
	
	if((*front==*back)&&(*back==NULL)){
		cout<<"Cola vacia."<<endl;
		exit(1);
	}
	new_node = *front;
	*front= (*front)->next;
	
	if(*back == new_node){
		*back = (*back)->next;
	}
	free(new_node);
}
void print(struct node *front){
	struct node* new_node=NULL;
	new_node = front;
	
	cout<<"Impresion de la cola"<<endl;
	while(new_node !=NULL){
		cout<<new_node->data<<endl;
		new_node= new_node->next;
	}
}

void cantidad(struct node *front){
	int cant=0;
	struct node *new_node =NULL;
	new_node = front;
	while(new_node!=NULL){
		cant++;
		new_node= new_node->next;
	}
	cout<<cant<<endl;
}
