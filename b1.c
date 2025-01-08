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
    strcpy(s.hoTen,"nguyen quang hoang");
    s.tuoi = 20;
    s.phoneNum = 338470809;
    printf("Ho Ten: %s\n", s.hoTen);
    printf("Tuoi: %d\n", s.tuoi);
    printf("So dien thoai: %d\n", s.phoneNum);
}