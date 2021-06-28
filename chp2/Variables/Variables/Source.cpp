#include <iostream>
#include <string> 

using namespace std;

int main()
{
    string name;
    int goldPieces;
    float hp;

    name = "Kelvin";
    goldPieces = 322;
    hp = 75.5f;
    cout << "Character " << name << " has "
        << hp << " hp and "
        << goldPieces << " gold.";
}