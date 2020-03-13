#include<stdio.h>
 struct stu
 {
   char name[100];
   char branch[10];
   int id; 
 }student;

int main()
{
  int ans,n=0;
   FILE *fp;
   struct stu *ptr=&student;
   fp=fopen("event.txt","a+");
   
   do
   {
     printf("NAME    BRANCH   ID\n");
     fscanf(stdin,"%s %s %d",ptr->name,ptr->branch,&ptr->id);
     fprintf(fp,"%s  %s  %d\n",ptr->name,ptr->branch,ptr->id);
     n++;
     printf("do you want more resistration:");
     //1 means YES and 0 means NO
     scanf("%d",&ans);
   }
   while(ans);
   
   printf("\n\nno of resistration student is = %d\n",n);
   
   fclose(fp);
   
   fp=fopen("event.txt","r");
   printf("\n\nNAME   BRANCH     ID\n");
   while(n--)
   {
     fscanf(fp,"%s  %s  %d",ptr->name,ptr->branch,&ptr->id);
     fprintf(stdout,"%s  %5s  %d\n",ptr->name,ptr->branch,ptr->id);
   }
   fclose(fp);
  
}
