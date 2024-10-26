/* Aim: WAP to find the sum of all odd numbers between numbers entered by the users.
Name     : Raj Maurya
Roll No  : 8
UIN      : 241A008
Division : A */
 #include<stdio.h>
 int main()
 {
   int sum=0,start,end,i;
   printf("\t\t\t***SUM OF ODD NUMBERS***\n\n\n");
   printf("Enter Starting Number=");
   scanf("%d",&start);
   printf("Enter Ending Numbers=");
   scanf("%d",&end);

   if(start>end)
   {
       printf("ERROR");
   }
   else
   {
       for(i=start;i<=end;i++)
       {
           if(i%2!=0)
            sum=sum+i;
       }
   }
   printf("Sum of all the Odd Numbers between %d and %d = %d",start,end,sum);
   return 0;
 }

