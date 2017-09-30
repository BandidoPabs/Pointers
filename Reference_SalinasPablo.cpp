#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &input);
void tripleValue(int &val);

int main() {
	ofstream myfile("referenceOutput_SalinasPablo.txt");
	myfile.is_open();
	int Num;
	cout << "Please enter a number: ";
	getInput(Num);
	cout << endl;
	cout << "This is your input " << Num << endl;
	myfile << "This is your input " << Num << endl;
	tripleValue(Num);
	cout << "This is 3 times your input " << Num;
	myfile << "This is 3 times your input " << Num;
	myfile.close();

	cout << endl;
	system("pause");

	return 0;
}

void getInput(int &input) {
	cin >> input;

}

void tripleValue(int &val) {
	val *= 3;
}