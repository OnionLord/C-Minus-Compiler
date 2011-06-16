#ifndef NODE_H
#define NODE_H

/* ����������Ȩ������ */
typedef enum { TYPE_CONTENT, TYPE_INDEX, TYPE_OP } NodeEnum;

/* ������ */
typedef struct {
	int name; /* ���������� */
	int num; /* ����Ԫ���� */
	struct NodeTag * node[1]; /* ����Ԫ��ַ ����չ */
} OpNode;
  
typedef struct NodeTag {
	NodeEnum type; /* ��������� */
	/* Union ���������һ����Ա */
	union {
		int content; /* ���� */
		int index; /* ���� */
		OpNode op; /* ���������� */
	};
} Node;

extern int var[26];

#endif
