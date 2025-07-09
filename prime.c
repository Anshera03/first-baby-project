#include <stdio.h>
int main()
{
printf("PRIME number generator\n");
int s,e;
printf("Start of the loop: ");
scanf("%d",&s);
printf("End of the loop: ");
scanf("%d",&e);
int j,k;
   for (j=s; j<=e; j++)
    {
      
            for (k=2; k<j; k++)
            {
              if (j%k==0)
              {
               break;
              }
            }
            if (k==j)
            {
             printf("%d\n", j);
            }
            
       
    }
return 0;
}
