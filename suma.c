#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b){
	return a+b;
}

int main(int argc, char** argv){
	int resultado = suma(atoi(argv[1]),atoi( argv[2]));
	
	printf("%d\n", resultado);
	
	return 0;
}
	
