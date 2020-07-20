#include <iostream>

using namespace std;

class Matrix
{
	public:
		//void attrib();
		Matrix(unsigned int lines, unsigned int columns)
		{
		    _i = lines;
		    _j = columns;
		    _NofElements = lines * columns;
		    _element = new (nothrow) double[_NofElements];
		}
		~Matrix()
		{
		    delete[] _element;
		}
		void show()
		{
			int i=0, j=0, n=0;
			for(i=0 ; i<_i ; i++)
			{
				for(j=0 ; j<_j ; j++)
				{
					cout << '(' << i << ',' << j << ')' << '\t' << *(_element + n) << endl;
					n = n + 1;
				}
			}
		}
		void show(unsigned int i, unsigned int j)
		{
			int I=0, J=0, n=0;
			for(I=0 ; I<i ; I++)
			{
				for(J=0 ; J<j ; J++)
				{
					n = n + 1;
				}
			}
			cout << '(' << i << ',' << j << ')' << '\t' << *(_element + n) << endl;
		}
		void identity()
		{
			if(_i != _j)
			{
				cout << "ERROR! It is not a Squared Matrix!" << endl;
			}
			int i=0, j=0, n=0;
			for(i=0 ; i<_i ; i++)
			{
				for(j=0 ; j<_j ; j++)
				{
					if(i==j)
					{
						*(_element + n) = 1;
					}
					else
					{
						*(_element + n) = 0;
					}
					n = n + 1;
				}
			}
		}
	private:
		int _i, _j, _NofElements;
		double *_element;
};

int main()
{
	Matrix m(3, 3);
	m.identity();
	m.show();
	m.show(2, 2);
	m.~Matrix();

	return 0;
}
