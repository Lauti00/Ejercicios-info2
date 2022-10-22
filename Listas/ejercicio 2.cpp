/*2. Crear un programa en la cual se solicite al usuario el ingreso de 5 valores numericos. 
Luego muestre la lista y calcule el promedio de ellos. */

#include <iostream>
using namespace std;
struct node {
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {

	struct node *head=NULL;
	struct node *temp =NULL;
	struct node *new_node =NULL;
	
	int dato=0;
	int i=0;
	do{
	cout<<"Ingrese un dato:"<<endl;
	cin>>dato;
		

	new_node = (struct node *)malloc(sizeof(struct node));
	new_node = (struct node*) new_node;
	
	if(new_node ==NULL){
		cout<<"No hay espacio disponible"<<endl;
		exit(1);
	}
	
	new_node-> data=dato;
	new_node->next = NULL;
	
	if(head==NULL){
		head = new_node;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp= temp->next;
		}
		temp->next = new_node;
	}
	
	i++;
	}while(i!=5);
	if(head==NULL){
	cout<<"La lista esta vacia."<<endl;
	}
	else{
		node*temp=head;
		cout<<"Lista"<<endl;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp= temp->next;
		}
	}
	
	if(head==NULL){
		cout<<"Lista vacia."<<endl;
	}
	else{
		node*temp=head;
		int suma=0;
		while(temp!=NULL){
			suma+= temp->data;
			temp=temp->next;
	
		}
		cout<<"El promedio es:"<<suma/5<<endl;
	}
	
	return 0;
}

