/*Write a C program using structure to accept an employee's ID, name, and salary and display the details*/

#include<stdio.h>
// Define a structur for Employee details
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    // Take employee details as input
    printf("Enter employee Id:");
    scanf("%d",&e.id);
    printf("Enter Name:");
    // The space before %49[^\n] allows the program to read full names with space
    scanf(" %49[^\n]",e.name);
    printf("Enter Salary:");
    scanf("%f", &e.salary);

    // Display employee details
    printf("\n---Employee Details---\n");
    printf("Employee Id:%d\n",e.id);
    printf("Name:%s\n",e.name);
    printf("Salary:%.2f\n",e.salary);

    return 0;
}