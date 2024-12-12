#include <iostream>
using namespace std;
/*
 * entry - main
 * description - calculates the area of a rectangle
 * input - @length, @width
 * output - @area
 * return - 0
 */

int main () {
	int length, width;
	cout << "Enter the length and width of rectangle: " << endl;
	cin >> length >> width;
	
	cout << "The area of the rectangle is: " << length * width;

	return 0;
}
