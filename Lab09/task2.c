#include<stdio.h>


void checkE(){
	unsigned int T = 1;
	char *byte = (char *) & T;

	if(*byte){
		printf("System is Little Endian\n");
	}else{
	printf("System is Big Endian\n");
	}
}

void checkArch(){

	if(sizeof(void *)==4){
		printf("System Arch is 32\n");	
	}else if (sizeof(void *)==8) {
		printf("System Arch is 64\n");
	}else
		printf("Unkown");
}



void main() {
	printf("Printing the system Endianness and System Arch\n");
	checkE();
	checkArch();



}
