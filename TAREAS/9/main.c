#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	int t, sum;
	t=atoi(argv[1]);
	sum=0;
	while(t!=0){	//aqui se comienza la funci�n
	sum=sum+(t%10); //aqui realiza la operaci�n deseada
	t=(t/10); //Division 
	
	}
	printf("%i\n", sum); //se muestra el resultado de la funci�n 
	return 0;
	
}
