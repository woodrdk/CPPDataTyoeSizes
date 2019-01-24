
// Robert M Wood Jr.
// CPW 218
// 01/24/19
// Inclass data type


#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int main() {
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of long long int : " << sizeof(long long int) << endl << endl;
	
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of long double : " << sizeof(long double) << endl << endl;

	string email = "travisbickle@yahoo.com";
	string domain = "";size_t at_index = email.find('@');
	size_t dot_index = email.rfind('.');
	if (at_index != string::npos && dot_index != string::npos && dot_index > at_index) {
		++at_index;
		if (at_index < email.length() && at_index < dot_index) {
			int length = dot_index - at_index;domain = email.substr(at_index, length);
		}
	}
	else {
		domain = "missing";
	}
	cout << email << endl;cout << "domain is: " << domain << endl;
	system("pause");
	return 0;
}