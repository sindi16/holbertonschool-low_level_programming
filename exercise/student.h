#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student
{
    char* name;
    int age;
    float avg;
} Student;

void init_student(Student *student, const char *name, int age, float average_grade);
Student *create_student(const char *name, int age, float average_grade);
void print_student(const Student *student);
void update_average_grade(Student *student, float new_grade);
void free_student(Student *student);


#endif