# student-information-management-system


# Student Information Management System

This C program is a **Student Information Management System** that allows users to input, store, and display information about multiple students. It utilizes dynamic memory allocation and modular functions to handle student data effectively. The program is designed to be flexible, allowing for any number of students to be entered without a fixed limit, and it includes error handling to ensure robust user input validation.

## Features:
- **Dynamic Memory Allocation**: Memory for storing student data is allocated dynamically based on user input, making the system scalable for any number of students.
- **Error Handling**: The program ensures valid data entry for student ID, phone number, and other fields by prompting the user to correct invalid inputs.
- **Modular Design**: The code is broken down into functions for input, data printing, and displaying all student data, making it easily maintainable and readable.
- **Formatted Output**: The student information is displayed in a clear, organized, and professional manner.
- **Flexible Input Handling**: The system can handle spaces in names, addresses, and other string inputs.

## Data Stored for Each Student:
- **Name**
- **ID Number**
- **Phone Number**
- **Address**
- **Major**

## How to Use:
1. Clone or download this repository to your local machine.
2. Compile and run the program using a C compiler:
   ```bash
   gcc -o student_manager student_manager.c
   ./student_manager
