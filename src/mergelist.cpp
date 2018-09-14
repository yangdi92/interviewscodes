#include<iostream>

using namespace std;

struct ListNode{
	int value;
	ListNode* next;
	};

ListNode* mergeNode(ListNode* phead1, ListNode* phead2) { 
	if (phead1 == nullptr) {
		return phead2;
		}
	if (phead2 == nullptr ) {
		return phead2;
		}
	ListNode* pmergehead = nullptr;
	if (phead1->value <= phead2->value) {
		pmergehead = phead1;
		pmergehead->next = mergeNode (phead1->next, phead2);
		}
	if (phead1->value > phead2->value) { 
		pmergehead = phead2;
		pmergehead->next = mergeNode (phead2->next, phead1);
		}

		return pmergehead;
}
