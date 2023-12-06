#include <stdio.h>
struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[20];
    char email[50];
};
int main() {
    struct SinhVien danhSach[100];
    int soLuongSinhVien, i;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &soLuongSinhVien);
    for (i = 0; i < soLuongSinhVien; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf(" %[^\n]s", danhSach[i].hoTen);
        printf("Tuoi: ");
        scanf("%d", &danhSach[i].tuoi);
        printf("So dien thoai: ");
        scanf(" %[^\n]s", danhSach[i].soDienThoai);
        printf("Email: ");
        scanf(" %[^\n]s", danhSach[i].email);
    }
    FILE *file = fopen("C:\\Users\\Admin\\Desktop\\sinhvien.txt", "w");
    for (i = 0; i < soLuongSinhVien; i++) {
        fprintf(file, "%s\n %d\n %s\n %s\n", danhSach[i].hoTen, danhSach[i].tuoi, danhSach[i].soDienThoai, danhSach[i].email);
    }
    fclose(file);
    printf("thong tin sinh vien da duoc luu vao file C:\\Users\\Admin\\Desktop\\sinhvien.txt");
    return 0;
}
