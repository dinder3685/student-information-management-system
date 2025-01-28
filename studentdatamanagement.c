#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int id;
    int phone;
    char address[200];
    char major[100];
} student;

// Function to input student data
void inputStudentData(student *s) {
    printf("Enter the name: ");
    scanf(" %[^\n]%*c", s->name);  // To allow spaces in the name
    
    printf("Enter the ID: ");
    while (scanf("%d", &s->id) != 1) {
        printf("Invalid input! Please enter a valid ID: ");
        while(getchar() != '\n');  // Clear the buffer
    }

    printf("Enter the phone number: ");
    while (scanf("%d", &s->phone) != 1) {
        printf("Invalid input! Please enter a valid phone number: ");
        while(getchar() != '\n');  // Clear the buffer
    }

    printf("Enter the address: ");
    scanf(" %[^\n]%*c", s->address);  // To capture spaces in the address

    printf("Enter the major: ");
    scanf("%s", s->major);  // No spaces in the major, assuming it's one word
}

// Function to print student data
void printStudentData(const student *s) {
    printf("\nName: %s\n", s->name);
    printf("ID: %d\n", s->id);
    printf("Phone: %d\n", s->phone);
    printf("Address: %s\n", s->address);
    printf("Major: %s\n", s->major);
}

// Function to display all students' data
void displayAllStudents(student *students, int studentsnum) {
    printf("\n----- All Students Information -----\n");
    for (int i = 0; i < studentsnum; i++) {
        printf("\nStudent %d:\n", i + 1);
        printStudentData(&students[i]);
    }
}

int main() {
    int studentsnum;

    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    while (scanf("%d", &studentsnum) != 1 || studentsnum <= 0) {
        printf("Invalid input! Please enter a valid number of students: ");
        while(getchar() != '\n');  // Clear the buffer
    }

    // Dynamically allocate memory for students
    student *students = (student *)malloc(studentsnum * sizeof(student));
    if (students == NULL) {
        printf("Memory allocation failed! Exiting program...\n");
        return 1;
    }

    // Collect data for each student
    for (int i = 0; i < studentsnum; i++) {
        printf("\nEnter data for student %d:\n", i + 1);
        inputStudentData(&students[i]);
    }

    // Display all students' data
    displayAllStudents(students, studentsnum);

    // Free allocated memory
    free(students);

    return 0;
}
