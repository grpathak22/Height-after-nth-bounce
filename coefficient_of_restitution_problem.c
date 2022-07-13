#include<stdio.h>
#include<math.h>
int main()
{
   // float initial_height;
   int n;
   printf("Enter the number of successive height/velocity you want to get:");
   scanf("%d",&n);

   float h[n];
   float v[n];

   int flag;
   int o;
   printf("1.Height after bounce given 2.Velocity after bounce is given:");
   scanf("%d",&o);
   if(o==2){
      printf("Enter the initial velocity before striking ground:");
      scanf("%f",&v[0]);
      printf("Enter the velocity after bounce:");
      scanf("%f",&v[1]);
      float e = (v[1])/(v[0]);
      for(int i=1;i<n;i++){
         (v[i+1])=e*(v[i]);
         printf("The velocity after %d bounce is: \t%f",i,v[i]);
         printf("\n");
      }

   }
   else if(o==1){
      printf("Enter the initial height:");
      scanf("%f",&h[0]);
      printf("Enter the height after the bounce:");
      scanf("%f",&h[1]);
      float e = sqrt(h[1]/h[0]);
      for(int i=1;i<n;i++){
           h[i+1]=((e*e)*(h[i]));
      }  
    for(int j=1;j<=n;j++){
    printf("The Height after %d bounce is :%f",j,h[j]);
    printf("\n");
    }
   }
}
w