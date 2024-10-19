#include <stdio.h>

#define NUM_STUDENTS 20

// Structure to hold student information
struct Student {
    char name[50];
    int roll_no;
    float marks;
    char address[100];
};

int main() {
    struct Student students[NUM_STUDENTS];  // Array to store 20 students
    int i;

    // Loop to get the details of each student
    for(i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]%*c", students[i].name);  // Read the student's name

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);  // Read the student's roll number

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);  // Read the student's marks

        printf("Enter address: ");
        scanf(" %[^\n]%*c", students[i].address);  // Read the student's address

        printf("\n");  // Move to the next student
    }

    // Now let's print out all the students' information
    printf("Student Information:\n\n");
    for(i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Address: %s\n\n", students[i].address);
    }

    return 0;
}
