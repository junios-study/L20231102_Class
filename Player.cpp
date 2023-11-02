#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	MP = 20;
}

FPlayer::~FPlayer()
{
	std::cout << "Player Destructed." << std::endl;
}

//implementaion
void FPlayer::Attack()
{

}

void FPlayer::Move()
{

}