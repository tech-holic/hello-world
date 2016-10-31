#include <iostream>
#include <string>

using namespace std;

void testsizeof()
{
    string s = "abcd";
    cout<<sizeof(s)<<endl;
    cout<<sizeof("abcd")<<endl;
}

int main()
{
    testsizeof();
    cout << "Hello world!" << endl;
    return 0;
}
