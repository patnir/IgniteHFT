#include<iostream>
#include<ctime>
using namespace std;

class StockModel {
	tm date;
	double open;
	double highg; 
	double low; 
	double close;
	double volume;
	double adjClose;

	public:
		void serialize();
		void deserialize(string);

	void deserialize(string serializedData) {

	}
};
