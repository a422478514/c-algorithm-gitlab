#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10

typedef int ElementType;

typedef struct{
	ElementType *base;
	int bottom;
	int top;
}Stack,*PStack;

//初始化栈
void init(PStack s){
	s->base = (ElementType *)malloc(sizeof(ElementType)*MAX_STACK_SIZE);
	s->bottom = 0;
	s->top = 0;
}

//进栈
void push(PStack s,ElementType e){
	if(isFull(s)){
		printf("%s\n", "栈满");
		return;
	}
	s->base[s->top] = e;
	s->top++;
}

//出栈
int pop(PStack s){
	if(isEmpty(s)){
		printf("%s\n", "栈空");
		return -1;
	}
	s->top--;
	return s->base[s->top]; 
}
//是否空
int isEmpty(PStack s){
	if(s->top == s->bottom){
		return 1;
	}
	return 0;
}
//是否满
int isFull(PStack s){
	if(stackLength(s) == MAX_STACK_SIZE){
		return 1;
	}
	return 0;
}

//栈大小
int stackLength(PStack s){
	return s->top - s->bottom;
}

//打印stack
void printStack(PStack s){
	//从栈底到栈顶
	if(!isEmpty(s)){
		int i = 0;
		int length = stackLength(s);
		while(i<length){
			printf("%d\n", s->base[i]);
			i++;
		}
	}
}

//进队是先进s1，如果s1满则刷到s2
void enqueue(PStack s1,PStack s2,ElementType e){
	if(queueFull(s1,s2)){
		printf("%s\n", "队列满");
		return;
	}
	//入s1
	push(s1,e);
}

//出队
int dequeue(PStack s1,PStack s2){
	if(queueEmpty(s1,s2)){
		printf("%s\n", "队列空");
		return 0;
	}
	//从s2出
	int val = pop(s2);
	return val;
}

//队列是否为空
int queueEmpty(PStack s1,PStack s2){
	if(isFull(s1) && isEmpty(s2)){
		stackCopy(s1,s2);
	}
	return isEmpty(s1) && isEmpty(s2);
}

//队列是否满
int queueFull(PStack s1,PStack s2){
	//如果s1满则要看看s2满不满
	if(isFull(s1)){
		if(isEmpty(s2)){
			//如果s1满，s2空则要把s1倒入s2，返回空
			stackCopy(s1,s2);
			return 0;
		}else{
			//如果s1满，s2不空，则返回满
			return 1;
		}
	}else{
		//s1不满直接返回不满
		return 0;
	}
}

//s1复制到s2
void stackCopy(PStack s1,PStack s2){
	int i = 0;
	while(i < MAX_STACK_SIZE){
		int val;
		val = pop(s1);
		push(s2,val);
		i++;
	}
	return;
}

//测试队列
void testQueue(){
	PStack s1 = (PStack) malloc(sizeof(Stack));
	PStack s2 = (PStack) malloc(sizeof(Stack));
	init(s1);
	init(s2);
	int i = 0;
	while(i < 20){
		enqueue(s1,s2,i);
		printf("%s   %d\n", "进队元素为",i);
		i++;
	}
	while(i>0){
		int val;
		val = dequeue(s1,s2);
		printf("%s   %d\n", "出队元素为",val);
		i--;
	}
}

int main(){
	testQueue();
	return 0;
}

