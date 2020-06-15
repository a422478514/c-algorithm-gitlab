#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 20;

typedef enum {unvisited,visited} VisitIf;
//弧信息
typedef struct EBox
{
	VisitIf mark;//是否访问过该边
	int tail,head;//改边连接的首尾顶点
	EBox *tailNext,*headNext;//分别指向这两个顶点的下一条边
	InfoType *info;//该边信息
}EBox,*PEBox;
//顶点信息
typedef struct VNode
{
	VertexType data;//顶点的值
	PEBox firstedge;//第一条边
}VNode;

typedef struct 
{
	VNode adjmulist[MAX_VERTEX_NUM];
	int vexnum,edgenum;
}AMLGraph;