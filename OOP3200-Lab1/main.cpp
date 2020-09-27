/* Program Name: OOP 3200 - Lab 2 - WorkTicket Modifications
 * Authors: Ryan Clayson and Daniel Hinbest
 * Date: September 27, 2020
 * Description: A project to create and display a work ticket using the WorkTicket class
 */

#include <iostream>
#include <sstream>

#include "WorkTicket.h"


int main()
{
	//Prompt for user input
	std::cout << "Please enter the following information when prompted." << std::endl;
	std::cout << "=====================================================" << std::endl;
	
	//Array declaration for WorkTicket class
	WorkTicket workTicketArr[3];

	//WorkTicket object for operator overload
	WorkTicket secondTicket;
	
	//Endline
	std::cout << std::endl;

	//For loop to output all the WorkTicket array elements to the console
	std::cout << "Following information was received." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\nTicket Number: " << workTicketArr[i].GetTicketNumber() << std::endl;
		std::cout << "Client ID: " << workTicketArr[i].GetClientID() << std::endl;
		std::cout << "Date: " << workTicketArr[i].GetTicketDay() << " / " << workTicketArr[i].GetTicketMonth()
			<< " / " << workTicketArr[i].GetTicketYear() << std::endl;
		std::cout << "Description: " << workTicketArr[i].GetIssueDescription() << std::endl << std::endl;
	}

	//Copy Constructor is called
	WorkTicket workTicketNew = workTicketArr[0];

	//Conversion Operator is called
	std::cout << workTicketNew.operator std::string() << "\n";
	
	//Equality Operator
	std::cout << "Equality Operator: 0 meaning inequal, 1 meaning equal" << std::endl;
	std::cout << "WorkTicket 1 and WorkTicket 3: " << (workTicketArr[0] == workTicketArr[2]);

	//Assignment Operator
	workTicketNew = workTicketArr[2];
	std::cout << workTicketArr[2];

	//Operator>> overload
	std::cin >> secondTicket;

	//Operator<< overload
	std::cout << secondTicket;
}