#include "node.hpp"




Node::Node(string name, arithmetic_fn * foward, arithmetic_fn * backward)
{
	_name = name;

	// foward computation
	_foward = foward;

	// backkward computation
	_backward = backward;
}

Node::Node(string name)
{
	_name = name;

	// foward computation
	_foward = &sigmoid;

	// backkward computation
	_backward = &sigmoid_prime;
}


