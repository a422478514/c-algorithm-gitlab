#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

//1.这样初始化树的某个结点的时候
typedef struct node
{
	int data;
	struct node *lchild,*rchild;
}NODE,* BTREE;

//你可以把指针看作地址。那么一级指针就是一个节点的地址，二级指针存放的节点地址的地址。
//通过一级指针可以找到一个节点（包括值和左右），二级指针可以找到节点。我们在这个函数中需要通过递归的方式构建整个树，
//其中每次构建一个节点的时候其实获得到的是一级指针。这个指针的值是系统分配我们无法决定，
//然后需要把根的左右节点的值指向构建的新的子树，为了调用方法返回后依然能够保留指针的位置，所以需要二级节点
void init(BTREE *root){
	int ch;
	scanf("%d",&ch);
	//遇到0停止
	if(ch == 0){
		*root = NULL;
		printf("该节点为空\n");
		return;
	}else{
		*root = (BTREE)malloc(sizeof(NODE));
		//root->lchild = (BTREE)malloc(sizeof(NODE));
		//root->rchild = (BTREE)malloc(sizeof(NODE));
		(*root)->data = ch;
		printf("已存入：%d\n", (*root)->data);
		init(&((*root)->lchild));
		init(&((*root)->rchild));
		return;
	}
}

void preTravel(BTREE root){
	if(root != NULL){
		printf("%d", root->data);
		//左子树
		preTravel(root->lchild);
		//右子树
		preTravel(root->rchild);
	}
}

void midTravel(BTREE root){
	if(root != NULL){
		//左子树
		preTravel(root->lchild);
		printf("%d", root->data);	
		//右子树
		preTravel(root->rchild);
	}
}


void afterTravel(BTREE root){
	if(root != NULL){
		//左子树
		preTravel(root->lchild);
		//右子树
		preTravel(root->rchild);
		printf("%d", root->data);
	}
}

//计算二叉树的深度
int calDepth(BTREE root,int depth){
	if(root != NULL){
		//当前高度+1
		depth+=1;
		//计算左边树高度
		int leftDepth = calDepth(root->lchild,depth);
		int rightDepth = calDepth(root->rchild,depth);
		return leftDepth > rightDepth ? leftDepth : rightDepth;
	}else{
		return depth;
	}
}

//统计二叉树的结点个数
int count(BTREE root,int s){
	if(root != NULL){
		s++;
		//遍历左子树
		s = count(root->lchild,s);
		//遍历右子树
		s = count(root->rchild,s);
		return s;
	}
	return s;
}
//统计二叉树的叶节点个数
int countLeafNodes(BTREE root,int s){
	if(root != NULL){
		if(root->lchild == NULL && root->rchild == NULL){
			s++;
		}
		//遍历左子树
		s = countLeafNodes(root->lchild,s);
		//遍历右子树
		s = countLeafNodes(root->rchild,s);
	}else{
		return s;
	}
}

//统计某层结点的个数  targetLevel　目标层级　　curLevel 当前层级  s　总数
int countLevelNodes(BTREE root,int targetLevel,int curLevel,int s){
	if(root != NULL){
		curLevel++;
		//如果已经遍历到指定层级，无需往下遍历
		if(targetLevel == curLevel){
			//总数+1
			s++;
		}else{
			//还没遍历到目标层级，继续遍历左右子树
			s = countLevelNodes(root,targetLevel,curLevel,s);
		}
		return s;
	}else{
		return s;
	}
}

//输出二叉树中指定叶子结点到根节点的路径
void searchPath(BTREE root,int arr[],int len,int key){
	if(root != NULL){
		//先放入数组中
		arr[len]=root->data;
		len++;
		if(key == root->data){
			for (int i = 0; i <= len; ++i)
			{
				printf("arr[%d]=%d\n", i,arr[i]);
			}
		}
		//查询左子树
		searchPath(root->lchild,arr,len,key);
		//查询右子树
		searchPath(root->rchild,arr,len,key);
	}
	//遍历到结尾回退一个元素
	arr[len] = 0;
	return;
}


int main(int argc, char const *argv[])
{
	int maxDepth,total,leafNodes,arr[10];
	BTREE root;
	printf("%d\n", root->lchild == NULL);
	init(&root);
	//前序遍历
	printf("前序遍历\n");
	preTravel(root);
	printf("\n");
	//中序遍历
	printf("中序遍历\n");
	midTravel(root);
	printf("\n");
	//后序遍历
	printf("后序遍历\n");
	afterTravel(root);
	printf("\n");
	//计算树的深度
	maxDepth = calDepth(root,0);
	printf("树的深度＝%d\n", maxDepth);
	//树的结点数
	total = count(root,0);
	printf("总结点数=%d\n",total);
	//树的叶子结点数
	leafNodes = countLeafNodes(root,0);
	printf("树的叶子结点数=%d\n", leafNodes);
	searchPath(root,arr,0,2);
	//printf("%d\n", root->data);
	return 0;
}