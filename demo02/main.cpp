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
            //�ܼ򵥣�ÿ���˲µ�����һ���Ϳ��Ա���˾ѡ��
            double s=x*p/(n*(q-p)+q);
            //���ù̶�С��λ���������ʽ
//            cout.setf(ios::showpoint);
//            cout.precision(2);
//            cout.setf(ios::fixed);
            if(s<1.0)
                s=1.0;
            if(s>m)
                s=m;
            printf("%.2f\n",s)//���������ȡ������
        }
    }
    return 0;
}
