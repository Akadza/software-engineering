#include <iostream>


using std::cout;
using std::endl;


double func1(const double x) {
	return pow(x, 2) + 1;
}

double func2(const double x) {
	return sin(pow(x, 2)) - 1;
}


double processFunction(double (*func1)(double), double (*func2)(double)) {
	return func1(5) + func2(7);
}


int main() {
	cout << processFunction(func1, func2) << endl;
	cout << func1(5) + func2(7) << endl;


	return 0;
}