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
	int chance = 0;

	
	setServed(0);

	while (time-- > 0) //does loop until out of time
	{
		chance = rand() % 5;

		system("cls");

		customer = time;

		cout << "\n\tCostCo warehouse store: " << time << "       " << "Number of served customers: " << served << endl << endl;

		switch (registers)
		{
		case 1:
		{
			cout << "\t\tCash register #1: ";

			line1.push(customer); //pushes customer into queue

			displayCarts(line1, chance); //displays the line visually

			if (chance == 1) //50% chance that the customer will be finished checking out
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

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if(!line2.empty())
			{ 
			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line2.pop(); //pops customer out of the queue
				++served;
			}
		    }
		}
		break;
		case 3:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 3) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}


			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
		case 4:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 4) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

		}
		break;
		case 5:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 5) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
		case 6:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 6) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #6";

			displayCarts(line6, chance);

			if (!line6.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line6.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
		case 7:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 7) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #6";

			displayCarts(line6, chance);

			if (!line6.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line6.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #7";

			displayCarts(line7, chance);

			if (!line7.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line7.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
		case 8:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 8) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #6";

			displayCarts(line6, chance);

			if (!line6.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line6.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #7";

			displayCarts(line7, chance);

			if (!line7.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line7.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #8";

			displayCarts(line8, chance);

			if (!line8.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line8.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
	    case 9:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 9) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #6";

			displayCarts(line6, chance);

			if (!line6.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line6.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #7";

			displayCarts(line7, chance);

			if (!line7.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line7.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #8";

			displayCarts(line8, chance);

			if (!line8.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line8.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #9";

			displayCarts(line9, chance);

			if (!line9.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line9.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		break;
		case 10:
		{
			if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line1.size())
			{
				line1.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line2.size())
			{
				line2.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line3.size())
			{
				line3.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line4.size())
			{
				line4.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line5.size())
			{
				line5.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line6.size())
			{
				line6.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line7.size())
			{
				line7.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line8.size())
			{
				line8.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line9.size())
			{
				line9.push(customer);
			}
			else if (longestLine(line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, 10) == line10.size())
			{
				line10.push(customer);
			}
			else
			{
				line1.push(customer);
			}

			cout << "\t\tCash register #1: ";

			displayCarts(line1, chance);

			if (chance == 1) //50% chance that the customer will be finished checking out
			{
				line1.pop(); //pops customer out of the queue
				++served;
			}

			cout << "\n\n\t\tCash register #2: ";

			displayCarts(line2, chance);

			if (!line2.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line2.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #3: ";

			displayCarts(line3, chance);

			if (!line3.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line3.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #4";

			displayCarts(line4, chance);

			if (!line4.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line4.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #5";

			displayCarts(line5, chance);

			if (!line5.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line5.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #6";

			displayCarts(line6, chance);

			if (!line6.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line6.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #7";

			displayCarts(line7, chance);

			if (!line7.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line7.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #8";

			displayCarts(line8, chance);

			if (!line8.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line8.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #9";

			displayCarts(line9, chance);

			if (!line9.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line9.pop(); //pops customer out of the queue
					++served;
				}
			}

			cout << "\n\n\t\tCash register #10";

			displayCarts(line10, chance);

			if (!line10.empty())
			{
				if (chance == 1) //50% chance that the customer will be finished checking out
				{
					line10.pop(); //pops customer out of the queue
					++served;
				}
			}
		}
		}
		//this_thread::sleep_for(chrono::seconds(1)); //delays for 1 second before starting the next loop
	}
}
void Costco::displayCarts(queue<int> line, int& chance)
{
	cout << "\n\t\t\t\t" << string(1, char(254)) << line.size() << string(1, char(254));

	if (line.size() != 0)
	{
		for (int i = 0; i < line.size() - 1; i++)
		{
			cout << "  " << string(4, char(254));
		}
	}
	chance = rand() % 5;
}
int Costco::longestLine(queue<int>& line1, queue<int>& line2, queue<int>& line3, queue<int>& line4, queue<int>& line5, queue<int>& line6, queue<int>& line7, queue<int>& line8, queue<int>& line9, queue<int>& line10, int size)
{
	int longest;

	vector<int> line;

	/*if (!line1.empty())
	{
		line.push_back(line1.size());
	}
	if (!line2.empty())
	{
		line.push_back(line2.size());
	}
	if (!line3.empty())
	{
		line.push_back(line3.size());
	}
	if (!line4.empty())
	{
		line.push_back(line4.size());
	}
	if (!line5.empty())
	{
		line.push_back(line5.size());
	}
	if (!line6.empty())
	{
		line.push_back(line6.size());
	}
	if (!line7.empty())
	{
		line.push_back(line7.size());
	}
	if (!line8.empty())
	{
		line.push_back(line8.size());
	}
	if (!line9.empty())
	{
		line.push_back(line9.size());
	}
	if (!line10.empty())
	{
		line.push_back(line10.size());
	}
	else if()
	{
		line.push_back(line1.size());
	}*/
	
	if (size == 1)
	{
		line.push_back(line1.size());
	}
	else if (size == 2)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
	}
	else if (size == 3)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
	}
	else if (size == 4)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
	}
	else if (size == 5)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
	}
	else if (size == 6)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
		line.push_back(line6.size());
	}
	else if (size == 7)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
		line.push_back(line6.size());
		line.push_back(line7.size());
	}
	else if (size == 8)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
		line.push_back(line6.size());
		line.push_back(line7.size());
		line.push_back(line8.size());
	}
	else if (size == 9)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
		line.push_back(line6.size());
		line.push_back(line7.size());
		line.push_back(line8.size());
		line.push_back(line9.size());
	}
	else if (size == 10)
	{
		line.push_back(line1.size());
		line.push_back(line2.size());
		line.push_back(line3.size());
		line.push_back(line4.size());
		line.push_back(line5.size());
		line.push_back(line6.size());
		line.push_back(line7.size());
		line.push_back(line8.size());
		line.push_back(line9.size());
		line.push_back(line10.size());
	}
	
	
	 
	

	sort(line.begin(), line.end());

	longest = line.front();

	
	return longest;
}