/*
	Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include<stdio.h>

void main(){
	int i;
	FILE *p;
	FILE *q;
	
	p = fopen("EVEN.txt","w");
	q = fopen("ODD.txt","w");
	char num[10];
	
	if(p==NULL || q==NULL){
		printf("Can't Open File'");
	}else{
		for(i=50;i<=70;i++){
			if(i%2==0){
				fprintf(p," %d ",i);
			}else{
				fprintf(q," %d ",i);
			}
		}
				printf("your even or odd file is succesfully opened");
		
	}
}
