#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getInputs(int *input_A, int *input_B);
void ProductofNumbers(int *val_A, int *val_B, int *product);
void Output();

ofstream newfile("PointerOutput_SalinasPablo.txt");

int main() {
	
	if (newfile.is_open()) {


		int Num1, Num2, product;
		getInputs(&Num1, &Num2);
		ProductofNumbers(&Num1, &Num2, &product);

		cout << endl;
		cout << "Your product is : " << product << endl;
		newfile << product << endl << endl;
		cout << endl;
		
		Output();

		cout << endl;	
		newfile.close();
	}

	system("pause");
	return 0;
}

void getInputs(int *input_A, int *input_B) {
	cout << "Please enter two numbers seperated by space: ";
	cin >> *input_A >> *input_B;

}

void ProductofNumbers(int *val_A, int *val_B, int *product) {
	

	*product = ((*val_A) * (*val_B));

}

void Output() {
	ifstream myfile("referenceOutput_SalinasPablo.txt");
	
	string str1;
	
		if (myfile.is_open()) {
			while (getline(myfile, str1)) {
				cout << str1 << endl;
				newfile << str1 << endl;
			}
			myfile.close();
		}
		
		
	
	else cout << "Unable to open file";
}