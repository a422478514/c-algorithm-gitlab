#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

//结构体
typedef struct node {
	int data;
	struct node *lchild, *rchild;
}NODE, *BTREE;

//函数声明
void preTravel(BTREE root);
BTREE init(void);
int rec_init(BTREE &parent);

//函数实现
void preTravel(BTREE root) {
	if (root != NULL) {
		printf("%d\n", root->data);
		//左子树
		preTravel(root->lchild);
		//右子树
		preTravel(root->rchild);
	}
	return;
}

BTREE root;
int ch;//全局变量

BTREE init(void) {
	BTREE root;
	root = (BTREE)malloc(sizeof(NODE));
	rec_init(root);
	return root;
}

int rec_init(BTREE &parent) {
	int ch;

	scanf("%d", &ch);
	//遇到0停止
	if (ch == 0) {
		parent = NULL;
		printf("该节点为空\n");
	}
	else {


		parent = (BTREE)malloc(sizeof(NODE));
		memset(parent, 0, sizeof(NODE));

		parent->data = ch;
		printf("已存入：%d\n", parent->data);
		rec_init(parent->lchild);
		rec_init(parent->rchild);
	}
	return 1;

}

int main(int argc, char const *argv[])


{
	FILE *fp = freopen("input.txt", "r", stdin);

	BTREE rooot;

	rooot = init();
	preTravel(rooot);
	//printf("%d\n", root->data);

	fclose(fp);
	return 0;
}