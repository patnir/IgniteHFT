#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "hello world!" << endl;

	const double PI = 3.14159;

	char myGrade = 'A';

	bool isHappy = true;

	int myAge = 39;

	float favNum = 12.12312;

	cout << "Favorite Number " << favNum << endl;

	cout  << "Size of int " << sizeof(myAge) << endl;

	cout << "Size of float " << sizeof(double) << endl;

	int t = 1;
	t = t << 2;


	int val = (5 > 3) ? 5 : 3;

	cout << val << endl;

	cout << "biggest int " << t << endl;

	cout << "printing random number" << endl;

	srand(time(NULL));

	float randNum = rand()%100 + 1;

	cout << randNum;

	return 0;
}