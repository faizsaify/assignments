//create an employee database using an array of structures
 #include <stdio.h>
// Define a structure for an employee
struct Employee {
int empId;
char empName[50];
float empSalary;
};

void main() {
int numEmployees = 3;
struct Employee employees[numEmployees];
for (int i = 0; i < numEmployees; ++i) 
{
printf("Enter details for Employee %d:\n", i + 1);
printf("ID: ");
scanf("%d", &employees[i].empId);
printf("Name: ");
scanf("%s", employees[i].empName);
printf("Salary: ");
scanf("%f", &employees[i].empSalary);
printf("\n");
}

printf("Employee Database:\n");
for (int i = 0; i < numEmployees; ++i) {
printf("Employee %d\n", i + 1);
printf("ID: %d\n", employees[i].empId);
printf("Name: %s\n", employees[i].empName);
printf("Salary: %.2f\n", employees[i].empSalary);
printf("\n");
}
}
