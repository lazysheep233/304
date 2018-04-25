#pragma once
#include "router.h"
struct graph {
	int id[VERTICES_NUMBER];
	int edge[VERTICES_NUMBER][VERTICES_NUMBER];
	int numV;
	int numE;
};
graph init_graph()
{
	graph g;
	g.numV = VERTICES_NUMBER;
	g.numE = 10;
	for (int i = 0; i < g.numV; i++)
	{
		g.id[i] = i;
	}
	for (int i = 0; i < g.numV; i++)
	{
		for (int j = 0; j < g.numV; j++)
		{
			g.edge[i][j] = 0;
		}
	}
	g.edge[0][1] = 1;
	g.edge[0][2] = 1;
	g.edge[2][3] = 1;
	g.edge[1][4] = 1;
	g.edge[3][4] = 1;
	g.edge[4][7] = 1;
	g.edge[3][6] = 1;
	g.edge[3][5] = 1;
	g.edge[5][6] = 1;
	g.edge[6][7] = 1;
	g.edge[1][0] = 1;
	g.edge[2][0] = 1;
	g.edge[3][2] = 1;
	g.edge[4][1] = 1;
	g.edge[4][3] = 1;
	g.edge[7][4] = 1;
	g.edge[6][3] = 1;
	g.edge[5][3] = 1;
	g.edge[6][5] = 1;
	g.edge[7][6] = 1;
	return g;
}