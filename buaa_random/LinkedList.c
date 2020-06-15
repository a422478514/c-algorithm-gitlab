#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;//数据域
	struct Node *next;
}LNode,*PNode;

//初始化一个单链表
PNode initList(){
	int i = 1;
	//分配一个大小的Node的内存
	PNode L = (PNode)malloc(sizeof(LNode));
	//尾结点指向头结点
	PNode tail = L;
	//分配一个L作为头结点
	L->data = 0;
	while(i<10){
		PNode next = (PNode)malloc(sizeof(LNode));
		int val;
		scanf("%d",&val);
		//给新节点赋值
		next->data = val;
		//尾节点next指向新节点
		tail->next = next;
		//尾节点重新指向最后一个结点
		tail = next;
		i++;
	};
	return L;
}
//打印列表
void printList(PNode list){
	//临时指针指向list
	if(!list->next){
		printf("%s\n", "empty list");
		return;
	}
	PNode p = list->next;
	while(p){
		printf("%d\n", p->data);
		p=p->next;
	}
}
//单链表翻转
void inverse(PNode list){
	//越过头结点
	PNode currentNode = list->next->next;
	PNode prevNode = list->next;
	prevNode->next = NULL;
	while(currentNode){
		//保存下一个结点
		PNode nextNode = currentNode->next;
		//翻转当前结点的指针
		currentNode->next = prevNode;
		//重置前结点指针，和当前结点指针
		prevNode = currentNode;
		currentNode = nextNode;
	}
	//重置头结点
	list->next = prevNode;
}
//分类，oddList放奇数，evenList放偶数
void assort(PNode oList,PNode oddList,PNode evenList){
	PNode currentNode = oList->next;
	while(currentNode){
		if(currentNode->data%2 == 0){
			//新节点
			PNode node = (PNode) malloc(sizeof(currentNode));
			node->data = currentNode->data;
			//首元结点
			PNode headNode = oddList->next;
			//头插法
			node->next = headNode;
			oddList->next = node;
		}else{
			//新节点
			PNode node = (PNode) malloc(sizeof(currentNode));
			node->data = currentNode->data;
			//首元结点
			PNode headNode = evenList->next;
			//头插法
			node->next = headNode;
			evenList->next = node;
		}
		currentNode = currentNode->next;
	}
}

//升序返回1，降序返回-1，无序返回0
int isOrder(PNode list){
	if(isEmpty(list)){
		printf("%s\n", "空");
		return 0;
	}
	//初始状态
	int status = 2;
	PNode currentNode = list->next;
	while(currentNode){
		//比较当前结点和下一结点的值
		PNode nextNode = currentNode->next;
		if(nextNode){
			printf("%s\n", "当前结点：");
			printf("%d\n", currentNode->data);
			printf("%s\n", "下一结点：");
			printf("%d\n", nextNode->data);
			//如果当前结点值大于下一结点
			if(currentNode->data > nextNode->data){
				if(status == 2){
					//初始为降序
					status = -1;
				}else{
					//如果前面的是升序，当前是降序，则为无序，无序可以立即返回
					if(status == 1){
						status = 0;
						return 0;
					}
				}
			}
			//如果当前结点值小于下一结点值
			if(currentNode->data < nextNode->data){
				if(status == 2){
					//初始为升序
					status = 1;
				}else{
					if(status == -1){
						status = 0;
						return 0;
					}
				}
			}
			printf("%s\n", "状态");
			printf("%d\n", status);
		}
		currentNode = nextNode;
	}
	//如果最终status==2，则是相等列表，默认返回1
	if(status == 2) return 1;
	return status;
}
//查找链表中最大的那个结点
void findMax(PNode list,PNode max){
	if(isEmpty(list)){
		printf("%s\n", "list is empty");
		max = NULL;
		return;
	}
	max = list->next;
	PNode currentNode = list->next->next;
	while(currentNode){
		if(max->data < currentNode->data){
			max = currentNode;
		}
		currentNode = currentNode->next;
	};
}
//链表是否为空
 int isEmpty(PNode list){
	if(list->next){
		return 0;
	}
	return 1;
}

int main(){
	PNode L = initList();
	printList(L);
	inverse(L);
	printList(L);
	PNode max = L->next;
	findMax(L,max);
	printf("%d\n", max->data);
	int status = isOrder(L);
	printf("%d\n", status);
	//oddList
	PNode oddList = (PNode) malloc(sizeof(PNode));
	PNode evenList = (PNode) malloc(sizeof(PNode));
	assort(L,oddList,evenList);
	printList(oddList);
	printList(evenList);
}