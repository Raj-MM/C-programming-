/*AIM: WAP to add two numbers using pointers.
Name : Raj Maurya
Roll no : 8
UIN : 241A008
Division : A*/
#include<stdio.h>
int main(){
int num1,num2,sum;
int *ptr1,*ptr2;
 printf("\t\t***Addition using pointers***/n/n");
 //Input the numbers
 printf("\n Enter first number = ");
 scanf("%d",&num1);
 printf("\n Enter second  number = ");
 scanf("%d",&num2);
 //Assign the address of num1 and num2 to the pointers
 ptr1=&num1;
  ptr2=&num2;
  //Add the values pointed by ptr1 and ptr2
  sum=*ptr1+*ptr2;
  //Display the result
  printf("\n Sum of %d and %d is %d",num1,num2,sum);
  return 0;
}

