#pragma once
#define ROU 6
//最大跳数

struct rreq {
	int id;
	char src;
	//源地址；
	char des;
	//目的地址；
	char rou_rec[ROU];
	//路由记录；
	int step = ROU;
};
