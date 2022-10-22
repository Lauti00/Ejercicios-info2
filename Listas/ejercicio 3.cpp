/* 3. Crear un programa en la cual cargue una lista de 5 numeros aleatoriamente (entre 1 y 10), luego los muestre y muestre los valores multiples de 5.
*/
#include <ctime>
#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};


int main(int argc, char *argv[]) {
	struct node *head = NULL;
	struct node *temp =NULL;
	struct node *new_node =NULL;

	int i=0;
	srand(time(NULL));
	do{
	int dato=rand()%50 +5 ; 

	new_node = (struct node *)malloc(sizeof(struct node));
	new_node =(struct node*) new_node;
	
	if(new_node==NULL){
		cout<<"No hay espacio disponible."<<endl;
		exit(1);
	}
	
	new_node->data=dato;
	new_node ->next=NULL;
	
	if(head==NULL){
		head=new_node;
	}
	else{
		 temp=head;
		 while(temp->next !=NULL){
			 temp= temp->next;
		 }
		temp->next = new_node;
	}
	i++;
	}while(i!=5);
	if(head==NULL){
		cout<<"Lista vacia."<<endl;
	}
	else{
		node*temp=head; //LO APUNTA AL INICIO
		cout<<"Multiplo de 5"<<endl;
		while(temp!=NULL){
			
			if(temp->data%5==0){
			cout<<temp->data<<endl;
			}
			temp = temp->next;
			
		}
	}
	return 0;
}

