#include <iostream>
using namespace std;

int main() {
	string secret_code;
	cout << "Enter a secret code: ";
	cin >> secret_code;
	string secret_codes[] = {"123456", "password", "123456789", "12345", "12345678", "qwerty", "1234567", "111111", "1234567890", "123123"};

	cout << "breaking secret code..." << '\n';
	string pwd = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*():\"';.,/?";
	for (char code : secret_code) {
		for (char i : pwd) {
			if (code == i) {
				cout << code;
			}
		}
	}

	cout << endl;
	for (string i : secret_codes)
		if (secret_code == i) cout << "Discovered: " << i;

	return 0;
}

