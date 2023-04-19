#include "Plotter.h"
#include <iostream>

template<typename T>
void print(T value) { std::cout << value; }


void Plotter::printHeader()
{
	print(char(47)); print(char(92));
	for (int i = 0; i < size-2; i++)
	{
		print(char(32));
	}
	print("\n");
}

double Plotter::delta(std::array<double, 100>& y)
{
	int y_size = sizeof(y) / sizeof(double);
	double y_max = -9999999; double y_min = 9999999;

	for (int i = 0; i < y_size; i++)
	{
		if (y[i] >= y_max)
		{
			y_max = y[i];
		}
		if (y[i] <= y_min)
		{
			y_min = y[i];
		}
	}
	return y_max - y_min;
}

void Plotter::plotGraphic(std::array<double, 100>& y)
{
	int y_size = sizeof(y) / sizeof(double);
	char c;
	printHeader();
	std::array<std::array<char, 100>,10> lines;
	double d = delta(y);
	print(d);

}
