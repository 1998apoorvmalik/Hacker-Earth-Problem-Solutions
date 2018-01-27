/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>

int main()
{
    int l, n, w, h;
    scanf("%i%i", &l, &n);
    for(int i=0;i<n;i++)
    {
        scanf("%i%i", &w, &h);
        if(w!=h && w>=l && h>=l)
            printf("CROP IT\n");
        else if(w<l || h<l)
            printf("UPLOAD ANOTHER\n");
        else
            printf("ACCEPTED\n");
    }
    return 0;
}
