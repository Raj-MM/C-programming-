/*Aim : WAP to find the Largest element in an array.
Name : Raj Maurya
Roll no : 08
UIN : 241A008
Division : A*/
#include<stdio.h>
int main()
{
    int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
    //Prompt user for input
    printf("\n\n Addition of two Matrices : \n");
    printf("--------------------------------");
    printf("\nInput the size of the square matrix : ");
    scanf("%d",&n);
    //Input elements for the first matrix
    printf("\nInput elements in the first matrix : \n");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
      {
          printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&arr1[i][j]);
      }
    }
    //Input elements for second matrix
    printf("\nInput elements in the second matrix : \n");
    for(i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
      { printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&brr1[i][j]);
      }
    }
    // Display the first matrix
    printf("\n The first matrix is : ");
    for(i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
        {printf("%d\t",arr1[i][j]);}
    }
    //Display the second matrix
    printf("\n The Second matrix is : ");
    for(i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
        {printf("%d\t",brr1[i][j]);}
    }
    //Calculate the sum of two matrix
    for(i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
         {crr1[i][j]=arr1[i][j]+brr1[i][j];}
    }
    //Display the sum of two matrix
    printf("The Addition of two marix is : \n");
    for(i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
           {printf("%d\t",crr1[i][j]);}
    }
    return 0;
}
