// DSR.cpp : �������̨Ӧ�ó������ڵ㡣

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
	//��ʼ��ͼ
	int router_id;
	char src, des, now;
	router router[10];
	for (int i = 0; i < VERTICES_NUMBER; ++i)
	{
		router[i].init(i);
	}//��ʼ����·����
	while (1)
	{
		cout << "������Դmac��ַ" << endl;
		cin >> src;
		cout << "������Ŀ��mac��ַ" << endl;
		cin >> des;
		if (des == src)
		{
			cout << "Դ�ڵ���Ŀ�Ľڵ���ͬ��" <<endl ;
			break;
		}
		if (des > 'h'||des < 'a'||src > 'h'||src < 'a')
		{
			cout << "Դ�ڵ��Ŀ�Ľڵ�mac��ַ�Ƿ���" <<endl ;
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

