#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {
	cout << "Enter the desired length of your password: " << flush;
	string password_length;
	getline(cin, password_length);

	srand(time(0)); // seed random so we dont get the same password pattern everytime (without this it would be like "P`5m")

	string selected_password;
	string password_data = "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "1234567890" "~`!@#$%^&*()_+-={}:>?<.,";

	for (int i = 1; i <= stoi(password_length); i++) {
		selected_password = selected_password + password_data[rand() % password_data.length()];
	};

	cout << "\ngenerated password is: " << selected_password << "\n";
	return 0;
};