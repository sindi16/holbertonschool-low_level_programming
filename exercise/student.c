#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init_student(Student *student, const char *name, int age, float average_grade)
{
    if (student != NULL)
    {
        student->name =strdup(name);
        student->age = age;
        student->avg = average_grade;
    }
}

Student *create_student(const char *name, int age, float average_grade)
{

    Student *student =(Student*) malloc(sizeof(Student));
    if (student != NULL)
        init_student(student, name, age, average_grade);
    return (student);
}

void print_student(const Student *student)
{

    if (student != NULL)
    {
        printf("Name: %s, Age: %d, Average of grades: %.2f\n", student->name, student->age, student->avg);
    }
}
void update_average_grade(Student *student, float new_grade)
{
	if (student != NULL)
		student->avg = new_grade;
}
void free_student(Student *student)
{

	if (student != NULL)
	{
		free(student->name);
		free(student);
	}
		
	


}