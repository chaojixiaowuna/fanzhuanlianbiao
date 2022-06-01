给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	while(cur)
//	{
//		printf("%d",cur->val);
//		cur=cur->next;
//	}
//}
//
//struct ListNode* reverseList(struct ListNode* head){
//
//       struct ListNode* cur=head;
//       struct ListNode* tmp=head;
//       struct ListNode* prv=NULL;
//       while(tmp)
//       {
//           if(cur==head)
//           {
//           tmp=cur->next;
//           cur->next=NULL;
//           }
//		   if(tmp!=NULL)
//		   {
//			   prv=cur;
//           cur=tmp;
//           tmp=cur->next;
//           cur->next=prv;
//		   }
//       }
//       head=cur;
//       return head;
//}
//int main()
//{
//	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->val=1;
//	n2->val=2;
//	n3->val=3;
//	n4->val=4;
//	n5->val=5;
//	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
//	n4->next=n5;
//	n5->next=NULL;
//	tmp=reverseList(n1);
//	ListPrint(tmp);
//	return 0;
//}

//取原链表中节点，头插到newhead 中
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	while(cur)
//	{
//		printf("%d",cur->val);
//		cur=cur->next;
//	}
//}
//
//struct ListNode* reverseList(struct ListNode* head){
//	struct ListNode* newnode=NULL;
//	struct ListNode* cur=head;
//	struct ListNode* tmp=NULL;
//	while(cur)
//	{
//		newnode=(struct ListNode*)malloc(sizeof(struct ListNode*));
//		newnode->val=cur->val;
//		newnode->next=tmp;
//		tmp=newnode;
//		cur=cur->next;
//	}
//	return newnode;
//}
//int main()
//{
//	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->val=1;
//	n2->val=2;
//	n3->val=3;
//	n4->val=4;
//	n5->val=5;
//	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
//	n4->next=n5;
//	n5->next=NULL;
//	tmp=reverseList(n1);
//	ListPrint(tmp);
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
void ListPrint(struct ListNode* head)
{
	struct ListNode* cur=head;
	while(cur)
	{
		printf("%d",cur->val);
		cur=cur->next;
	}
}

struct ListNode* reverseList(struct ListNode* head){
	struct ListNode* next=head;
	struct ListNode* cur=head;
	struct ListNode* newhead=NULL;
	while(cur)
	{
		next=cur->next;
		cur->next=newhead;
		newhead=cur;
		cur=next;

	}
	return newhead;
}
int main()
{
	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val=1;
	n2->val=2;
	n3->val=3;
	n4->val=4;
	n5->val=5;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=NULL;
	tmp=reverseList(n1);
	ListPrint(tmp);
	return 0;
}