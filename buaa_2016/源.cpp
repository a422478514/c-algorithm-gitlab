#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

//�ṹ��
typedef struct node {
	int data;
	struct node *lchild, *rchild;
}NODE, *BTREE;

//��������
void preTravel(BTREE root);
BTREE init(void);
int rec_init(BTREE &parent);

//����ʵ��
void preTravel(BTREE root) {
	if (root != NULL) {
		printf("%d\n", root->data);
		//������
		preTravel(root->lchild);
		//������
		preTravel(root->rchild);
	}
	return;
}

BTREE root;
int ch;//ȫ�ֱ���

BTREE init(void) {
	BTREE root;
	root = (BTREE)malloc(sizeof(NODE));
	rec_init(root);
	return root;
}

int rec_init(BTREE &parent) {
	int ch;

	scanf("%d", &ch);
	//����0ֹͣ
	if (ch == 0) {
		parent = NULL;
		printf("�ýڵ�Ϊ��\n");
	}
	else {


		parent = (BTREE)malloc(sizeof(NODE));
		memset(parent, 0, sizeof(NODE));

		parent->data = ch;
		printf("�Ѵ��룺%d\n", parent->data);
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