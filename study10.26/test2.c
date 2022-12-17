#include <stdio.h>
#include <unistd.h>

int main()
{
    int a=0;
    //int i=0;
    while(101-a)
    {
        printf("%10d%%\r",a);
        if(a>45)
        {
            usleep(20000);
        }
        if(a>80)
        {
            usleep(40000);
        }
        if(a>=97)
        {
            sleep(2);
        }
        fflush(stdout);
        a++;
        usleep(8000);

    }
    return 0;
}
