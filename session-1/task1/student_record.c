/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float sum = 0;
    for (int i = 0; i<3;i++)
    {
        sum += student.marks[i];
    }
    float average = sum/3;
    
    return average; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    printf("Name: %s\n", student.name);
    printf("ID: %i\n", student.id);
    printf("Marks : [");
    for (int i = 0; i<3; i++)
    {
        if (i == 2)
        {
            printf("%f]\n", student.marks[i]);
        }
        else
        {
            printf("%f, ", student.marks[i]);
        }
    }
    printf("Average Mark: %.2f\n", calculate_average(student));
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    Student student = {"John Smiths", 12345, {75.0, 68.5, 81.0}};
    // TODO: display the student data and average mark
    display_student(student);
    return 0;
}