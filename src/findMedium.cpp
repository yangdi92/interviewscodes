#include <iostream>
using namespace std;

struct ListNode
{
	int nodeValue;
	ListNode* nextNode;
};

ListNode* findMediumNode(ListNode* pHead){
	//cout << pHead<<endl;
	if(pHead==nullptr)
		return nullptr;
	//cout << pHead<<endl;
	ListNode* pAhead = pHead;
	ListNode* pBhind = pHead;
	while(pAhead->nextNode!=nullptr) {
		pAhead = pAhead->nextNode;
		if(pAhead->nextNode!=nullptr){
			pAhead = pAhead->nextNode;
			pBhind = pBhind->nextNode;
		}else{
			break;
		}
		//cout << pAhead->nodeValue<<endl;
	    /* code */
	}

	return pBhind;
}

int main(int argc, char const *argv[])
{
	ListNode a0 = {1,nullptr};
	ListNode a1 = {2,nullptr};
	a0.nextNode = &a1;
	ListNode a2 = {3,nullptr};
	a1.nextNode = &a2;
	ListNode* pMedium = nullptr;
	ListNode* pHead = &a0;
	//ListNode* pMedium = nullptr;
	pMedium = findMediumNode(pHead);
	if(pMedium!=nullptr)
		cout<<pMedium->nodeValue<<endl;
	//cout << pMedium<<endl;
	return 0;
}

