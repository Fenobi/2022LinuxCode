#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("1234");
    string s2(s1);
    for(int i=0;i<s1.size();++i)
    {
        s1[i]++;
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s2.size();++i)
    {
        cout<<s2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
