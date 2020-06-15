#include<stdio.h>


typedef struct edge
{
	int adjvex;
	struct edge *next;
	
}ELink;

typedef struct ver
{
	int indegree;
	int data;
	ELink *link;
};

int main(int argc, char const *argv[])
{
	struct ver[10];
	//假设有拓扑排序
	int found = 0;
	//10次遍历，每次确定一个入度为0顶点
	for (int i = 0; i < 10; ++i)
	{
		//每次都设置为未找到能入度为0的
		found = 0;
		//寻找入度为0的
		for (int j = 0; j < 10; ++j)
		{
			if(ver[j].indegree == 0){
				//作为拓扑排序的一个元素输出，并减少该元素相关顶点的入度
				ELink p = ver[j].link;
				while(p!=null){
					ver[p->adjvex].indegree--;
					p = p ->link;
				}
				found = 1;
				break;
			}
		}
		//只要有一次找不到就返回0
		if(!found){
			return 0;
		}
	}
	return 1;
}