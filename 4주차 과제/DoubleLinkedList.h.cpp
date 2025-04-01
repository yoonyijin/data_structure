#pragma once

typedef struct ListNode {
	struct ListNode* link;
	char data[4];
	struct ListNode* rink;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList_h(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode*pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);