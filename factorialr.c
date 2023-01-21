#include<stdio.h>


int factorial(int n)
{
     if(n!=0)
         return n*factorial(n-1); // general case
     else
         return 1; // base case
}

int main()
{
     int num, result;
     printf("Enter a positive number: ");
     scanf("%d",&num);
     result= factorial(num); //function call
     printf("Result = %d\n",result);
     return 0;
}
