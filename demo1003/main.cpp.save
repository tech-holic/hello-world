//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//    char *p="abc";
//    char *q="abc123";
//    while(*p==*q)
//    {
//        printf("%c%c",*p,*q);
//        p++;q++;
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode,*LinkList;
//
//int static flag=0;
//
//int InitList(LinkList &L)
//{
//    LinkList p,q,pre;
//    L=(LinkList)malloc(sizeof(LNode));
//    L->data=-1;
//    L->next=NULL;
//    if(flag==0)
//    {
//        srand((unsigned)time(NULL));
//        flag=1;
//    }
//    else
//    {
//        flag=0;
//    }
//    for(int k=0;k<20;k++)
//    {
//        p=(LinkList)malloc(sizeof(LNode));
//        p->data=rand()%40+1;
//        p->next=NULL;
//        if(L->next==NULL)
//        {
//            L->next=p;
//            p->next=NULL;
//        }
//        else
//        {
//            pre=L;
//            q=pre->next;
//            while(q!=NULL&&p->data>q->data)
//            {
//                pre=q;
//                q=q->next;
//            }
//            if(pre->data==p->data) continue;
//            if(q!=NULL && q->data==p->data) continue;
//            if(pre->next==NULL)
//            {
//                pre->next=p;
//                p->next=NULL;
//            }
//            else
//            {
//                p->next=pre->next;
//                pre->next=p;
//            }
//        }
//    }
//    return 1;
//}
//
//void Display(LinkList L)
//{
//    if(L->next==NULL)
//    {
//        printf("void List\n");
//    }
//    LinkList p=L;
//    while(p->next!=NULL)
//    {
//        printf("%3d->",p->data);
//        p=p->next;
//    }
//    printf("%3d\n",p->data);
//}
//
//void Difference(LinkList &Lc,LinkList &La,LinkList &Lb)
//{
//    LinkList pa=La->next;
//    LinkList pb=Lb->next;
//    LinkList pc;
//    Lc=(LinkList)malloc(sizeof(LNode));
//    Lc->data=-1;
//    Lc->next=NULL;
//    pc=Lc;
//    while(pa!=NULL&&pb!=NULL)
//    {
//        if(pa->data<pb->data)
//        {
//            pc->next=(LinkList)malloc(sizeof(LNode));
//            pc=pc->next;
//            pc->data=pa->data;
//            pa=pa->next;
//        }
//        else if(pa->data==pb->data)
//        {
//            pa=pa->next;
//            pb=pb->next;
//        }
//        else
//            pb=pb->next;
//    }
//    while(pa!=NULL)
//    {
//        pc->next=(LinkList)malloc(sizeof(LNode));
//        pc=pc->next;
//        pc->data=pa->data;
//        pa=pa->next;
//    }
//    pc->next=NULL;
//}
//
//int main()
//{
//   LinkList La,Lb,Lc;
//   InitList(La);
//   printf("List1:\n");
//   Display(La);
//   InitList(Lb);
//   printf("List2:\n");
//   Display(Lb);
//   Difference(Lc,La,Lb);
//   printf("List1-List2:");
//   Display(Lc);
//   char s[]="\\123456\123456\t";
//   int i;
//   i-4=9;
//   printf("%s,%d\n",s,strlen(s));
//   return 1;
//}


#include <stdio.h>
#include <iostream>
using namespace std;

#define SUB(x,y) x-y
#define ACCESS_BEFORE(element,offset,value) *(SUB(&element, offset)) = value
int main() {
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int i;
    ACCESS_BEFORE(array[5], 4, 6);
    printf("array: ");
    for (i = 0; i < 10; ++i) {
        printf("%d", array[i]);
    }
    printf("\n");
    if(~(NULL))
        cout<<"hello"<<endl;
    if(~'\0')
        cout<<"hello"<<endl;
    return (0);
}
