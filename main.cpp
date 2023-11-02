#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();

	cout << Player->HP << endl;

	return 0;
}
