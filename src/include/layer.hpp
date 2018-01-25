#ifndef __LAYER_H__
#define __LAYER_H__

#include "node.hpp"
#include "common.hpp"


using namespace std;

class Layer
{
public:
	string _name;
	int _node_count;
	list<Node> _nodes;

	Layer (string name, int node_count);
};


#endif
