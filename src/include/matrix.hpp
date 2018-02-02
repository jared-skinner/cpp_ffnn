#ifndef __MATRIX_H_
#define __MATRIX_H_

#include "common.hpp"



class Matrix
{
	public:
		double ** _values;
		int _row_count;
		int _column_count;

		Matrix();
		Matrix(int _row_count, int _column_count);

		// TODO
		//Matrix operator+();
		//Matrix operator*();
		//Matrix inverse();
		//Matrix transpose();
};








#endif
