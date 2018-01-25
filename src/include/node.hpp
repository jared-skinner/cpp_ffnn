#ifndef __NODE_H__
#define __NODE_H__

#include "common.hpp"
#include "compuatation.hpp"

using namespace std;

typedef float (arithmetic_fn) (float x);

class Node
{
public:
	string _name;
	arithmetic_fn * _foward;
	arithmetic_fn * _backward;

	Node(string name, arithmetic_fn * foward, arithmetic_fn * backward);
	Node(string name);
};


#endif
