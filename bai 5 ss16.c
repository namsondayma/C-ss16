#include <stdio.h>
int main() {
    FILE *file1, *file3, *file5;
    char ch;
    file1 = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt", "r");
    file3 = fopen("C:\\Users\\Admin\\Desktop\\bt03.txt", "r");
    file5 = fopen("C:\\Users\\Admin\\Desktop\\bt05.txt", "w");
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file5);
    }
    while ((ch = fgetc(file3)) != EOF) {
        fputc(ch, file5);
    }
     while ((ch = fgetc(file5)) != EOF) {
        putchar(ch);
    }
    fclose(file1);
    fclose(file3);
    fclose(file5);
    return 0;
}
