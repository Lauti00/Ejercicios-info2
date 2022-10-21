#include <iostream>
using namespace std;

void fprintf(FILE *fp , const char *str);
void fscanf(FILE *fp , const char *str);


int main(int argc, char *argv[]) {
	int dato =0 ;
	FILE *fp;
	fp= fopen("./pares.txt" , "w");

if(fp==NULL){
	cout<<"Imposible abrir el archivo."<<endl;
	exit(1);
}
for(int i=0 ; i<101 ; i++){
	if(i%2==0){
		fprintf(fp ,"%d \n" ,i);	
	}
}
fclose(fp);

fopen("./pares.txt" , "r");
while(!feof(fp)){

fscanf(fp , "%d \n" , &dato);
printf("%d \n", dato);
}
fclose(fp);



	return 0;
}

