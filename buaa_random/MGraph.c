#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 20;//最大定点数
typedef enum {DG,DN,UDG,UDN} GraphKind;//图的种类，DG:有向图 DN：有向网 UDG：无向图 UDN：无向网

typedef struct ArcCell
{
	VRType adj;//顶点关系类型 1为相连，0为不相连
	VertexInfo *info;//边的其他信息
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct {
	VertexType vexs[MAX_VERTEX_NUM];
	AdjMatrix arcs;
	int vexNum,arcsNum;
	GraphKind kind;
}MGraph;
