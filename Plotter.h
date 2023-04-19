#pragma once
#include <array>
class Plotter
{
private:
	const int size = 100;
	char pointer[2]{ '/',char(92) };
	char y_axis[11]{ '|','|', '|', '|', '|', '|', '|', '|', '|','|' };

	void printHeader();
	double delta(std::array<double, 100>& y);

public:
	void plotGraphic(std::array<double, 100> &y);
};

