#include <stdio.h>
#include <string.h>

const int MAX_NAME_SIZE = 30;

class Student
{
public:
    Student(char *pszName);
    ~Student();
public:
    static void PrintfAllStudents();
private:
    char    m_name[MAX_NAME_SIZE];
    Student *next;
    Student *prev;
    static Student *m_head;
};

Student::Student(char *pszName)
{
    strcpy(this->m_name, pszName);

    //����˫�����������ݴ�����ͷ�����롣
    this->next = m_head;
    this->prev = NULL;
    if (m_head != NULL)
        m_head->prev = this;
    m_head = this;
}

Student::~Student ()//�������̾��ǽڵ���������
{
    if (this == m_head) //�ýڵ����ͷ�ڵ㡣
    {
        m_head = this->next;
    }
    else
    {
        this->prev->next = this->next;
        this->next->prev = this->prev;
    }
}

void Student::PrintfAllStudents()
{
    for (Student *p = m_head; p != NULL; p = p->next)
        printf("%s\n", p->m_name);
}

Student* Student::m_head = NULL;

int  main()
{
    Student studentA("AAA");
    Student studentB("BBB");
    Student studentC("CCC");
    Student studentD("DDD");
    Student student("MoreWindows");
    Student::PrintfAllStudents();
    return 0;
}
