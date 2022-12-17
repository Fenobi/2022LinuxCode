#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("abcd");
	string::reverse_iterator rit1 = s1.rbegin();
	while (rit1 != s1.rend())
	{
		cout << *rit1 << endl;
		rit1++;
	}
	return 0;
}
