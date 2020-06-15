#include<stdlib.h>
#include<stdio.h>


typedef struct node
{
	int data;
	struct node * next;
}Node,*LinkedList;

void initLinkedList(LinkedList list,int *arr ,int lenth){
	int i = 0;
	printf("initLinkedList\n");
	while(i<lenth){
		LinkedList newNode = (LinkedList)malloc(sizeof(Node));
		newNode->data = arr[i];
		newNode->next = NULL;
		list->next = newNode;
		list = list->next;
		i++;
	}
	printf("end\n");
}

void printNode(LinkedList list){
	//跳过头结点
	list = list->next;
	printf("print\n");
	while(list){
		printf("%d\n", list->data);
		list = list->next;
	}
	printf("print end\n");
}

void selectSort(LinkedList list){
	//每次循环都找出一个最小值，并插入
	while(list->next){
		//找出最小点的前驱
		LinkedList minPre = list;
		//临时指针
		LinkedList tempP,tempNext;
		//指向当前结点
		LinkedList p = list;
		while(p->next){
			//判断下个结点的值是否比当前结点小
			if(minPre->next->data > p->next->data){
				minPre = p;
			}
			p = p->next;
		}
		printf("min = %d\n", minPre->next->data);
		//交换minPre和第一个数据结点
		//记录list的下个结点,也是要交换的结点
		tempP = list->next;
		//记录要交换的结点的下个结点
		tempNext = tempP->next;
		//交换最小节点和第一个结点位置
		//list指向最小的结点
		list->next = minPre->next;
		//临时结点指向min的后继结点
		tempP->next = minPre->next->next;
		//最小节点的后继结点指向
		minPre->next->next = tempNext;
		//最小的结点的前驱结点指向list的下个结点
		minPre->next = tempP;
		//指向下一个结点
		list = list->next;
	}
}


int main(int argc, char const *argv[])
{
	int arr[] = {4,2,3,1,5,7,9};
	LinkedList list = (LinkedList)malloc(sizeof(Node));
	printNode(list);
	initLinkedList(list,arr,7);
	printNode(list);
	selectSort(list);
	printNode(list);
	return 0;
}