#include<stdio.h>
int main(){
	FILE* filePointer = NULL;
	char display[1000];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt", "r");
	fread(display,sizeof(char),sizeof(display),filePointer);
	printf("noi dung van ban la: %s",display);
	fclose(filePointer);
	return 0;
}
