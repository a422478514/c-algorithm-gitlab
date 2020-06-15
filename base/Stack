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
void pop(PStack s,int * e){
	if(isEmpty(s)){
		printf("%s\n", "栈空");
		return;
	}
	s->top--;
	*e = s->base[s->top];
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

//十进制转二进制
void ten2Two(int val){
	if(val < 0){
		printf("%s\n", "请输入非负整数");
		return;
	}
	if(val <= 1){
		return;
	}
	PStack s = (PStack) malloc(sizeof(Stack));
	init(s);
	while(val > 0){
		int bit = val%2;
		push(s,bit);
		val = val/2;
	}
	//清栈
	s->top--;
	while(s->top>=0){
		printf("%d", s->base[s->top]);
		s->top--;
	}
	return;
}

void test(){
	PStack s = (PStack) malloc(sizeof(Stack));
	init(s);
	int i = 0;
	while(i < 10){
		push(s,i);
		i++;
	}

	printf("%s   %d\n","当前栈大小：", stackLength(s));
	printStack(s);
	while(i-->0){
		int val;
		pop(s,&val);
		printf("%s  %d\n","当前pop出的栈值  ", val);
		printStack(s);
	}
	return;
}

int main(){
	ten2Two(8);
	return 0;
}

