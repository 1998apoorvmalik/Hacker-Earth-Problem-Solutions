/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0;
    while(i!=42)
    {
        scanf("%i", &i);
        if(i!=42)
        {
            printf("%i\n", i);
        }
    }
    return 0;
}
