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
}
