//Joe Bryant
//Date: 10/23/2023
//subscription: CMPR131

//Credit:
//Christian Hernandez, Saul Merino, Thanh Tran,
//John Kim, Joe Bryant, Erik Santana, 
//Otoniel Torres Bernal

#include<iostream>
#include"input.h"
#include"Costco.h"

using namespace std;

// Function Prototypes


// Main Function
int main()
{
	Costco line;
	// Main Menu and Options
	do
	{
		system("cls");
		cout << "\n\t\CMPR131 Chapter 8: Applications using Queues by Joe Bryant (10/23/23)";
		cout << "\n\t" << string(100, char(205));
		cout << "\n\t\t1> Simulation of War (card game) using deque STL";
		cout << "\n\t\t2> Simulation of an emergency room (ER) using priority queue STL";
		cout << "\n\t\t3> Simulation of checkout lines at CostCo using multiple queues STL";
		cout << "\n\t" << string(100, char(196));
		cout << "\n\t\t0> Exit";
		cout << "\n\t" << string(100, char(205));

		switch (inputInteger("\n\t\tOption: ", 0, 3))
		{
		case 0: exit(1); break;
		case 1: break;
		case 2: break;
		case 3: 
			system("cls");
			line.costcoMenu();
			break;
		default: cout << "\t\tERROR - Invalid option."; break;
		}
		cout << "\n";
		system("pause");
	} while (true);

	return EXIT_SUCCESS;
}