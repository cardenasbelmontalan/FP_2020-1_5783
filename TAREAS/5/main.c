#include <stdio.h>
#include <stdlib.h>
char m;
int x;
int main(int argc, char*argv[]){
	for(int i=1; i<argc; i++){
	m=argv[i][0];
	if(m=='J'||m=='Q'||m=='K'||m=='A'){
		switch (m){
			case 'J':
		printf("10\n");
		break;
			case 'Q':
		printf("10\n");
		break;
			case 'K':
		printf("10\n");
		break;
			case 'A':
		printf("11\n");
	}
	}else{
	x=atoi(argv[i]);
	switch(x){
		case 2:
			printf("2\n");
		break;
		case 3:
			printf("3\n");
		break;
		case 4:
			printf("4\n");
		break;
		case 5:
			printf("5\n");
		break;
		case 6:
			printf("6\n");
		break;
		case 7:
			printf("7\n");
		break;
		case 8:
			printf("8\n");
		break;
		case 9:
			printf("9\n");
		break;
		case 10:
			printf("10\n");
		break;
		default:
			printf("Ingrese numero valido\n");
	}
	}
	}
	return 0;
	}
	
