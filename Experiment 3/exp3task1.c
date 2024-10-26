/*Aim: WAP to design menu driven calculator using switch and goto.
Name     : Raj Maurya
Roll No  : 8
UIN      : 241A008
Division : A */
#include<stdio.h>
int main()
{ float num1,num2,result;
  int mod_result;
  char operator;
    printf("\t\t***CALCULATOR***\n\n");
    printf("Operators:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("% : Modulus\n");

    repeat:
    printf("Enter First Number=");
    scanf("%f",&num1);
    printf("Enter Second Number=");
    scanf("%f",&num2);
    printf("Enter Operator=");
    scanf(" %c",&operator);

    switch(operator)
    {
    case '+':
        result=num1+num2;
        printf("%f+%f=%f",num1,num2,result);
        break;
    case '-':
        result=num1-num2;
        printf("%f-%f=%f",num1,num2,result);
        break;
    case '*':
        result=num1*num2;
        printf("%f*%f=%f",num1,num2,result);
        break;
    case '/':
        if(num2==0)
        {
            printf("Cannot Divide by ZERO");
            break;
        }
        result=num1/num2;
        printf("%f/%f=%f",num1,num2,result);
        break;
    case '%':
        result=(int)num1%(int)num2;
        printf("%f%%f=%d",num1,num2,mod_result);
        break;
    default:
        printf("Invalid Operator. Try Again.");
        break;
    }
    printf("\n Continue?(Y/N):");
    scanf(" %c",&operator);
    if(operator=='N'||operator=='n')
    {
        printf("Thankyou for Using Calculator");
        return 0;

    }
        printf("\n\n");
        goto repeat;
    return 0;
}
