/*Write a C program using Structure to accept a student's name and marks in three subjects. Calculate and display the total and average marks.*/

#include<stdio.h>
// Define a structure for student marks
struct Student
{
    char name[50];
    float mark1, mark2, mark3;
    float total, average;
};
int main()
{
    struct Student s;
    
    // Take student details as input 
    printf("Enter student name:");
    scanf("%49[^\n]", s.name);
    printf("Enter the makrs in three subjects:\n");
    scanf("%f%f%f", &s.mark1, &s.mark2, &s.mark3);


    // Calculate the total and average
    s.total= s.mark1+s.mark2+s.mark3;
    s.average= s.total/3;


    // Display the result
    printf("\n---Marks Details---\n");
    printf("Student Nmae: %s\n", s.name);
    printf("Total marks:%.2f\n", s.total);
    printf("Average Marks:%.2f\n", s.average);

    return 0;
}