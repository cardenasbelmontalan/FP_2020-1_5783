#include <stdio.h>
#include <stdlib.h>
#include <math.h>//librerias que usaremos
int main(int argc, char*argv[]){//declarando
double a,b,c,s,w,k,x1,x2,n,m,i1,i2,r1;//estas son las variables que utilizaremos y las declaramos
a=atof(argv[1]);
b=atof(argv[2]);
c=atof(argv[3]);
if(a!=0){//condicionando
s=2*a;
w=(b*b)-(4*a*c);
if(w>=0){//delcaramos una condicion para w
	k=sqrt(w);
	x1=(b+k)/s;//operacion
	x2=(b-k)/s;//operacion 2
	if(x1==x2){
		printf("%.2lf\n",x1);
	}else{
		printf("%.2lf\n",x1);
		printf("%.2lf\n",x2);
	}
}else{
	n=(4*a*c)-(b*b);
	m=sqrt(n);//se realizan las operaciones con raiz
	i1=m/s;//division
	r1=b/s;
	printf("%.2lf+%.2lfi\n",r1,i1);
	printf("%.2lf-%.2lfi\n",r1,i1);
}
}
	return 0;
}	
