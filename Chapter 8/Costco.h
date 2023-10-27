#pragma once
#include<iostream>
#include<queue>
#include<string>
#include<chrono>
#include<thread>
#include<vector>
#include<algorithm>

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
	void displayCarts(queue<int> line, int& chance);
	int longestLine(queue<int>& line1, queue<int>& line2, queue<int>& line3, queue<int>& line4, queue<int>& line5, queue<int>& line6, queue<int>& line7, queue<int>& line8, queue<int>& line9, queue<int>& line10, int size);
};