#include "student.h"
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("Hello World\n");
    Student *student1 = create_student("Sindi Bardhi", 23, 9.0);
    Student *student2 = create_student("Xhoana", 20, 8.56);
    print_student(student1);
    print_student(student2);
	update_average_grade(student1, 8.5);
	print_student(student1);
	free(student1);
	print_student(student1);

    return (0);
}

