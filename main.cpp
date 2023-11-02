#include <iostream>
#include <vector>

#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	srand((unsigned int)(time(nullptr)));
	//동적배열 
	vector<FGoblin*> GoblinList;

	for (int i = 0; i < (rand() % 5) + 1; ++i)
	{
		GoblinList.push_back(new FGoblin);
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		cout << GoblinList[i]->HP << endl;
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		delete GoblinList[i];
	}

	GoblinList.clear();

	//for (int i = 0; i < IntArray.size(); ++i)
	//{
	//	cout << IntArray[i] << endl;
	//}
	


	return 0;}
