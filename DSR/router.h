#pragma once
#define VERTICES_NUMBER 8
struct node_table {
	//�ڵ�·�ɱ�
	char mac;
	//Ŀ�Ľڵ�mac��ַ
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

