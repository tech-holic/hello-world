#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int common_value;
public:
    static int static_value;
    const static double pi;
    const static double pi2 = 3.14159; //const static �������������ڳ�ʼ��
    Base(int i): common_value(i){}
    void output();
};
int Base::static_value = 4;
const double Base::pi = 3.14159;
void Base::output()
    {
        cout<<this->common_value<<endl;
        cout<<Base::static_value<<endl;
        static_value++;
    }

//��ʼ���͸�ֵ������ a�ǳ�ʼ������̬����ֻ��һ�� ����b�����Ǹ�ֵ����˽��龲̬����ʹ��a������д������Ȼ�𲻵���̬������Ч��
void foo()
{
    static int a = 3;
    cout<<a<<endl;
    a++;
    static int b;
    b = 3;
    cout<<b<<endl;
    b++;
}

 void testifelse()
 {
     int a=1,b=2,c=3;
     if(a!=1);
        else if(b!=2);
            else if(c==3)
        cout<<"if if"<<endl;
 }
 void testsizeof()
 {
     string s="abcde";
     cout<<sizeof(s)<<endl;
     cout<<size(s)<<endl;
 }
int main()
{
    Base b1(3);
    Base b2(2);
    b1.output();
    b2.output();

    foo();
    foo();

    testifelse();
    testsizeof();
    testsizeof();

    cout << "Hello world!" << endl;
    return 0;
}