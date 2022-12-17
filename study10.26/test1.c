#include <stdio.h>
#include <unistd.h>

int main()
{
    int cnt=10;
    while(cnt)
    {
        printf("%2d\r",cnt);
        fflush(stdout);
        cnt--;
        sleep(1);
    }
   //  int a[]={1,2,3,4,5,6};
   //  int i;
   //  for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
   //  {
   //      printf("%d ",a[i]);
   //  }
   //  printf("\n");
    return 0;
}
