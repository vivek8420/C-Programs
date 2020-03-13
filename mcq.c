 #include<stdio.h>
 #include<time.h>


struct ques
{
   char str1[100];

          union option
         {
               int a1;
               char a2;
               float a3;
               char a4[10];
          }ans,a[4];

       int mcq[4];
       int mcqans;

}vivek[20];


void details(void)
{
     char nm[20];
    printf("ENTER THE PLAYER NAME:\n");
    scanf("%s",nm);
    printf("\n\n");

    printf("RULES:\n each question is 1 mark.\ntime is must be 10 second for each question\npassing mark more than 50%\n\n\n");

    printf("******WELCOME IN QUIZ******\n");

}



void main()
{

   int i,n,j,mark=0;

       printf("enter the question no:");
       scanf("%d",&n);
     printf("\n\n");
    int data[n];

for(j=0;j<n;j++)
{

    printf("enter the %d question:\n",j+1);
    fflush(stdin);
    gets(vivek[j].str1);

   // scanf("%s",vivek[j].str1);
                                    printf("#####0 means int,1 means char,2 means float,3 means string#####\n");
    for(i=0;i<4;i++)
    {

          printf("enter the mcq datatype:");


         scanf("%d",&vivek[j].mcq[i]);
         fflush(stdin);

       switch(vivek[j].mcq[i])
       {
         case 0: printf("enter the mcq:");
                 scanf("%d",&vivek[j].a[i].a1);
                 break;

          case 1:printf("enter the mcq:");
                 scanf("%c",&vivek[j].a[i].a2);

                 break;

          case 2:printf("enter the mcq:");
                 scanf("%f",&vivek[j].a[i].a3);
                 break;

          case 3:printf("enter the mcq:");
                 scanf("%s",vivek[j].a[i].a4);
                 break;

       }
       }

      printf("ENTER THE ANSWER 1,2,3&4 FORMAT\n");

       printf("ENTER THE ANSWER:\n");
        scanf("%d",&vivek[j].mcqans);

}

     printf("\n\n\n");
  //printing section

  for(j=0;j<n;j++)
  {
       printf("QUESSTON %d\n",j+1);
       puts(vivek[j].str1);

       for(i=0;i<4;i++)
       {

              switch(vivek[j].mcq[i])
              {

               case 0: printf("%d)  %d\n",i+1,vivek[j].a[i].a1);
                          break;

               case 1:printf("%d)  %c\n",i+1,vivek[j].a[i].a2);
                          break;

               case 2:printf("%d)  %f\n",i+1,vivek[j].a[i].a3);
                          break;

               case 3:printf("%d)  %s\n",i+1,vivek[j].a[i].a4);
                          break;
              }
       }
       printf("\n\n");
  }
             /* switch(vivek.mcqans)
              {
                  case 0: printf("ANSWER=%d",vivek.ans.a1);
                          break;

                 case 1: printf("ANSWER=%c",vivek.ans.a2);
                          break;

                 case 2:  printf("ANSWER=%f",vivek.ans.a3);
                          break;

                 case 3:  printf("ANSWER=%s",vivek.ans.a4);
                          break;
              }*/

        //user qnswer section

        clock_t star_t,end_t,total_t;
         printf("\n\n\n");
        details();
        printf("\n\n ENTER THE ANSWER 1,2,3,4\n\n");


        for(j=0;j<n;j++)
        {
            star_t=clock();
            printf("ANSWER %d)  ",j+1);
            scanf("%d",&data[j]);
            end_t=clock();

            total_t=(end_t-star_t)/CLOCKS_PER_SEC;
            printf("time=%d\n",total_t);

            if(total_t>10)
            {

                data[i]=5;
                printf("********TIME OVER********\n\n");
                continue;
            }
        }

        //marking section

        for(j=0;j<n;j++)
        {
            if(data[j]==vivek[j].mcqans)
              {
                mark++;
              }
        }

        printf("MARK IS %d OUTOF %d",mark,n);

}
