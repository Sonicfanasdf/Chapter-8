#pragma once
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int inputInteger(string prompt, int startRange, int endRange);

class Costco
{
private:
	int time;
	int registers;
	int served;

public:
	Costco();
	void setTime(int newTime);
	int getTime() const;
	void setRegisters(int newRegisters);
	int getRegisters() const;
	void setServed(int newServed);
	int getServed() const;
	void costcoMenu();
	void simulateLine();
};