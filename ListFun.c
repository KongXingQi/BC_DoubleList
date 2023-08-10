#include"List.h"

Node* ListInit()
{
	//¿ª±ÙÉÚ±øÎ»
	Node* head = (Node*)malloc(sizeof(Node) * 1);
	head->next = head;
	head->prev = head;

	return head;
}

Node* BuyNode(ElemType x)
{
	Node* newnode = (Node*)malloc(sizeof(Node) * 1);
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

void ListPrint(Node* phead)
{
	if (phead->next == phead)
	{
		printf("´ËÁ´±íÎª¿Õ\n");
		return;
	}

	Node* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ",cur->data);
		cur = cur->next;
	}
	printf("\n");

}


void ListPushBack(Node* phead, ElemType x)
{
	assert(phead);
	
	//Node* tail = phead->prev;
	//Node* newnode = BuyNode(x);
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	ListInsert(phead,phead->next,x);



}

void ListPopBack(Node* phead)
{
	assert(phead);
	/*if (phead->next == phead)
	{
		printf("Á´±íÎª¿Õ£¬É¾³ýÊ§°Ü\n");
		return;
	}
	Node* tail = phead->prev;
	tail = tail->prev;
	free(tail->next);

	tail->next = phead;
	phead->prev = tail;*/

	ListDel(phead, phead->prev);

}


void ListPushFront(Node* phead, ElemType x)
{
	assert(phead);

	//Node* newnode = BuyNode(x);
	//Node* frist = phead->next;

	//newnode->next = frist;
	//frist->prev = newnode;
	//phead->next = newnode;
	//newnode->prev = phead;

	ListInsert(phead, phead->prev, x);

}


void ListPopFront(Node* phead)
{
	assert(phead);

	/*if (phead->next == phead)
	{
		printf("Á´±íÎª¿Õ£¬É¾³ýÊ§°Ü\n");
		return;
	}
	Node* frist = phead->next;

	phead->next = frist->next;
	frist->next->prev = phead;

	free(frist);*/

	ListDel(phead,phead->next);
}

Node* ListFind(Node* phead, ElemType x)
{
	assert(phead);

	Node* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	printf("Á´±íÖÐÎÞ´ËÔªËØ\n");
	return NULL;
}

void ListDel(Node* phead, Node* pos)
{
	assert(phead);

	if (phead->next == phead)
	{
		printf("Á´±íÎª¿Õ£¬É¾³ýÊ§°Ü\n");
		return;
	}

	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);

}

void ListInsert(Node* phead, Node* pos, ElemType x)
{
	assert(phead);

	Node* newnode = BuyNode(x);
	Node* prev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	prev->next = newnode;
	newnode->prev = prev;

}

void ListDestroy(Node* phead)
{
	assert(phead);

	Node* cur = phead->next;
	while (cur != phead)
	{
		Node* next = cur->next;
		cur->prev->next = cur->next;
		cur->next->prev = cur->prev;
		free(cur);
		cur = next;
	}
}