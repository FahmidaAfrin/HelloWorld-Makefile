#include <stdio.h>

#define N 1000

int main(int argc, char *argv[])
{
  
    FILE *fp = fopen(argv[1], "r"); 

    char b[N]; 

  
    while(fgets(b, N - 1, fp) != NULL) 
    {
        
        printf ("%s\n", b);
    }
    fclose(fp);   
}
