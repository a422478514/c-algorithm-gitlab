#include<stdio.h>
#include<mm_malloc.h>

typedef struct node
{
	int data;
	struct node *link;	
}*LinkList;

//用数组初始化链表，k为数组大小
void init(LinkList list,int arr[],int k){
	//list作为头结点，
	//指向最后一个结点
	LinkList tear;
	tear = list;
	for (int i = 0; i < k; ++i)
	{
		//创建新节点保存元素
		LinkList node = (LinkList)malloc(sizeof(struct node));
		node -> data = arr[i];
		node -> link = NULL;
		//tear指向新节点
		tear->link = node;
		tear = tear->link;
	}
}

void travel(LinkList list){
	LinkList p = list->link;
	while(p!=NULL){
		printf("%d\n", p->data);
		p = p->link;
	}
}

void delete(LinkList list){
	//指向第一个数据额结点
	LinkList p = list->link;
	while(p!=NULL){
		//先输出
		printf("%d\n", p->data);
		//判断余下元素是否有和p一样的
		//
		LinkList cur = p;
		LinkList next = p -> link;
		while(next != NULL){
			//比较元素值
			printf("对比  cur=%d next=%d\n",cur->data,next->data );
			//相等则删除
			if(p -> data == next -> data){
				//删除next元素
				cur ->link = next->link;
				free(next);
			}
			//指向下个结点
			cur = next;
			next = next -> link;
		}
		p = p->link;
	}
}


int main(int argc, char const *argv[])
{
	int arr[10] = {1,3,6,2,3,
		6,7,8,9,1};	
	LinkList list = (LinkList)malloc(sizeof(struct node));
	init(list,arr,10);
	printf("before delete\n");
	travel(list);
	delete(list);
	printf("after delete\n");
	travel(list);
	return 0;
}