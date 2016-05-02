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

LinkedList LinkedListSort(LinkedList L)
{
    Node *first;
    Node *t;
    Node *p_min;
    Node *min;
    Node *p;
    first=NULL;
    while(L!=NULL)
    {
        for(p=L,min=L; p->next!=NULL; p=p->next)
        {
            if(p->next->data < min->data)
            {
                p_min=p;
                min=p->next;
            }
        }
        if(first==NULL)
        {
            first=min;
            t=min;
        }
        else
        {
            t->next=min;
            t=min;
        }
        if(min==L)
        {
            L=L->next;
        }
        else
        {
            p_min->next=min->next;
        }
        if(first==NULL)
        {
            t->next=NULL;
        }
    }
    L=first;
    return L;


}
int main()
{

    LinkedList list,start;
    int n,m;
    printf("please input the length of the list：");
    scanf("%d",&n);
    printf("please input data：");
    list = LinkedListCreatH(n);
    LinkedListSort(list);
    for(start = list->next; start != NULL; start = start->next)
        printf("%d ",start->data);

}
