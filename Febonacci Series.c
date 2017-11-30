/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, first=0,second=1,next,c;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    printf("First %d numbers in a Febonacci series are:\n",n);
    
    for(c=0;c<n;c++)
    {
        if(c<=1)
            next=c;
            else{
                next=first+second;
                first=second;
                second=next;
            }
            printf("%d\n",next);
    }
    return 0;
}



