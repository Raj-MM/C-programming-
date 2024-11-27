/*Aim: WAP to maintain a simple employee using file handling.
Name : Raj Maurya
Roll No : 8
UIN : 241A008
Division : A*/
#include<stdio.h>
//Define a structure to hold employee details
struct employee{
int id;
char name[50];
float salary;
};
//Function to display all employee records from the file
void display_employees(){
struct employee emp;
FILE *file=fopen("employee_database.txt","r");

if (file==NULL){
    printf("\n No Employee records found!");
    return;
}
printf("\n Employee Records: ");
printf("ID\tName\tSalary\n");
printf("------------------------------\n");
//Read and display each employee record from the file.
while(fscanf(file,"%d %f %[^\n]",&emp.id,&emp.salary,emp.name) != EOF){
    printf("%d\t-15s%.2f\n",emp.id,emp.name,emp.salary);
 }
fclose(file);
}
//Function to add employee details to yhe file.
void add_employee(){
 struct employee emp;
 FILE *file=fopen("employee_database.txt","a");

 if(file==NULL){
    printf("\n Eror opening file!");
    return;
 }
 //Input employee details
 printf("\n Enter employee ID : ");
 scanf("%d",&emp.id);
 printf("\n Enter employee Name : ");
 getchar();
 gets(emp.name);
 printf("\n Enter employee Salary : ");
 scanf("%f",&emp.salary);

 //Write employee data to the file
 fprintf(file,"%d %.2f %s\n",emp.id,emp.salary,emp.name);
 fclose(file);
 printf("Employee record added succesfully!\n");
}
int main(){
  int choice;
  printf("\t\t***Employee Database***\n\n");

  while(1){
    //Menu for user
    printf("\nEmployee Database Menu:\n");
    printf("1. Add Employee Record\n");
    printf("2. Display Employee Records\n");
    printf("3. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
    add_employee();
    break;
    case 2:
    display_employee();
    break;
    case 3:
    printf("\n Exiting the program.");
    return 0;
    default:
        printf("\n Invalid choice! Please try again.");

    }
  }
}
