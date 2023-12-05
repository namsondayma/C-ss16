#include<stdio.h>
int main(){
	FILE*filePointer= NULL;
	int n;
	printf("nhap so dong: ");
	scanf("%d",&n);
	getchar();
	char chain[200];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt03.txt","w");
	for(int i=0;i<n;i++){
		printf("nhap chuoi %d: ",i+1);
		fgets(chain,sizeof(chain),stdin);
		fprintf(filePointer,"%s",chain);
	}
	fclose(filePointer);
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt03.txt","r");
	while (fgets(chain, sizeof(chain), filePointer))
	fclose(filePointer);
	return 0;
}
