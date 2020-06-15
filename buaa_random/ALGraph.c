#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 20;

typedef struct ArcNode
{
	int adjvex;//该弧锁指向相邻接点的位置
	struct ArcNode *nextarc;//下条弧的指针
	InfoType *infoType;//弧的其它信息
}ArcNode;

typedef struct VNode
{
	VertexType data;//结点信息
	ArcNode *firstarc;//该结点第一条弧
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct 
{
	AdjList list;//图的顶点列表
	int vertexNum,arcNum;//图的定点数和弧数
	int kind;//图的类型
}ALGraph;



