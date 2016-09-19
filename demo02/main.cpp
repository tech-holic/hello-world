#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{
    double n,m,x,p,q;
    while(cin>>n>>m>>x)
    {
        cin>>p>>q;
        if(q>=p)
        {
            //很简单，每个人猜的数字一样就可以被公司选中
            double s=x*p/(n*(q-p)+q);
            //设置固定小数位数的输出格式
//            cout.setf(ios::showpoint);
//            cout.precision(2);
//            cout.setf(ios::fixed);
            if(s<1.0)
                s=1.0;
            if(s>m)
                s=m;
            printf("%.2f\n",s)//四舍五入的取巧做法
        }
    }
    return 0;
}
