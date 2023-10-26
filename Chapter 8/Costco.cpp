#include "Costco.h"

Costco::Costco()
{
	time = 1;
	registers = 1;
	served = 0;
}
void Costco::setTime(int newTime)
{
	time = newTime;
}
int Costco::getTime() const
{
	return time;
}
void Costco::setRegisters(int newRegisters)
{
	registers = newRegisters;
}
int Costco::getRegisters() const
{
	return registers;
}
void Costco::setServed(int newServed)
{
	served = newServed;
}
int Costco::getServed() const
{
	return served;
}
void Costco::costcoMenu()
{
	cout << "\n\t3> Simulation of checkout lines at a CostCo warehouse store\n\n";

	setTime(inputInteger("\tEnter the time (1..37800 in seconds) of the store will be operated: ", 1, 37800));
	setRegisters(inputInteger("\tEnter the number of cash registers (1..10): ", 1, 10));

	simulateLine();
}
void Costco::simulateLine()
{
	queue<int> line1;
	queue<int> line2;
	queue<int> line3;
	queue<int> line4;
	queue<int> line5;
	queue<int> line6;
	queue<int> line7;
	queue<int> line8;
	queue<int> line9;
	queue<int> line10;
	int size = 0;
	int customer = 0;

	while (time-- > 0)
	{
		system("cls");

		customer = time;

		cout << "\n\tCostCo warehouse store: " << time << "       " << "Number of served customers: " << served << endl << endl;

		switch (registers)
		{
		case 1:
		{
			cout << "\t\tCash register #1: ";

			line1.push(customer);

			cout << "\n\t\t\t\t" << string(1, char(254)) << line1.size() << string(1, char(254));

			for (int i = 0; i < line1.size() - 1; i++)
			{
				cout << "  " << string(4, char(254));
			}

			line1.pop();
			++served;
		}
		break;
		case 2:
		{
			cout << "\t\tCash register #1: ";
		
		}
		break;
		case 3:
		{
			
		}
		break;
		case 4:
		{
			
		}
		break;
		case 5:
		{
			
		}
		break;
		case 6:
		{
			
		}
		break;
		case 7:
		{
			
		}
		break;
		case 8:
		{
			
		}
		}
	}
}