#include<stdio.h>
#include <stdlib.h>

#define maxsize 100;

typedef struct SqStack
{
	int data[100];
	int top;
}SqStack;

//初始化栈
void initStack(SqStack *st){
	st->top = -1;
}
//进栈s
void push(SqStack *st,int val){
	if(st->top==(99)){
		printf("%s\n", "栈已满！");
		return;
	}
	++st->top;
	st->data[st->top] = val;
}

//出栈
int* pop(SqStack *st,int *val){
	if(st->top < 0){
		printf("%s\n", "栈已空！");
	 return val;	
	}
	val = &st->data[st->top];
	st->top--;
	return val;
}

//打印栈元素
void printStack(SqStack *st){
	if(st->top < 0){
		printf("%s\n", "栈已空！");
	 return;	
	}
	int i = st->top-1;
	for(;i<0;i--){
		printf("%d\n", st->data[i]);
	}
}

int main(){
	SqStack *st ;
	int i = 0;
	initStack(&st);
	for(;i<10;i++){
		push(&st,i);
	}
	printStack(&st);
	return 0;
}
//不带头结点的删除
 p = l;
 l = p->next;
 free(p);
//带头结点的删除
 p = l->next;
 l ->next = p ->next;
 free(p);

//不带头结点的插入
p = malloc(sizeof(node));
p->data = val;
p->next = l;

//带头结点的插入
p = malloc(sizeof(node));
p->data = val;
p->next = l->next;
l->next = p;


visit(BTree bt,int i){
	if(bt){
		i++;
		max = i>max?i:max;
		visit(bt->left,++i);
		if(bt->left){
			visit(bt->left,i);
		}
		if(bt->right){
			visit(bt->right,i);
		}
	}	
}


ENQUEUE();
DEQUEUE();
ISEMPTY();

ENQUEUE(S s1,int val){
	if(STACKOVERFLOW(s1)){
		//队列满
	}
	PUSH(s1,val);
}
DEQUEUE(S s2){
	//如果S2是空的
	if(StackEmpty(s2)){
		//检查S1是不是空的
		if(!StackEmpty(s1)){
			//不是空的全部压入S2
			while(StackEmpty(s1)){
				int val = s1.pop();
				s2.push(val);
			}
			s2.pop();
		}else{
			printf("%s\n", "EMPTY");
		}
	}else{
		s2.pop();
	}
}

QueueEmpty(S s1,S s2){
	return ISEMPTY(s1) && S2.ISEMPTY(s2);
}



