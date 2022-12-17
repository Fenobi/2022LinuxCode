#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    while(1)
    {
        printf("这是一个test程序,我的ID是：%d\n",getpid());
        sleep(1);
    }
    return 0;
}
