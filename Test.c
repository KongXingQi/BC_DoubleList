#include"List.h"

void ListTest1()
{
	Node* plist = ListInit();
	ListPushBack(plist,1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);

	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);


	ListPrint(plist);

	ListPushFront(plist, 10);
	ListPushFront(plist, 20);
	ListPushFront(plist, 30);
	ListPushFront(plist, 40);

	ListPrint(plist);

	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);

	ListPrint(plist);

}
void ListTest2()
{
	Node* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);

	ListPrint(plist);

	Node* pos = ListFind(plist, 1);
	ListDel(plist, pos);

	ListPrint(plist);

	pos = ListFind(plist, 4);
	ListInsert(plist, pos, 40);
	ListPrint(plist);

	ListDestroy(plist);
	plist = NULL;//×Ô¼ºÖÃ¿Õ
	ListPrint(plist);



}
int main()
{
	//ListTest1();
	ListTest2();

	return 0;
}