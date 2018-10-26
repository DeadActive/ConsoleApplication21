#pragma once
#include "Human.h"

//структура элемента списка
typedef Human* T;
typedef struct Node
{
	T data;
	Node * next;
};


//класс списка
class List
{
public:
	List();
	~List();
	void push(T data);
	T pop();
	void insert(T data, unsigned int n);
	Node * get_n(unsigned int n);
	void delete_first();
	void delete_last();
	void delete_n(unsigned int n);
	Human* find_byname(const char * str);
	List* filter_byadress(const char *str, char op);

	void delete_console();
	unsigned int length();
private:
	Node * head;
};

