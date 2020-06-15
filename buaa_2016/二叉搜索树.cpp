#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>


typedef struct Node {
	int key;
	struct Node* parent;
	//ע������Ľڵ�������ڵ�ָ�� 
	struct Node *lchild, *rchild; 
}Node;

//��������
Node* createNode(int key);
Node* insert(Node* &root, int key);//�����в���һ���ڵ� 
Node* minimum(Node* root);//����������Сֵ�ڵ��λ�� 
Node* begin(Node* root);//���ظ����������������ʼ�ڵ��λ�� 
Node* next(Node* current);//����������������иýڵ����һ���ڵ��λ�� //����ýڵ��Ѿ������е����һ���ڵ㣬�򷵻�NULL 
Node* end(Node* root);//�������������һ���ڵ����һ���ڵ��λ�ã�Ҳ����NULL

Node* find_pos(Node* &root, int key);//�ҵ�Ҫ�����λ��



	Node* createNode(int key) {
		Node* temp = (Node*)malloc(sizeof(Node));  
		temp->key = key;
		temp->lchild = temp->rchild = temp->parent = NULL; 
		return temp;
	}

	
	Node* insert(Node* &root, int key) {  
		Node *p = find_pos(root, key);
		if (!p)
			return NULL;
		else
			return p;
	}

	
	Node* minimum(Node* root) {  
		Node *p = root;
		while (p->lchild)
			p = p->lchild;

		return p;
	}

	
	Node* begin(Node* root) {  
		return minimum(root); 
	}


	Node* next(Node* current) {    
		Node *p = current;
		if (p->rchild) {
			if (NULL == p->rchild->lchild)
				return p->rchild;
			Node *q = p->rchild;
			while (q->lchild)
				q = q->lchild;
			return q;

		}
		else if (p == p->parent->lchild)
			return p->parent;
			
		else if (p->parent == p->parent->parent->lchild)
			return p->parent->parent;
		else
			return NULL;

		/*
		if (p->key == p->parent->lchild->key)//pָ����Ǹ��׵�����
			return p->parent;
		if (p->key == p->parent->rchild->key) {//�Һ���
			if (p->parent->key == p->parent->parent->lchild->key)//p�ĸ�����p��үү������
				return p->parent;
			else
				return NULL;
		}
			*/

	}


	Node* end(Node* root) {   
		return NULL; 
	}

	Node* find_pos(Node* &root, int key) {
		Node *p = root;
		Node *new_node = createNode(key);
		if (!root) {
			root = new_node;
			return new_node;
		}
			

		if (key < root->key) {
			if (!root->lchild) {
				
				new_node->parent = root;
				root->lchild = new_node;
				return new_node;
			}
				
			else
				return find_pos(root->lchild, key);
		}
			
		if (key > root->key) {
			if (!root->rchild) {
				new_node->parent = root;
				root->rchild = new_node;
				return new_node;
			}
			else
				return find_pos(root->rchild, key);
		}
			
	}

	int main() {
		Node* root = NULL; //һ�ÿ���  
		int N;  
		printf("�����������");
		scanf("%d", &N);  
		for (int i = 0; i < N; i++) {  
			int x;      
			printf("�����%d������", i+1);
			scanf("%d", &x);   
			insert(root, x); 
		}
		
//����һ���������   
		for (Node* p = begin(root); p != end(root);p = next(p)) { 
			printf("%d ", p->key); 
		}   
		printf("\n"); 
		

		return 0;
	}
