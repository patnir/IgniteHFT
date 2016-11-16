#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class StockModel {
	//tm date;
	double open;
	double highg; 
	double low; 
	double close;
	double volume;
	double adjClose;

	public:

	void deserialize(string serializedData);

	string serialize();
};

void StockModel::deserialize(string serializedData) {

}

string StockModel::serialize() {
	string t = "cool";
	return t;
}

int main(int argc, char ** argv) {
  return 0;
}
