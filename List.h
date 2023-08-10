#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* prev;
	struct Node* next;

}Node;

//
Node* ListInit();
void ListPrint(Node* phead);
//
void ListPushBack(Node* phead,ElemType x);
void ListPushFront(Node* phead, ElemType x);
//
void ListPopBack(Node* phead);
void ListPopFront(Node* phead);

Node* ListFind(Node* phead,ElemType x);
void ListDel(Node* phead, Node* pos);
void ListInsert(Node* phead,Node* pos,ElemType x);

void ListDestroy(Node* phead);

Node* BuyNode(ElemType x);
