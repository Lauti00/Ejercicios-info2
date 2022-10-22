#include <ctime>
#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {

	struct node * head=NULL;
	struct node *temp=NULL;
	struct node *new_node =NULL;
	
	int dato= 1+ rand()%10;
	int i=0;
	srand(time(NULL));
	do{
				
		new_node=(struct node*) malloc(sizeof(struct node));
		new_node = (struct node*)new_node; 
		
		if(new_node==NULL){
			cout<<"No hay memoria disponible."<<endl;
		}
		
		new_node->data=dato;
		new_node->next=NULL;
		
		if(head==NULL){
			head=new_node;
		}
		else{
			temp=head;
			while(temp->next!=NULL){
				temp= temp->next;
			}
				temp->next = new_node;
			
		}
		i++;
	} while(i!=5);
	
	if(head==NULL){
		cout<<"La lista esta vacia."<<endl;
	}
	else{
		node*temp=head;
		cout<<"LISTA"<<endl;
		
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		
	}
	
	temp=head;
	if(head==NULL){
		cout<<"La lista esta vacia."<<endl;
	}
	else{
		struct node * prev=NULL;
		struct node *current=NULL;
		
		cout<<"Ingrese el dato a borrar"<<endl;
		cin>>dato;
		
		if(dato==head->data){
			temp=head;
			head= head->next;
			free(temp);
		}
	}
	
	return 0;
}

