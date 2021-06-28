#include <iostream>
#include <string>

using namespace std;

struct Vector {
	float x;
	float y;
	float z;
};

struct Player {
	string name;
	float hp;
	Vector position;
};

int main() {
	Player me;
	me.name = "Chucks";
	me.hp = 100.0f;
	me.position.x = me.position.y = me.position.z = 0;

	cout << "Player Name: " << me.name << endl;

	Player* mePtr = &me;
	mePtr->name = "Tochukwu";
	mePtr->hp -= 10;

	cout << "Player Name: " << me.name << ", Hit Point: " << me.hp << endl;
	cout << "Player Name: " << mePtr->name << ", Hit Point " << mePtr->hp << endl;


	string city = "Cape Town";
	printf("City: %s \n", city.c_str()); // (1)
}

/**
  1) The string.c_str() method accesses the C pointer to the string which printf needs   

  Output: 
    Player Name: Chucks
    Player Name: Tochukwu, Hit Point: 90
    Player Name: Tochukwu, Hit Point 90
	City: Cape Town
*/