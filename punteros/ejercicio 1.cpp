/* 1. Crear un programa en la cual se solicite al usuario el ingreso de 5 valores numericos y luego muestre la lista. 
*/
#include <iostream>
using namespace std;
struct node {
	int data;
	struct node *next;
};


int main(int argc, char *argv[]) {
	struct node *head = NULL; //Creacion del puntero al comienzo de la lista
	struct node* temp= NULL;
	struct node *new_node=NULL;
	
	int dato= 0;
	int i=0;
	do{
	cout<<"Ingrese un dato:"<<endl;
	cin>>dato;
	
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node =(struct node *) new_node;
	
	if(new_node==NULL){
		cout<<"No hay memoria disponible"<<endl;
	}
	
	//COMO VA AL FINAL DE LA LISTA ESTE NODO APUNTA A NULL
	new_node->data=dato;
	new_node->next =NULL;
	
	if(head ==NULL){ //SI LA LISTA ESTA VACIA , EL NODO INGRESADO ES EL PRIMERO DE LA LISTA
		head = new_node;
	}
	else{
		//BUSCO CUAL ES EL ULTIMO
		temp=head;
		while(temp -> next !=NULL){
			temp = temp -> next;
		}
		temp -> next = new_node; //El que era el ultimo apunte al nuevo nodo
	}
	i++;
	
	}while(i!=5);
	if(head ==NULL){
		cout<<"Lista vacia."<<endl;
		exit(1);
	}
	else{
		node*temp=head;
		cout<<"Lista"<<endl;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp ->next;
		}
	}
	return 0;
}

