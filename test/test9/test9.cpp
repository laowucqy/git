#include <stdio.h>
#include <stdlib.h>


 typedef struct Node
{
    int data;              //单链表中的数据域
    struct Node *next;          //单链表的指针域
}Node,*LinkedList;

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

int main()
{
    LinkedList list,start;
    int n,m;
    scanf("%d%d",&n,&m);
    printf("please input data：");
    list = LinkedListCreatH(n);
    int i=0;
    for(start = list->next; start != NULL; start = start->next)
    {   if(i==n-m)
        printf("The data of the last %dth number is:%d ",m,start->data);
        i++;
    }

    printf("\n");
}
