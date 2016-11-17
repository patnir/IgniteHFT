#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
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

void readFile (char *filename) {
	ifstream fptr (filename);
	string line;
	if (fptr.is_open()) {
		while(getline(fptr, line)) {
			cout << line << "\n";
		}
		fptr.close();
	}
	else {
		cout << "Error opening file\n";
	}
	return;
}

int main(int argc, char ** argv) {
	if (argc != 2) {
		cout << "Enter file name\n";
		return 0;
	}
	readFile(argv[1]);
	return 0;
}

