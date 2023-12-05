#include <stdio.h>
int main(){
    FILE *file = NULL;
    char chain[200];
    int so_dong = 0;
    file = fopen("C:\\Users\\Admin\\Desktop\\bt03.txt", "r");
    printf("noi dung file:\n");
    while (fgets(chain, sizeof(chain), file)) {
        printf("%s", chain);
        so_dong++;
    }
    fclose(file);
    printf("so dong trong file: %d\n", so_dong);
    return 0;
    }
