#include "matrix.hpp"



Matrix::Matrix()
{
	_values = NULL;
}



Matrix::Matrix(int rows, int columns)
{

	// TODO: later we should use templates to allow matricies to be of other types
	_values = (double **) calloc(rows * columns, sizeof(double));




	int i, j;


	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows; j++)
		{

		}
	}
}


