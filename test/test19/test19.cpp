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
int main()
{
    int n;
    LinkedList list1,head,tail,p_tail,start;
    printf("input the length of the list:");
    scanf("%d",&n);
    printf("please input data of the list：");
    list1 = LinkedListCreatT(n);
    head=NULL;
    p_tail=NULL;
    while(list1->next!=NULL)
    {
        tail=list1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        if(head==NULL)
        {
            head=tail;
            tail->next=list1;
            while(tail->next!=head)
            {
            tail=tail->next;
            }
            tail->next=NULL;
        }
        /*else
        {
            head->next=tail;
            tail->next=list1;
            p_tail->next=NULL;
        }*/

    }
    for(start = list1->next; start != NULL; start = start->next)
        printf("%d ",start->data);

}
