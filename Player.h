#pragma once

#ifndef __PLAYER_H__  
#define __PLAYER_H__  

//#define
//custom data type
class FPlayer
{
public:
	//持失切, Constructor, Default Constructor
	FPlayer();
	//社瑚切, Destructor
	~FPlayer();

	//member variable, property
	int HP;
	int MP;

	//member function, method
	void Attack();
	void Move();
};

#endif //__PLAYER_H__  
