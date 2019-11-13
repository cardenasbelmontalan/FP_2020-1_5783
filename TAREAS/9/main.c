#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	int t, sum;
	t=atoi(argv[1]);
	sum=0;
	while(t!=0){	//aqui se comienza la función
	sum=sum+(t%10); //aqui realiza la operación deseada
	t=(t/10); //Division 
	
	}
	printf("%i\n", sum); //se muestra el resultado de la función 
	return 0;
	
}
