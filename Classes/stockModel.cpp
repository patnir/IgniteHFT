#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

class StockModel {
	tm date;
	string dateString;
	double open;
	double high; 
	double low; 
	double close;
	double volume;
	double adjClose;

	public:

	void deserialize(string serializedData);

	string serialize();

	void printData();
};

void StockModel::deserialize(string serializedData) {
	cout << "working with line " << serializedData;
}

string StockModel::serialize() {
	string t = "cool";
	return t;
}

void StockModel::printData() {
	//char *outDate = asctime(&date);
	//cout << "date = " << outDate << "\n";
	cout << "date = " << dateString << "\n";
	cout << "open = " << open << "\n";
	cout << "high = " << high << "\n";
	cout << "low  = " << low << "\n";
	cout << "close = " << close << "\n";
	cout << "volume = " << volume << "\n";
	cout << "adjClose = " << adjClose << "\n";
}

void readFile (char *filename) {
	ifstream fptr (filename);
	string line;
	int total = 0;
	StockModel s;
	if (fptr.is_open()) {
		while(getline(fptr, line) && total <= 1) {
			//cout << line << "\n";
			
			if (total == 1) {
				s.deserialize(line);
			}		

			total += 1;
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

