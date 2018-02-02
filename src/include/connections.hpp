#ifndef __CONNECTIONS_H_
#define __CONNECTIONS_H_

#include "common.hpp"
#include "matrix.hpp"

class Connections
{
	public:
		int _left_node_count;
		int _right_node_count;
		Matrix _values;

		Connections(int left_node_count, int right_node_count);

		// this ammounts to matrix multiplication
		Connections operator*(Matrix X);
};


#endif
