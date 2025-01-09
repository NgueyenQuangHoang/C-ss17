#include <stdio.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char phoneNumber[MAX_PHONE_LENGTH];
} Student;

void inputStudentInfo(Student *student) {
    printf("Nhap ten: ");
    scanf("%s", student->name);
    printf("Nhap tuoi: ");
    scanf("%d", &student->age);
    printf("Nhap so dien thoai: ");
    scanf("%s", student->phoneNumber);
}

void printStudentInfo(const Student *student) {
    printf("Ten: %s\n", student->name);
    printf("Tuoi: %d\n", student->age);
    printf("So dien thoai: %s\n", student->phoneNumber);
}

int main() {
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        inputStudentInfo(&students[i]);
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printStudentInfo(&students[i]);
    }

    return 0;
}