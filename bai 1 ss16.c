#include<stdio.h>
int main(){
	FILE*filePointer=NULL;
	char chain[1000];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt","w+");
	if(filePointer!=NULL){
		printf("nhap chuoi: ");
		gets(chain);
		fprintf(filePointer,"%s",chain);
		fclose(filePointer);
	}
	return 0;
}
