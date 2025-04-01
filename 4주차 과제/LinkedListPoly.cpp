#pragma once

float coef;
typedef struct ListNode {
	float coef;
	int expo;
	struct ListNode* link;
} ListNode;

typedef struct ListNode {
	ListNode* head;
} ListNode;

ListNode* createLinkedList_h(void);
void appendTerm(ListNode* h, float coef, int expo);
void addPoly(ListHead* A, ListHead* B, ListHead* C);
void printPoly(ListHead* L);