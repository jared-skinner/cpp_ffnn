#include "connections.hpp"

Connections::Connections(int left_node_count, int right_node_count)
{
	_left_node_count = left_node_count;
	_right_node_count = right_node_count;

	_values = Matrix(_left_node_count, _right_node_count);
}


Connections Connections::operator*(Matrix X)
{
	// TODO: use real values
	Connections Y = Connections(1, 2);

	return Y;
}
