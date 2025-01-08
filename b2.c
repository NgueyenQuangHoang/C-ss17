#include<stdio.h>
#include<string.h>

struct sinhVien
{
    char hoTen[20];
    int tuoi;
    int phoneNum;
};

typedef struct sinhVien sinhVien;

int main(){
    sinhVien s;
    printf("Nhap ho ten: ");
    fgets(s.hoTen, sizeof(s.hoTen), stdin);
    s.hoTen[strcspn(s.hoTen, "\n")] = '\0'; // loại bỏ kí tự xuống dòng

    printf("Nhap tuoi: ");
    scanf("%d", &s.tuoi);

    printf("Nhap so dien thoai: ");
    scanf("%d", &s.phoneNum);

    printf("Ho Ten: %s\n", s.hoTen);
    printf("Tuoi: %d\n", s.tuoi);
    printf("So dien thoai: %d\n", s.phoneNum);
}