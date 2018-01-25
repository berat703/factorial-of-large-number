#include "Yigit.hpp"
#include "Dugum.hpp"
#include <iostream>
#include <string>
using namespace std;
Yigit::Yigit()
{
	this->top = NULL;
	this->counter=0;
}

void Yigit::push(string A)
{
	Dugum *p = new Dugum;
	p->data = A;
	if (top == NULL)
	{
		p->NEXT = top;
		top = p;
	}
	else
	{
		p->NEXT = top;
		top = p;

	}
	counter++;

}
void Yigit::pop()
{
	Dugum *p;
	p = top;
	top = top->NEXT;

	//cout << "SILINEN elemanlar:" << p->data << endl;
	delete p;
	counter--;
}

void Yigit::print()const
{
	Dugum *p = top;

	while (p != NULL)
	{
		cout << p->data << "  ";
		p = p->NEXT;
	}
	p = top;
	cout << endl;
}

string Yigit::getVal() {
	string silinenEleman;
	Dugum *p;
	p = top;
	top = top->NEXT;

	silinenEleman = p->data;
	delete p;
	counter--;
	return silinenEleman;
}
string Yigit::getTop() {
	Dugum *t = top;
	return t->data;
}
