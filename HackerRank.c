#include<stdio.h>

int main()
{
  int i=4;
   double d=4.0;
   char s[]="HackerRank ";

// Declare second integer, double, and String variables.
       int v;
        double t;
          char str[1000];

    // Read and save an integer, double, and String to your variables.
         scanf("%d",&v);
         scanf("%lf",&t);
         fflush(stdin);
         gets(str);

    // Print the sum of both integer variables on a new line.
     printf("%d\n",i+v);

    // Print the sum of the double variables on a new line.
        printf("%lf\n",d+t);
    // Concatenate and print the String variables on a new line
       printf("%s",s);
    // The 's' variable above should be printed first.
        printf("%s",str);
    }
