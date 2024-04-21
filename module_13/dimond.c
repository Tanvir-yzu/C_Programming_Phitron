#include<stdio.h>

int main()
{
    // read in the value of n from the user
    int n,s,k;
    scanf("%d",&n);

    // initialize variables s and k
    s=n-1;
    k=1;

    // loop from i = 1 to 2*n-1
    for(int i=1;i<=(2*n)-1;i++)
    {
        // print out leading spaces
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }

        // print out a line of asterisks
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        // print a newline character to move to the next line
        printf("\n");

        // adjust the values of s and k based on the current value of i
        if(i<=n-1)
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }
    }

    // return 0 to indicate that the program has finished successfully
    return 0;
}