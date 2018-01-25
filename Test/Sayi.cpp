// C++ program to multiply two numbers represented
// as strings.
#include "Liste.hpp"
#include "Sayi.hpp"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

Sayi::Sayi() {

}


string Sayi::multiply(string num1, string num2)
{
	int n1 = num1.size();
	int n2 = num2.size();
	Node *mNode = new Node();
	if (n1 == 0 || n2 == 0)
		return "0";


	mNode->createLinkedList(n1 + n2);
	 
	int i_n1 = 0;
	int i_n2 = 0;

	for (int i = n1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';


		i_n2 = 0;
             
		for (int j = n2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';

			 
			int sum = n1*n2 + mNode->getNode(i_n1+i_n2) + carry;

			
			carry = sum / 10;

			mNode->addData_toIndex(sum % 10, i_n1 + i_n2);


			i_n2++;
		}

		
		if (carry > 0)

			mNode->collectOn(carry, i_n1 + i_n2);
            
		i_n1++;
	}


	int i = mNode->getListSize() - 1;
	while (i >= 0 && mNode->getNode(i) == 0)
		i--;

	if (i == -1)
		return "0";

	string s = "";
	while (i >= 0)
		s += std::to_string(mNode->getNode(i--));

	return s;
}


