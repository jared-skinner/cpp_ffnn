#include "network.hpp"



Network::Network(string name, int layer_count, int * node_count)
{
	int i;

	_name = name;
	_layer_count = layer_count;
	_node_count = node_count;

	// validation
	// TODO: do we really need this?
	if (sizeof(_node_count) != _layer_count)
	{
		// failure
		// TODO: throw an exception
		return;
	}

	// allocate space for layers objects
	_layers = (Layer *) calloc(sizeof(_layer_count), sizeof(Layer));

	// initialize each layer
	for (i = 0; i < _layer_count; i++)
	{
		_layers[i] = Layer("name", _node_count[i]);
	}


}


Network::~Network()
{
	free(_layers);
}


void Network::foward_pass()
{


}


void Network::backward_pass()
{


}





