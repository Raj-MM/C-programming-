/*Aim : WAP to print the elements of an array in Reverse order using pointers.
Name : Raj Maurya
Roll no : 8
UIN : 241A008
Division : A*/
#include<stdio.h>
int main(){
 int n;
 printf("\t\t***Array Reverser***\n\n");
 //Input the size of the array
 printf("\n Enter the size of the array = ");
 scanf("%d",&n);
 int arr[n];
 int *ptr=arr; //pointer to the array
 //Input the elements of the array
 printf("\n Enter the element of the array = \n");
 for(int i=0;i<n;i++){
    printf("%d : ",i);
    scanf("%d",ptr+i); //Input directly into the memory location using the pointer

 }
 //print the elements in reverse order using pointer
 printf("\t\t***Arrray elements in reverse order***\n\n");
 for(int i=n-1;i>=0;i--){
 printf("%d ",*(ptr + i)); //Acess element using pointer Arithmetic
 }
 printf("\n");
 return 0;
}
