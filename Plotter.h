#pragma once
#include <array>
class Plotter
{
private:
	const int size = 100;
	double y_max;
	double y_min;
	//sconst int* y_Axis_Size = 10;

	void printHeader();
	void printXaxis();
	double delta(std::array<double, 100>& y);
	void normalize(std::array<double, 100>& array, double max_value);

public:
	void plotGraphic(std::array<double, 100> &y);
};

