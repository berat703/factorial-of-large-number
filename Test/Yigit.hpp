#ifndef YIGIT_HPP
#define YIGIT_HPP
#include <string>
#include "Dugum.hpp"
using namespace std;
class Yigit {
public:
	Yigit();
	void push(string A);
	void pop();
	string getVal();
	string getTop();
	void print()const;

private:
	Dugum *top;
	int counter;
};


#endif 