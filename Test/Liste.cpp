#include "Liste.hpp"
#include <string>

Node::Node() {

	nextNode = NULL;
	head = NULL;

}

void Node::addNode(int d) {
	temp = NULL;
	newNode = new Node();
	newNode->data = d;
	temp = head;
	if (temp == NULL) {
		head = newNode;
	}
	else {
		while (temp->newNode != NULL) {
			temp=temp->nextNode;
			temp->nextNode = newNode;
		}
		lastNode = newNode;
	}
}

string Node::listAll() {
	string s;
	temp = head;
	while (temp != NULL) {
		s += to_string(temp->data);
		temp = temp->nextNode;
		
	}
	return s;
}

int Node::getNode(int index) {//index i istenen node u getirir
	temp = head;
	for (int i = 0; i <= index;i++) {
		if (i == index) {
			return temp->data;
		}
		
		temp = temp->nextNode;

	}
	return 0;
}

void Node::createLinkedList(int piece) { // baslangicta carpma iþlemine gore liste olusturur.

	for (int i = 0; i < piece; i++) {
		temp = NULL;
		newNode = new Node();
		newNode->nextNode = NULL;
		newNode->data = 0;
		temp = head;
		if (temp == NULL) {
			head = newNode;
		}
		else {
			while (temp->nextNode != NULL) {
				temp = temp->nextNode;
			}
			temp->nextNode = newNode;
		}
		lastNode = newNode;
	}


}


void Node::collectOn(int d, int index) {  // eðer result[] += carry tarzi uzerine toplama iþlemi varsa bu sýnýf kullanýlýr
	temp = head;
	for (int i = 0; i <= index; i++) {
		if (i == index) {
			temp->data = data+d;
		}
		temp = temp->nextNode;

	}
}

void Node::addData_toIndex(int d, int index) { //bos datanýn oldugu yere yeni data eklenicekse bu kullanýlýr
	temp = head;
	for (int  i= 0; i <=index; i++) {
		if (i == index) {
			temp->data = d;
		}
		temp = temp->nextNode;

	}
}

int Node::getListSize() {//index i istenen node u getirir
	temp = head;
	int count = 1;
	while (temp->nextNode != NULL) {
		count++;
		temp = temp->nextNode;
	}
	return count;
}

void Node::bastanSil() {

	temp = head;
	if (temp == NULL) { return; }
	else
	{

		temp = temp->nextNode;
		head = temp;
	}
}