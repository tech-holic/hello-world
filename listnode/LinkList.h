#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

typedef struct Node
{
    DataType data;
    struct Node *next;
}ListNode, *LinkList;

void InitList(LinkList *head)
{
    if((*head=(LinkList)malloc(sizeof(ListNode)))==NULL)
        exit(-1);
    (*head)->next=NULL;
}

int ListEmpty(LinkList head)
{
    if(head->next==NULL)
        return 1;
    else
        return 0;
}

ListNode *Get(LinkList head, int i)
{
    ListNode *p;
    int j;
    if(ListEmpty(head))
        return NULL;
    if(i<1)
        return NULL;
    j=0;
    p=head;
    while(p->next!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j==i)
        return p;
    else
        return NULL;
}

ListNode *LocatesElem(LinkList head, DataType e)
{
    ListNode *p;
    p=head->next;
    while(p)
    {
        if(p->data!=e)
            p=p->next;
        else
            break;
    }
    return p;
}

int LocatePos(LinkList head, DataType e)
{
    ListNode *p;
    int i=1;
    if(ListEmpty(head))
        return 0;
    p=head->next;
    while(p)
    {
        if(p->data==e)
            return i;
        else
        {
            p=p->next;
            i++;
        }
    }
    if(!p)
        return 0;
}


#endif // LINKLIST_H_INCLUDED
