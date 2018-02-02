#ifndef __NETWORK_H_
#define __NETWORK_H_

#include "common.hpp"
#include "layer.hpp"
#include "matrix.hpp"

using namespace std;

class Network
{

	public:
		string _name;
		int _layer_count;
		int * _node_count;
		Layer * _layers;

		Network(string name, int layer_count, int * node_count);
		~Network();

		void foward_pass(Matrix X);
		void backward_pass();




};



#endif
