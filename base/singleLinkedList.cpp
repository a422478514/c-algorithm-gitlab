#include <iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *pNext;
}NODE,*PNODE;

//创建一个链表
PNODE createLinedList(void){
		PNODE list;
		PNODE pHead = (PNODE)malloc(sizeof(NODE));
		pHead->data = 99;

		if(pHead == NULL){
			printf("%s\n","分配内存失败" );
			return 0;
		}else{
			//尾节点
			PNODE pTail=pHead;
			//头结点指向Null
			pHead->pNext=NULL;
   			
   			//for循环生成结点
   			for(int i = 0 ; i < 10 ;){
   				++i;
   				printf("%d\n",i);
   				//初始化新节点
   				PNODE p = (PNODE)malloc(sizeof(NODE));
   				if(p == NULL){
					printf("%s\n","分配内存失败" );
					return 0;
				}
   				p->data = i;
   				//尾节点next指向新节点
   				pTail->pNext = p;
   				//尾节点next指向NULL
   				p->pNext = NULL;
   				//尾节点重新赋值
   				pTail = p;
   			}

		}
	return pHead;
}

//添加一个元素
PNODE addElementToList(PNODE p,int index,int val){
	//如果p为空
	if(!p){
		return p;
	}
	if(index<=0){
		printf("%s\n", "index参数有误");
		return NULL;
	}
	//指向第一个结点啊
	PNODE cur = p->pNext;
	while(cur&&index){
		cur = p->pNext;
 		index--;
	}
	//生成一个新node
	PNODE newNode = (PNODE)malloc(sizeof(NODE));
	
	newNode->pNext = cur->pNext;
	cur->pNext = newNode;
	newNode->data = val;
	return p;
}


//添加一个元素
PNODE removeElementToList(PNODE p,int index){
	//如果p为空
	if(!p){
		return p;
	}
	if(index<=0){
		printf("%s\n", "index参数有误");
		return NULL;
	}
	//指向第一个结点啊
	PNODE cur = p->pNext;
	while(cur&&index){
		cur = p->pNext;
 		index--;
	}
	//PNODE next = cur->pNext;
	cur->pNext = cur->pNext->pNext;
	//free(next);
	return p;
}

int main(){
	PNODE node = createLinedList();
	PNODE cur = node;
	while(cur){
		printf("%d\n",cur->data);
		cur = cur->pNext;
	}
	addElementToList(node,3,333);
	cur = node;
	while(cur){
		printf("%d\n",cur->data);
		cur = cur->pNext;
	}

	removeElementToList(node,3);
	cur = node;
	while(cur){
		printf("%d\n",cur->data);
		cur = cur->pNext;
	}
	
	return 0;
}