#include "layer.hpp"

using namespace std;

Layer::Layer (string name, int node_count)
{
	int i;
	list<Node>::iterator it;

	_name = name;
	_node_count = node_count;

	it = _nodes.begin();

	// add nodes to array
	for (i = 0; i < _node_count; i++)
	{
		// TODO: clean up name.  I am not sure where I want to handle this
		_nodes.insert(it, Node("node"));

		it++;
	}
}

Layer::~Layer ()
{


}



