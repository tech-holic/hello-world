#include<iostream>
#include<math.h>
using namespace std;
//关于词头有本书上写的可以直接用#include "std_lib_facilities.h"，但在这里不行

int main()
{
    int n=0;
    int sum;
    while(cin>>n)
    {
        sum=n-2*(ceil(((sqrt(9+8*n))-3)/2)-1);
        cout <<sum<< endl;
    }
    return 0;
}
