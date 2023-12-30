#include<stdio.h>
void main(){
	int i;
	FILE *p=fopen("EVEN.txt","w");
	FILE *q=fopen("ODD.txt","w");
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
	}
}
