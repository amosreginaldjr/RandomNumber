#pragma once
#include<iostream>

class RandomNumber
{
private:
	int mUserMinValue;
	int mUserMaxValue;
public:
	RandomNumber();
	void setUserMinValue(int userMinValue);
	void setUserMaxValue(int userMaxValue);
	int getRandomNumber();
};