#include<iostream>
#include<list>
using namespace std;


struct ListLNode
{
	int value;
	*ListLNode m_Next;

};

*ListLNode findKthToTail(ListLNode* p_head,unsigned int k){
	if(p_head==nullptr||k==0)
		return nullptr;
	ListLNode* pAhead = p_head;
	ListLNode* pBhind = p_head;

	for(unsigned int i=0;i<k-1;i++){
		if(pAhead->m_Next!=nullptr)
			pAhead = pAhead->m_Next;
		else
			return nullptr;
	}

	while(pAhead!=nullptr) {
	    pAhead = pAhead->m_Next;
	    pBhind = pBhind->m_Next;
	}

	return pBhind;


}

int main(int argc, char const *argv[])
{
	list<int> mylist;
	return 0;
}
