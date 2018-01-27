/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int main()
{
    char stg[MAX_SIZE];
    scanf("%s", stg);
    int difference = 'a' - 'A';
    int i, n;
    for(i=0, n=0;stg[i]!='\0';i++)
        n++;
    for(i=0;i<n;i++)
    {
        if(stg[i]>='A' && stg[i]<='Z')
            stg[i] += difference;
        else if(stg[i]>='a' && stg[i]<='z')
            stg[i] -= difference;
    }
    printf("%s", stg);
}
