#pragma once
#define ROU 6
//�������

struct rreq {
	int id;
	char src;
	//Դ��ַ��
	char des;
	//Ŀ�ĵ�ַ��
	char rou_rec[ROU];
	//·�ɼ�¼��
	int step = ROU;
};
