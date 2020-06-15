#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int data;
	struct node *lchild,*rchild;
}Node,*BTree;

typedef struct qnode{
	BTree data;
	struct qnode *next;
}LNode,*Queue;

int isListEmpty(Queue q);
int isListFull(Queue q);
//入队
int enq(Queue q,BTree e){
	if(isListFull(q)){
		printf("队列已满！\n");
		return 0;
	}
	//挂在队列最后
	while(q->next){
		q = q->next;
	}
	//创建新节点
	Queue newNode = (Queue)malloc(sizeof(LNode));
	if(!newNode){
		printf("内存已满！入队失败！\n");
		return 0;
	}
	newNode->data = e;
	newNode->next = NULL;
	q->next = newNode;
	return 1;
}
//出队
int deq(Queue *q,BTree *e){
	//出队第一个元素
	if(isListEmpty(*q)){
		printf("出队失败，队列已空！\n");
	}else{
		//指向首结点
		Queue freeNode = (*q)->next;
		*e = freeNode->data;
		//头指针越过首结点指向下个结点
		(*q)->next = freeNode->next;
		//释放freeNode
		free(freeNode);
	}
}
//是否满
int isListFull(Queue q){
	int i = 0;
	while(q){
		q = q->next;
		i++;
	}
	return 0;
}
//是否空
int isListEmpty(Queue q){
	printf("isListEmpty %d\n",q->next->data->data);
	return q->next == NULL ? 1 : 0;
}

void init(BTree *tree){
	//获取输入
	int input = 0;
	input = getchar();
	//遇到#认为结束
	if(input == 35){
		//当前结点输入结束
		*tree = NULL;
	}else{
		//创建新结点
		*tree = (BTree)malloc(sizeof(Node));
		//保存值
		(*tree)->data = input;
		//创建左结点
		init(&((*tree)->lchild));
		//创建右结点
		init(&((*tree)->rchild));
	}
}

void preOrder(BTree tree){
	if(tree){
		printf("%c\n", tree->data);
		preOrder(tree->lchild);
		preOrder(tree->rchild);
	}
}
void printList(Queue q){
	printf("printList start\n");
	while(q->next){
		q = q->next;
		printf("%d", q->data->data);
	}
	printf("printList over\n");
}
//树转数组，用完全二叉树的方式存储，可惜没实现
void treeToArr(BTree tree,int *arr){
	int i = 0;
	Queue q = (Queue)malloc(sizeof(LNode));
	Queue qdata;
	q->next = NULL;
	enq(q,tree);
	//保存值
	arr[0] = tree->data;
	qdata = q->next;
	//打印q
	// while(q){
	// 	printf("q = %d\n",q->data->data);
	// 	q=q->next;
	// }
	printList(q);
	//打印
	printf("sssssss\n");
	while(!isListEmpty(q)){
		printf("遍历树 \n");
		BTree e;
		deq(&q,&e);
		printf("e data %d\n", e->data);
		//进之前　保存数据
		if(tree->lchild){
			arr[2*i+1] = tree->lchild->data;
			enq(q,tree->lchild);
		}
		if(tree->rchild){
			arr[2*i+2] = tree->rchild->data;
			enq(q,tree->rchild);
		}
		i++;
	}
}

//打印祖先结点路径
void path(int *arr,int item){
	int path[5]={-1,-1,-1,-1,-1};
	int k =0;
	int i = -1;
	//找到目标结点下标
	for (i = 0; item != *(arr+i) && item; ++i);
	//计算父结点->祖先
	printf("i -> %d\n", i);
	while(i){
		if(i%2 == 0){
			path[k] = (i-1)/2;	
		}else{
			path[k] = i/2;	
		}
		i = path[k];
		k++;
	}
	//输出路径
	for (int j = 0; path[j] != -1; ++j)
	{
		printf("%d ->", path[j]);
	}

}

int main(int argc, char const *argv[])
{
	int arr[100],item;
	for (int i = 0; i < 100; ++i)
	{
		arr[i] = 0;
	}
	BTree bt;
	init(&bt);
	preOrder(bt);
	//把树作为完全二叉树存到数组里，不存在的结点 
	//treeToArr(bt,arr);
	//查找结点的下标
	path(arr,item);

	return 0;
}