#ifndef LISTE_HPP
#define LISTE_HPP

#include <iostream>
using namespace std;
class Node {
public: 
	int data;
	Node *nextNode;
	Node *head;
	Node *temp;
	Node *newNode;
	Node *lastNode;
	Node();
	int getListSize();
	void bastanSil();
	int getNode(int index);
	string listAll();
	void addNode(int d);
	void addData_toIndex(int d,int index);
	void collectOn(int d, int index);
	void createLinkedList(int piece);
	~Node();
	

};






#endif