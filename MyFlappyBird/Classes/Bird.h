#ifndef BIRD_H
#define BIRD_H

#include "cocos2d.h"
#include<iostream>

enum BIRD_KINDS
{
	RED=0,
	BLUE,
	YELLOW
};
class Bird 
{
public:
	Bird();
	Bird(BIRD_KINDS kind);
	cocos2d::Sprite* getBird();
	cocos2d::Animate* getBirdFly();
	void bird_Fly();
	void bird_Stop();
private:
	cocos2d::Sprite *bird;
	
};

#endif