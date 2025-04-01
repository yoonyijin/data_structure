#include <stdio.h>
#include "DoubleLinkedList.h"

int main(void) {
	linkedList_h* DL:
	listNode * p;

	_DL = createLinkedList_h();
	printf("(1) ���� ���� ����Ʈ �����ϱ�! \n");
	printList_h(DL);

	printf("\n(2) ���� ���� ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertNode(DL, NULL, "��");
	printList_h(DL);

	printf("\n(3) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList_h(DL);

	printf("\n(4) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList_h(DL);

	printf("\n(5) ���� ���� ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); deleteNode(DL, p);
	printList_h(DL);

	getchar(); return 0;
}