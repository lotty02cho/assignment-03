#include <iostream>

using namespace std;

double divide(double a, double b) {
	if (b == 0) {
		throw b;
	}
	return a/b;
}

void testException() {
	double a, b;
	while (1) {
		cout << "input 2 digits" << endl;
		cin >> a >> b;

		try {
			cout << "Answer of a/b : " << divide(a, b) << endl;
		}
		catch (double e) {
			cout << e << "<= input" << endl;
			cout << "Try again! Zero can't devide.\n" << endl;
		};
	}
}


void main(){

	testException();
	
	return;
}
