
#include<stdio.h>
  
int main(int argc,char* argv[])
{
    int i;
  
    if(argc==1)
     printf("\n No Extra Command Line Argument Passed \n");
    if(argc>=2)
    {  for(i=0; i<argc-1;i++)
         printf("\n argv[%d]: %s",i,argv[i+1],"\n");
        printf("\nNumber Of Arguments Passed: %d",argc-1);
         printf("\n");
    }
    return 0;
}
