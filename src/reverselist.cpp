#include <iostream>
using namespace std;

struct ListNode
{
	int m_value;
	ListNode* m_next;
};

ListNode* reverse (ListNode* pHead) {
	ListNode* pReversedHead = nullptr;
	ListNode* pNode = pHead;
	ListNode* pPre = nullptr;

	while(pNode != nullptr) { 
		ListNode* pNext = pNode->m_next;
		if (pNext == nullptr)
		{
			pReversedHead = pNode;
		}
		pNode->m_next = pPre;
		pPre = pNode;
		pNode = pNext;
	}

	return pReversedHead;

}

int main(int argc, char const *argv[])
{
	ListNode a0 = {1, nullptr};
	ListNode a1 = {2, &a0};
	ListNode a2 = {3, &a1};
	ListNode a3 = {4, &a2};
	ListNode* reverseHead = nullptr;
	ListNode* pHead = &a3;
	while (pHead != nullptr) {
	    cout << pHead->m_value << endl;
	    pHead = pHead->m_next;
	}
	reverseHead = reverse(&a3);
	while(reverseHead!=nullptr) {
		cout << reverseHead->m_value << endl;
		reverseHead = reverseHead->m_next;
	    /* code */
	}
	return 0;
}