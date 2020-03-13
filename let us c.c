#include<stdio.h>
void main()
{
     char c;
     unsigned char d;
     int i;
     unsigned int j;
     short int k;
     unsigned short int l;
     long int m;
     unsigned long int n;
     float x;
     double y;
     long double z;

     scanf("%c %C",&c,&d);
     printf("%c %c",c,d);

     scanf("%d %u",&i,&j);
     printf("%d %u",i,j);

     scanf("%d %u",&k,&l);
     printf("%d %u",k,l);

     scanf("%ld %lu",&m,&n);
     printf("%ld %lu",m,n);

     sacanf("%f %lf %Lf",&x,&y,&z);
     printf("%f %lf %Lf",x,y,z);


}
