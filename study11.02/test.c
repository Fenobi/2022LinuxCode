#include <stdio.h>
#include <time.h>

int AddToVal(int from,int to)
{
    int i=0;
    int sum=0;
    for(i=from;i<=to;++i)
    {
        sum+=i;
    }
    return sum;
}

void Print(int sum)
{
    long long timestamp=time(NULL);
    printf("result = %d, timestamp: %lld\n",sum,timestamp);
}

int main()
{
    int sum = AddToVal(0,100);
    Print(sum);
    return 0;
}
