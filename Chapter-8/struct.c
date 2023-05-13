// write a program to store the data of three students
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
} stu;

void main()
{
    stu s1;
    strcpy(s1.name, "aarohi");
    s1.roll = 12;
    s1.cgpa = 9.9;
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    strcpy(s2.name, "meer");
    s2.roll = 12;
    s2.cgpa = 9.9;
    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    strcpy(s3.name, "hayat");
    s3.roll = 12;
    s3.cgpa = 9.9;
    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
}