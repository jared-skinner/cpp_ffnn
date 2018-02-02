#include "matrix.hpp"



Matrix::Matrix()
{
	_row_count = 0;
	_column_count = 0;
	_values = NULL;
}



Matrix::Matrix(int row_count, int column_count)
{
	_row_count = row_count;
	_column_count = column_count;

	// TODO: later we should use templates to allow matricies to be of other types
	_values = (double **) calloc(_row_count * _column_count, sizeof(double));



}


