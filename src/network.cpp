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
	_layers = (Layer *) calloc(sizeof(_layer_count), 1);

	// initialize each layer
	for (i = 0; i < _layer_count; i++)
	{
		_layers[i] = Layer("name", _node_count[i]);
	}


}


Network::~Network()
{
	int i;

	for (i = 0; i < _layer_count; i++)
	{
		_layers[i].~Layer();
	}

	free(_layers);
}


void Network::foward_pass(Matrix X)
{
	int i;

	// row count of input matrix should match row count of first connectivity
	// matrix
	if (X._row_count != _node_count[0])
		return; // TODO: throw an exception

	for (i = 0; i < _layer_count; i++)
	{
		//X = X * _layers[i]

		// apply activation function;
	}
}


void Network::backward_pass()
{


}





