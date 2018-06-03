#pragma once
#include <vector>
#include <cassert>

class Matrix
{
private:
	std::vector<double> data;
public:
	int rows;
	int columns;

	Matrix(int m, int n) : rows(m),columns(n)
	{
		data.reserve(m*n);
		for (int i=0;i<m*n;++i)
			data.push_back(0.0);
	}

	inline double& operator() (int z, int s)
	{
		assert(z>=1 && z<=rows && s>=1 && s<=columns);
		return data[(z-1)*columns+s-1];
	}

	inline const double& operator() (int z, int s) const
	{
		assert(z>=1 && z<=rows && s>=1 && s<=columns);
		return data[(z-1)*columns+s-1];
	}
};
