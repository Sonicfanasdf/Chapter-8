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
void Costco::simulateLine() //simulates the costco lines
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
	
	setServed(0);

	while (time-- > 0) //does loop until out of time
	{
		system("cls");

		customer = time;

		cout << "\n\tCostCo warehouse store: " << time << "       " << "Number of served customers: " << served << endl << endl;

		switch (registers)
		{
		case 1:
		{
			cout << "\t\tCash register #1: ";

			line1.push(customer); //pushes customer into queue

			displayCarts(line1); //displays the line visually

			if (0 + rand() % 2) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}
			
		}
		break;
		case 2:
		{
			if (line1.size() < line2.size())
			{
				line1.push(customer);
			}
			else if (line2.size() < line1.size())
			{
				line2.push(customer);
			}
			else if (line1.size() == line2.size())
			{
				line1.push(customer);
			}
			cout << "\t\tCash register #1: ";

			displayCarts(line1);

			if (0 + rand() % 2) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2);

			if(!line2.empty())
			{ 
			if (0 + rand() % 2) //50% chance that the customer will be finished checking out
			{
				line2.pop(); //pops customer out of the queue
				++served;
			}
		    }
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
		//this_thread::sleep_for(chrono::seconds(1));
	}
}
void Costco::displayCarts(queue<int> line)
{
	cout << "\n\t\t\t\t" << string(1, char(254)) << line.size() << string(1, char(254));

	if (line.size() != 0)
	{
		for (int i = 0; i < line.size() - 1; i++)
		{
			cout << "  " << string(4, char(254));
		}
	}
}