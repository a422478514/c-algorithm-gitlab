#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 20;

typedef struct ArcNode
{
	int tailVex,headVex;//该弧的弧尾和弧头指向顶点的位置
	struct ArcNode tailLink,headLink;//具有相同弧头或弧尾的下一条弧
	InfoType * info;
}ArcNode;

typedef struct VNode
{
	VertexData data;//弧头值
	ArcNode *firstIn,*firstOut;//第一条入弧或者第一条出弧
}VNode;

typedef struct {
	VexNode xlist[MAX_VERTEX_NUM];//所有结点
	int vexnum,arcnum;//头结点数量和边数量
}OLGraph;

