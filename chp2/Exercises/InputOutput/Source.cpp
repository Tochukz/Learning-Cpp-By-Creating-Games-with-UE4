#include <iostream>

using namespace std;

int main() {
	string name;
	int age;

	cout << "Name: ";
	cin >> name;

	cout << "Age: ";
	cin >> age;

	printf("%s \n Age: %d", name.c_str(), age);
}

/**
 Exercise
  Ask the user his name and age and take them in using cin. 
  Then, issue a greeting for him at the console using printf() (not cout).
*/