#include <stdio.h>
#include <stdlib.h>
int SALUDOS(int personas){ //Variables
	int res; //valores
	int z; //valores
	if(personas==1){
		return 0;
	}else{
		z=SALUDOS(personas-1)+(personas-1);
		return z;
	}
}
int main(int argc, char*argv[]){//funcion
int a, ans; //declarar variables
a=atoi(argv[1]);
ans=SALUDOS(a);
printf("%i\n",ans);
return 0;
}
