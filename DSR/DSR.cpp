// DSR.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include "stdio.h"
#include "malloc.h"
#include "msg.h"
#include "router.h"
#include "graph.h"
#include <iostream>
using namespace std;

int id = 0;
rreq msg;
void initmsg(rreq msg, char src, char des)
{
	id++;
	msg.id = id;
	msg.des = des;
	msg.src = src;
	msg.rou_rec[0] = src;
	msg.rou_rec[1] = '\0';
}
int find_router(char src, char des, char now)
{
	//todo
	return 0;
}
int main()
{
	graph g = init_graph();
	//初始化图
	int router_id;
	char src, des, now;
	router router[10];
	for (int i = 0; i < VERTICES_NUMBER; ++i)
	{
		router[i].init(i);
	}//初始化各路由器
	while (1)
	{
		cout << "请输入源mac地址" << endl;
		cin >> src;
		cout << "请输入目的mac地址" << endl;
		cin >> des;
		if (des == src)
		{
			cout << "源节点与目的节点相同！" <<endl ;
			break;
		}
		if (des > 'h'||des < 'a'||src > 'h'||src < 'a')
		{
			cout << "源节点或目的节点mac地址非法！" <<endl ;
			break;
		}
		now = src;
		initmsg(msg, src, des);
		router_id = src - 'a';
		if (router[router_id].find(des) == 0)
		{
			find_router(src, des, now);
		}
		else
		{
			cout << "Success!" << endl;
		}
		cout << msg.rou_rec << endl;
	}
    return 0;
}

