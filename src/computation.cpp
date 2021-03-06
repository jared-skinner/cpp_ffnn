#include "compuatation.hpp"


float sigmoid(float x)
{
	return 1 / (1 + std::exp(-x));
}


float sigmoid_prime(float x)
{
	return sigmoid(x) * (1 - sigmoid(x));
}
