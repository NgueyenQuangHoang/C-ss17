#include <stdio.h>

#define MAX_STUDENTS 50

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void inputStudent(Student *student, int id) {
    student->id = id;
    printf("Nhap ten: ");
    scanf("%s", student->name);
    printf("Nhap tuoi: ");
    scanf("%d", &student->age);
    printf("Nhap so dien thoai: ");
    scanf("%s", student->phoneNumber);
}

void printStudent(const Student *student) {
    printf("ID: %d\n", student->id);
    printf("Ten: %s\n", student->name);
    printf("Tuoi: %d\n", student->age);
    printf("So dien thoai: %s\n", student->phoneNumber);
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 5;

    for (int i = 0; i < numStudents; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        inputStudent(&students[i], i + 1);
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < numStudents; i++) {
        printStudent(&students[i]);
        printf("\n");
    }

    return 0;
}