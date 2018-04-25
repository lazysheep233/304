#pragma once
#define VERTICES_NUMBER 8
struct node_table {
	//节点路由表
	char mac;
	//目的节点mac地址
	char route[VERTICES_NUMBER];
	struct node_table *next;
};

node_table  init_table()
{
	node_table *head;
	head = (node_table *)malloc(sizeof(node_table));
	return *head;
}
class router {
private:
	int id;
	char mac;
	struct node_table table;

public:
	int init(int n)
	{
		id = n;
		mac = 'a' + n;
		table = init_table();
		return 1;
	}
	int find(char des)
	{
		//to do 
		return 0;
	}
	int add(char des,char route[])
	{
		//to to
		return 0;
	}
};

