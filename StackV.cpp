#include "StackV.h"
#include <iostream>
using namespace std;

int Stack::size()
{
	return num_elements;
}

void Stack::push(int z)
{
	data.push_back(z);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	if(data.
}
