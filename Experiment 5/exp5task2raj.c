/*Aim : WAP to find a factorial of a number using recursive function.
Name : Raj Maurya
Roll no : 08
UIN     : 241A008
Division: A*/
#include<stdio.h>
int factorialRecursive(int num)
{
    if(num<=1) //If Number is 0 or 1 then factorial is 1
    {
        return 1;
    }
    return num*factorialRecursive(num-1); //Recursive Function
}
int main()
{
    int num;
    printf("\t\t\t*** Recursive Factorial***\n\n");  //Title
    printf("Enter Number= ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorialRecursive(num)); //Calling Function
    return 0;
}
