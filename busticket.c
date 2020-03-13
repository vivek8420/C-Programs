#include<stdio.h>

float cal_amt(int,int,int[]);

int cal_dist(int[],int,int);

void main()
{
    int j,source,des;
    float i;

    printf("GSRTC TICKET BOOKING\n");
    printf("enter the source(0-7):\n");
    scanf("%d",&source);


           printf("enetr the destination(0-7):\n");
           scanf("%d",&des);

           int dist[]={0,90,55,70,40,50,29,30};
           char city[8][10]={
                             "Jamnagar",
                             "Rajkot",
                             "Chotila",
                             "Limdi",
                             "Bagodara",
                             "Dholaka",
                             "kheda",
                             "nadiad"
                             };


                                   printf("source=%s\n",city[source]);
                                   printf("destination=%s\n",city[des]);

                                           j=cal_amt(source,des,dist);

                                    printf("basic amout=%d\n",j);
                                    printf("total km=%d\n",cal_dist(dist,source,des));


                                           i=cal_amt(source,des,dist)*0.18;

                                      printf("GST=18is value %f\n",i);
                                      printf("ticket charge=5Rs.\n");
                                      printf("final amout=%f\n",j+i+5);


                        printf("THANK YOU");

}

int cal_dist(int dist[8],int source,int des)
{
     int distance=0,i;

       if(des-source>0)
       {
           for(i=source+1;i<=des;i++)
           {
                distance=distance+dist[i];
           }
       }
       else
       {
           for(i=source;i>des;i--)
           {
               distance=distance+dist[i];
           }
       }
           return(distance);
}

float cal_amt(int source,int des,int dist[8])
{
      int i,j,distance;
      float amout;

      distance=cal_dist(dist,source,des);

            if(distance<50)
            {
              amout=distance*1;
            }
            else if(distance>50&&distance<100)
            {
              amout=distance*0.9;
            }
            else
            {
               amout=distance*0.5;
            }

            return(amout);

}
