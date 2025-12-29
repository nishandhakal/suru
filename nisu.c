#include<stdio.h>
#include<conio.h>
int main(){

	int i,mark[5];
	printf("Enter a mark of 5 students");
	scanf("%d %d %d %d %d",&mark[0],&mark[1],&mark[2],&mark[3],&mark[4]);
	for(i=0; i<5;i++){
		
	printf("mark of %d std= %d",i,mark[i]);
	printf("\n",i,mark[5]);
	}

	getch();
}
