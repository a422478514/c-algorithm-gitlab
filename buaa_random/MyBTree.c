#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct NODE
{
	ElementType data;
	struct NODE *left;
	struct NODE *right;
}Node,*PNode;

//创建一棵树
void init(PNode *bt){
	char val ;
	val = getchar();
	if(val == '#'){
		*bt = NULL;
	}else{
		*bt = (PNode)malloc(sizeof(Node));
		(*bt)->data = val;
		init(&(*bt)->left);
		init(&(*bt)->right);
	}
	return;
}

//先根遍历
void preOrderTraverse(PNode bt){
	if(bt != NULL){
		//访问当前结点
		printf("%c\n", bt->data);
		//遍历左子树
		preOrderTraverse(bt->left);
		preOrderTraverse(bt->right);
	}else{
		return;
	}
}

//中根遍历
void inOrderTraverse(PNode bt){
	if(bt != NULL){
		//遍历左子树
		inOrderTraverse(bt->left);
		//访问当前结点
		printf("%c\n", bt->data);
		inOrderTraverse(bt->right);
	}else{
		return;
	}
}

//后根遍历
void postOrderTraverse(PNode bt){
	if(bt != NULL){
		//遍历左子树
		postOrderTraverse(bt->left);
		postOrderTraverse(bt->right);
		//访问当前结点
		printf("%c\n", bt->data);
	}else{
		return;
	}
}

/*//层序遍历，未实现
void levelOrderTraverse(PNode bt){
	//需要借助队列
	if(bt!=null){
		//头结点入队
		enqueue(queue,bt);
		//从头结点开始出队
		while(isNotEmpty(queue)){
			PNode currentNode;
			//出队
			dequeue(queue,currentNode);
			//访问出队结点值
			visit(currentNode);
			//判断出队节点是否有左右子树，如果有，则入队
			if(currentNode->left)
				enqueue(bt->left);
			if(currentNode->right)
				enqueue(bt->right);
		}
	}
}

//后根遍历并压入栈，未实现
void postOrderTraverseAndReversePrint(PNode bt,Stack st){
if(bt != NULL){
		//遍历左子树
		postOrderTraverse(bt->left);
		postOrderTraverse(bt->right);
		//访问当前结点
		//printf("%c\n", bt->data);
		//当前遍历到的值入栈
		st.push(bt->data);
	}else{
		return;
	}
}*/

//求叶子节点
int leafCount(PNode bt){
	static int count = 0;
	if(bt!=NULL){
		//如果左右子树都为空，则为叶子节点
		if(bt->left == NULL && bt->right == NULL){
			//左右节点都为空则count++;
			count++;
		}else{
			leafCount(bt->left);
			leafCount(bt->right);
		}
	}
	return count;
}

//求树的最大高度
int treeHeight(PNode bt,int height){
	//定义一个保存当前遍历到的最大值的静态变量
	static int max = 0;
	if(bt!=NULL){
		//树高自增
		height++;
		//max设置为当前树高
		max = height;
		//如果还有子树，则max要和子树高作比较，如果还有子树，max应等于较高的哪个子树高
		int leftH = treeHeight(bt->left,height);
		if(max<leftH) max = leftH;
		int rightH = treeHeight(bt->right,height);
		if(max<rightH) max = rightH;
	}
	return max;
}

//统计某一层节点数，借助递归遍历可以实现，height是当前第几层
int countLevelNodes(PNode bt,int height,int n){
	static int count = 0;
	if(bt != NULL){
		//遍历到的当前结点如果是n，则count值自增
		if(height == n){
			count++;
			return 0;
		}
		//遍历左子树
		countLevelNodes(bt->left,height+1,n);
		//遍历右子树
		countLevelNodes(bt->right,height+1,n);
	}else{
		return 0;
	}
	return count;
}

//521##6##34##8##
int main(){
	PNode bt = NULL;
	printf("%s\n", "初始化树");
	init(&bt);
	printf("%s\n", "初始化树成功");
	printf("%s\n", "先根遍历");
	preOrderTraverse(bt);
	printf("%s\n", "中根遍历");
	inOrderTraverse(bt);
	printf("%s\n", "后根遍历");
	postOrderTraverse(bt);
	int count = leafCount(bt);
	printf("%d\n", count);
	int height = treeHeight(bt,0);
	printf("%d\n", height);
	//ten2Two(8);
	int levelCount = countLevelNodes(bt,1,3);
	printf("%d\n", levelCount);
	return 0;
}