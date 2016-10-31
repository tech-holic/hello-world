#include <iostream>

using namespace std;

class Base
{
public:
    Base(int i):baseI(i){};
    int getI()
    {
        return this->baseI;
    }
    static void countI()
    {
        baseS++;
        cout<<baseS<<endl;
    };
   virtual void printI()
    {
        cout<<"Base::print()";
    }
    virtual ~Base(){}
private:
    int baseI;
    static int baseS;
};
//int Base::baseS=4;
baseS = 4 ;
void testBase( Base &p)
{
    cout<<&p<<endl;
    cout<<(int*)(&p)<<endl;
    cout<<*(int*)(&p)<<endl;
    cout<<(int*)*(int*)(&p)<<endl;
    cout << "������ڴ���ʼ��ַ��" << &p << endl;
    cout << "type_info��Ϣ:" << endl;
    //RTTICompleteObjectLocator str = *((RTTICompleteObjectLocator*)*((int*)*(int*)(&p) - 1));


    //string classname(str.pTypeDescriptor->name);
    //classname = classname.substr(4, classname.find("@@") - 4);
    //cout <<  "����type_info��Ϣ�������:"<< classname << endl;

    cout << "�麯�����ַ:" << (int *)(&p) << endl;

    //��֤���
    cout << "�麯�����һ�������ĵ�ַ��" << (int*)*((int*)(&p)) << endl;
    cout << "���������ĵ�ַ:" << (int*)*(int *)*((int*)(&p)) << endl;
    cout << "�麯�����У��ڶ����麯����print�����ĵ�ַ��" << ((int*)*(int*)(&p) + 1) << endl;

    //ͨ����ַ�����麯��print����
    typedef void(*Fun)(void);
    Fun IsPrint=(Fun)* ((int*)*(int*)(&p) + 1);
    cout << endl;
    cout<<"�������麯��";
    IsPrint(); //����ַ��ȷ���������Base����麯��print����
    cout << endl;

    //����static�����ĵ�ַ
    p.countI();//�ȵ��ú����Բ���һ��ʵ��
    cout << "static����countI()�ĵ�ַ��" << p.countI << endl;

    //��֤nonstatic���ݳ�Ա
    cout << "�Ʋ�nonstatic���ݳ�ԱbaseI�ĵ�ַ��" << (int *)(&p) + 1 << endl;
    cout << "�����Ʋ���ĵ�ַ������õ�ַ��ֵ��" << *((int *)(&p) + 1) << endl;
    cout << "Base::getI():" << p.getI() << endl;
}

int main()
{
    Base a(10);
    testBase(a);
    int n=2545869;
    cout<<n<<" "<<(int*)n<<endl;
}
