/* 4. Crear una lista con 10 letras y luego mostrar solo las vocales.
*/

#include <iostream>
using namespace std;
struct node{
	char data;
	struct node *next;
};

int main(int argc, char *argv[]) {
struct node *head =NULL;
struct node *temp=NULL;
struct node *new_node=NULL;
	
char dato = ' ';
int i=0;
do{
cout<<"Ingrese un dato"<<endl;
cin>>dato;

new_node = (struct node*)malloc(sizeof(struct node));
new_node= (struct node*) new_node;

if(new_node==NULL){
cout<<"No hay espacio de memoria."<<endl;	
}

new_node->data=dato;
new_node->next=NULL;

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

}while(i!=10);

if(head==NULL){
	cout<<"La lista esta vacia."<<endl;
}
else{
	 node*temp = head;
	 while(temp!=NULL){
		if(temp->data == 'a' || temp->data == 'e'|| temp->data =='i' || temp->data=='o' || temp->data=='u'){
			cout<<"Las vocales son:"<<temp->data<<endl;
		}
		 temp= temp->next;
	 }
}
	return 0;
}

