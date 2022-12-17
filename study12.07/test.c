#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define MYPWD "PWD"

int main(int arge, char *argv[])
{
    for(int i=0;i<arge;i++)
    {
        printf("arge[%d]->%s\n",i,argv[i]);
    }
   // printf("%s\n",getenv(MYPWD));
    return 0;
}
