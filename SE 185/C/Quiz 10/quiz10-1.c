#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	FILE* fp = NULL;
	int ARRAY_SIZE = 8;
	int evenNums[ARRAY_SIZE];
	
	printf("Opening file numbers.txt\n");
	
	fp = fopen("numbers.txt","w");

	if(fp == NULL){
		printf("Could not open numbers.txt\n");
		return -1;
	}
	
	fprintf(fp,"12 7 3 0 28 74 37 299\n");
	
	fclose(fp);
	
	fp = fopen("numbers.txt","r");
	
	if(fp == NULL){
		printf("Could not open numbers.txt\n");
		return -1;
	}
	
	for(int i = 0; i < ARRAY_SIZE;i++){
	fscanf(fp,"%d ", &evenNums[i]);
	}
	
	fclose(fp);
	printf("\n");
	
	for(int i = 0; i < ARRAY_SIZE; i++){
	printf("%d ",evenNums[i]);
	
	}
	return 0;
}