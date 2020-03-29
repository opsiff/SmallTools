#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	printf("Input small file`s number:"); 
	scanf("%d",&i);
	int m;
	printf("Input the file size in B，1KB=1024B:");
	scanf("%d",&m);
	if(i<=0||m<=0) return 0;
	for(register int j=1;j<=i;j++){
		char c[20];
		itoa(j,c,10);
		FILE *fp;
	   	fp = fopen(c,"w");
		for(register int k=1;k<=m;k++)
	   	fprintf(fp,"1");
	   	fclose(fp);
	}
}
