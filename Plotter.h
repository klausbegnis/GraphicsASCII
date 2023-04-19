#pragma once
#include <array>
class Plotter
{
private:
	const int size = 100;
	//sconst int* y_Axis_Size = 10;
	

	void printHeader();
	void printXaxis();
	double delta(std::array<double, 100>& y);

public:
	void plotGraphic(std::array<double, 100> &y);
};

