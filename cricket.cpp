#include<iostream>
#include<string>
#include<string.h>
#include"All rounder.cpp"
#include"Player.cpp"
#include"Batsman.cpp"
#include"Bowler.cpp"
#include"Wicket kepper.cpp"
using namespace std;

int main()
{
	Batsman obj1("Right", 5, 15, 20, "asad", 55, 10, 50, 30);
	obj1.getBatsman();
	Bowler obj2("Fast", 57, 40, 70, 20, "zubair", 55, 10, 50, 30);
	obj2.getBowler();
	AllRounder r1("Right", 5, 15, 20, "Fast", 57, 40, 70, 20, "zubair", 55, 10, 50, 30);
	r1.get_allr();
	WicketKeeper w1("right", 45, 3, 5, "asad", 55, 10, 50, 30);
	w1.getWicketKeeper();
}
