#include <iostream>
#include "../MathLibrary/MathLibrary.h"
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	cout << "Perimeter: " << perimeter(a,b,c) << "\n";
	cout << "Plot: " << plot(a,b) << "\n";
}