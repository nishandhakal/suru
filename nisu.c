#include<stdio.h>
#include<conio.h>
int main(){

	int i,size[5];
	printf("Enter the sizes of 5 students:\n");
	scanf("%d %d %d %d %d",&size[0],&size[1],&size[2],&size[3],&size[4]);
	for(i=0; i<5;i++){
		
	printf("size of %d std= %d",i,size[i]);
	printf("\n",i,size[5]);
	}
	for(i=5; i>=1;i--){
		printf("size of %d std= %d",i,size[i-1]);
		printf("\n",i,size[5]);
	}

	getch();
}
