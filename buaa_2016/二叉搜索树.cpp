#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>


typedef struct Node {
	int key;
	struct Node* parent;
	//注意该树的节点包含父节点指针 
	struct Node *lchild, *rchild; 
}Node;

//函数声明
Node* createNode(int key);
Node* insert(Node* &root, int key);//在树中插入一个节点 
Node* minimum(Node* root);//返回树中最小值节点的位置 
Node* begin(Node* root);//返回该树中序遍历序列起始节点的位置 
Node* next(Node* current);//返回中序遍历序列中该节点的下一个节点的位置 //如果该节点已经是序列的最后一个节点，则返回NULL 
Node* end(Node* root);//返回序列中最后一个节点的下一个节点的位置，也就是NULL

Node* find_pos(Node* &root, int key);//找到要插入的位置



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
		if (p->key == p->parent->lchild->key)//p指向的是父亲的左孩子
			return p->parent;
		if (p->key == p->parent->rchild->key) {//右孩子
			if (p->parent->key == p->parent->parent->lchild->key)//p的父亲是p的爷爷的左孩子
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
		Node* root = NULL; //一棵空树  
		int N;  
		printf("输入结点个数：");
		scanf("%d", &N);  
		for (int i = 0; i < N; i++) {  
			int x;      
			printf("输入第%d个数：", i+1);
			scanf("%d", &x);   
			insert(root, x); 
		}
		
//进行一次中序遍历   
		for (Node* p = begin(root); p != end(root);p = next(p)) { 
			printf("%d ", p->key); 
		}   
		printf("\n"); 
		

		return 0;
	}
