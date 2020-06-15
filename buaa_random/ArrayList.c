#include <stdio.h>
#include <stdlib.h>

#define LIST_MAX_SIZE  5


typedef int elementType;


typedef struct List 
{
	//初始数组
	elementType *data;
	//当前线性表大小
	int size;
}ArrayList,*PList;

//初始化列表
void initList(PList L){
	L->data = (elementType *)malloc(LIST_MAX_SIZE*(sizeof(elementType)));
	if(!L->data){
		printf("%s\n", "分配内存失败");
		return;
	}
	L->size = 0;

};
//往列表添加元素
void addEle(PList list,elementType e){
	if(list->size == LIST_MAX_SIZE){
		printf("%s\n", "list is full");
		return;
	}
	list->data[list->size] = e;
	list->size++;
}

void printList(PList list){
	if(isEmpty(list)){
		printf("%s\n", "列表空");
		return;
	}
	int i = 0;
	while(i<list->size){
		printf("%d\n", list->data[i]);
		i++;
	}
}

//判断列表是否为空
int isEmpty(PList list){
	if(list->size == 0){
		return 1;
	}
	return 0;
}

//查找列表最大值
elementType findMax(PList list){
	if(isEmpty(list)){
		return -1;
	}
	int i = 0;
	int max = -1;
	//找到最大元素就交换
	while(i++<list->size){
		if(list->data[i] > max){
			max = list->data[i];
		}
	}
	return max;
}

//翻转列表
void reverse(PList list){
	if(isEmpty(list)){
		printf("%s\n", "列表为空");
		return;
	}
	//只需交换前面的和后面的元素
	int i = list->size/2;
	while(i-->0){
		int temp = list->data[i];
		list->data[i] = list->data[list->size-i-1];
		list->data[list->size-i-1] = temp;
	}
}

int main(){
	PList list;
	initList(list);
	int i = 0;
	while(i < LIST_MAX_SIZE){
		int val;
		scanf("%d",&val);
		addEle(list,val);
		i++;
	}
	printList(list);
	elementType max = findMax(list);
	printf("%d\n", max);
	reverse(list);
	printList(list);
	return 0;
}