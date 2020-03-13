#include<stdio.h>
 void main()
 {
  int i,j=0,k,flag=0;
  char p;
  char a[3][3],player1[25],player2[25];

      printf("enter the name of player1:");
      scanf("%s",player1);

      printf("enter the name of player2:");
      scanf("%s",player2);
                                                /*player1 enter x and player2 enter o*/

  for(k=0;k<9;k++)
  {
      if(k%2==0)
      {
      printf("player 1\n");
      }
      else
      printf("player2");
    printf("enter the location(i,j)=");
    scanf("%d%d",&i,&j);

    printf("enter the ans:");
    scanf("%*c %c",&p);
    a[i][j]=p;
  }

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
        printf("%4c",a[i][j]);
      }
      printf("\n");
  }

  for(i=0;i<3;i++)
   {
          if(a[i][0]==a[i][1]&&a[i][0]==a[i][2])
          {
           j=1;
           if(a[i][0]=='x')
            flag=1;
           break;
          }
          else if(a[0][i]==a[1][i]&&a[0][i]==a[2][i])
          {
            j=1;
            if(a[0][i]=='x')
             flag=1;
            break;
          }

     }
          if(a[0][0]==a[2][2]&&a[1][1]==a[2][2])
          {
           j=1;
           if(a[0][0]=='x')
            flag=1;
          }
         if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]);
          {
           j=1;
           if(a[1][1]=='x')
            flag=1;
          }


         if(j==1)
         {
             if(flag==1)
             {
                 printf("winner is player1=%s",player1);
             }
             else
             {
                 printf("winner is player2=%s",player2);
             }
         }
           else
              printf("match draw");


}



