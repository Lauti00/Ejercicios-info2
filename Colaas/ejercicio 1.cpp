#include <iostream>
using namespace std;
struct node {
	int data;
	struct node *link;
};

int main(int argc, char *argv[]) {
	
	struct node *front =NULL;
	struct node *back=NULL;
	struct node *temp =NULL;
	int value;
	
	cout<<"Ingrese un elemento"<<endl;
	cin>>value;
	do{
		//CREACION DE UN NUEVO NODO
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
	cout<<"No hay memoria disponible"<<endl;	
	}
	temp->data = value;
	temp->link =NULL;
	
	if(back==NULL){ //insercion del primer nodo
		back=temp;
		front=back;
	}
	else{ //INSERSION DEL RESTO DE LOS NODOS
		back->link = temp;
		back=temp;
	}
	cout<<"Digite 0 para salir"<<endl;
	cin>>value;
	} while(value!=0);
	
	//IMPRESION COMPLETA
	temp=front;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp= temp->link;
	}
	do{
		if((front==back) && (back==NULL)){
			cout<<"Cola vacia"<<endl;
			exit(0);
		}
		temp=front;
		front = front ->link;
		if(front==NULL){
			back =NULL;
			free(temp);
			cout<<"Ingrese 0 para salir"<<endl;
			cin>>value;
		}
	} while(value!=0);
	
	//IMPRESION DE LA FIFO
	
	temp=front;
	while(temp!=NULL){
		cout<<"Eliminando el primer nodo los valores son:"<<endl;
		cout<<temp->data<<endl;
		temp=temp->link;
	}
	//SUMA 
	int suma=0;
	temp=front;
	while(temp!=NULL){
		suma+=temp->data;
		temp=temp->link;
	}
	cout<<"La suma es:"<<suma<<endl;
		return 0;
}

