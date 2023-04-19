#include "Plotter.h"
#include <iostream>
#define y_Axis_Size = 10
template<typename T>
void print(T value) { std::cout << value; }


void Plotter::printHeader()
{
	print(char(32)); print('^'); print("\n");
	print(char(47)); print(char(196)); print(char(92));
	for (int i = 0; i < size-2; i++)
	{	
		print(char(32));
	}
	print("\n");
}

void Plotter::printXaxis()
{
	print(char(32)); print(char(197));
	for (int i = 0; i < 100; i++)
	{
		print(char(196));
	}
	print(">");
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

	std::array<std::array<char, 100>, 20> lines;
	double d = delta(y);
	//print(d);
	int y_axis_size = lines.size();
	for (int i = y_axis_size-1; i >= 0; i--)
	{
		print(char(32));print(char(197));
		for (int k = 0; k < y_size; k++)
		{
			if ((y[k] >= i * d / y_axis_size + d / (2 * y_axis_size)) and (y[k] <= (i + 1) * d / y_axis_size))
			{
				print(char('o'));
			}
			else
			{
				print(char(32));
			}
		}
		print("\n");
	}
	printXaxis();
}
