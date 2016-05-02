#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;              //单链表中的数据域
    struct Node *next;          //单链表的指针域
} Node,*LinkedList;

LinkedList LinkedListInit()
{
    Node *L;
    L = (Node *)malloc(sizeof(Node));   //申请结点空间
    if(L == NULL)                       //判断是否有足够的内存空间
        printf("申请内存空间失败/n");
    L->next = NULL;
    return L;                 //将next设置为NULL,初始长度为0的单链表
}


LinkedList LinkedListCreatH(int n)
{
    Node *L;
    L = (Node *)malloc(sizeof(Node));   //申请头结点空间
    L->next = NULL;                      //初始化一个空链表

    int x,i=0;                         //x为链表数据域中的数据
    while(i!=n)
    {
        scanf("%d",&x);
        Node *p;
        p = (Node *)malloc(sizeof(Node));   //申请新的结点
        p->data = x;                     //结点数据域赋值
        p->next = L->next;                    //将结点插入到表头L-->|2|-->|1|-->NULL
        L->next = p;
        i++;
    }
    return L;
}
LinkedList LinkedListCreatT(int n)
{
    Node *L;
    L = (Node *)malloc(sizeof(Node));   //申请头结点空间
    L->next = NULL;                  //初始化一个空链表
    Node *r;
    r = L;                          //r始终指向终端结点，开始时指向头结点
    int x,i=0;                         //x为链表数据域中的数据
    while(i!=n)
    {
        scanf("%d",&x);
        Node *p;
        p = (Node *)malloc(sizeof(Node));   //申请新的结点
        p->data = x;                     //结点数据域赋值
        r->next = p;                 //将结点插入到表头L-->|1|-->|2|-->NULL
        r = p;
        i++;
    }
    r->next = NULL;

    return L;
}
LinkedList LinkedListMerge(LinkedList L1,LinkedList L2)
{
    Node *p;
    Node *q;
    Node *head;
    Node *t;
    p=L1;
    q=L2;
    head=NULL;
    while(p!=NULL&&q!=NULL)
    {
        if(p->data>q->data)
        {
            if(head==NULL)
            {
                head=q;
                t=q;
            }
            else
            {
                t->next=q;
                t=q;
            }
            q=q->next;
        }
        else
        {
             if(head==NULL)
            {
                head=p;
                t=p;
            }
            else
            {
                t->next=p;
                t=p;
            }
            p=p->next;

        }

    }
    if(q!=NULL)
    {
        t->next=q;
        while(q->next!=NULL)
            q=q->next;
        t=q;
    }
    else if(p!=NULL)
    {
        t->next=p;
        while(p->next!=NULL)
            p=p->next;
        t=p;
    }
    if(head!=NULL)
            t->next=NULL;

    return head->next;

}
int main()
{
    LinkedList list1,list2,start;
    int n,m;
    printf("please input the length of the two lists");
    scanf("%d%d",&n,&m);
    printf("please input data of list one：");
    list1 = LinkedListCreatT(n);
    printf("please input data of list two：");
    list2 = LinkedListCreatT(m);
    for(start = list1->next; start != NULL; start = start->next)
        printf("%d ",start->data);
    printf("\n");
    for(start = list2->next; start != NULL; start = start->next)
        printf("%d ",start->data);
    printf("\n");

    list1=LinkedListMerge(list1,list2);
    for(start = list1->next; start != NULL; start = start->next)
        printf("%d ",start->data);
    printf("\n");

}
