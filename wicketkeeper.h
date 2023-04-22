#include<iostream>
#include<string>
#include<string.h>
#ifndef WICKETKEPPER_H
#define WICKETKEPPER_H
class Wicketkepper
{
public:
	string Batting_style;
	int total_score;
	int total_catches;
	int total_stumps;
	~Wicketkepper();
};
#endif // WICKETKEPPER_H
