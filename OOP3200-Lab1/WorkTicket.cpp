#include "WorkTicket.h"

#include <iostream>

#include "MyconsoleInput.h"
//Constructor Definition
WorkTicket::WorkTicket(int number, std::string id, int day, int month, int year, std::string description)
{
	//Assigning the parameters to attributes of the class
	SetTicketNumber(ticketNumber);
	SetClientID(clientID);
	SetTicketMonth(month);
	SetTicketDay(day);
	SetTicketYear(year);
	SetIssueDescription(description);
}

//Accessor to display the work ticket to the user
void WorkTicket::ShowWorkTicket() const
{
	std::cout << "\nTicket Number: " << ticketNumber
		<< "\nClient ID: " << clientID
		<< "\nDate: " << ticketDay << "/" << ticketMonth << "/" << ticketYear
		<< "\nDescription:\n\t" << issueDescription << std::endl;
}
// Mutator that sets all the attributes
bool WorkTicket::SetWorkTicket(int number, std::string id, int day, int month, int year, std::string description)
{
	//Constant Variables
	const int DAYS = 31;
	const int MONTHS = 12;
	const int YEAR_MINIMUM = 2000;
	const int YEAR_MAXIMUM = 2099;

	//Variable for returning a boolean value
	bool returnValue;

	//range validation
	if (ticketNumber < 0 || month < 1 || month > MONTHS
		|| day < 1 || day > DAYS || year < YEAR_MINIMUM || year > YEAR_MAXIMUM)
		returnValue = false;
	else if (clientID.length() < 1 || description.length() < 1)
		returnValue = false;
	else
	{
		ticketNumber = number;
		clientID = id;
		ticketDay = day;
		ticketMonth = month;
		ticketYear = year;
		issueDescription = description;
		return true;
	}

	return returnValue;
}

//Mutator function - Sets the ticket number
void WorkTicket::SetTicketNumber(int number)
{
	bool validInput = false;
	//Try/Catch for exception handling

	while (!validInput)
	{
		try
		{
			std::cout << "\nEnter ticket number: ";
			number = ConsoleInput::ReadInteger();

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore((256, '\n'));
			}
			//If number is greater than 0, set the ticketNumber
			if (number > 0)
			{
				ticketNumber = number;
				validInput = true;
			}
			else
			{
				//Throw the exception
				throw std::invalid_argument("Ticket Number must be a positive whole number. Please try again.");
			}
		}
		catch (std::invalid_argument& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
}
//Mutator method - Sets the client ID
void WorkTicket::SetClientID(std::string id)
{
	bool validInput = false;

	while (!validInput)
	{
		std::cout << "\nEnter Client ID: ";
		std::cin >> id;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}
		//If number is greater than 0, set the clientID
		if (id.length() > 0)
		{
			clientID = id;
			validInput = true;
		}
	}
}
//Mutator method - Sets the day attribute
void WorkTicket::SetTicketDay(int day)
{
	bool validInput = false;

	while (!validInput)
	{
		//Try/Catch for exception handling
		try
		{
			std::cout << "\nEnter Day: ";
			std::cin >> day;

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}
			//If number is greater than 0, set the ticketDay
			if (day >= 1 && day <= 31)
			{
				ticketDay = day;
				validInput = true;
			}
			else
			{
				//Throw the exception
				throw std::invalid_argument("Invalid Day. Please enter a day between 1 and 31");
			}
		}
		catch (std::invalid_argument& ex)
		{
			std::cerr << "\t" << ex.what() << std::endl;
		}
	}
}
//Mutator method - Sets the month attribute
void WorkTicket::SetTicketMonth(int month)
{
	bool validInput = false;

	while (!validInput)
	{
		//Try/Catch for exception handling
		try
		{
			std::cout << "\nEnter Month: ";
			std::cin >> month;

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}
			//If number is greater than 0, set the ticketMonth
			if (month >= 1 && month <= 12)
			{
				ticketMonth = month;
				validInput = true;
			}
			else
			{
				//Throw the exception
				throw std::invalid_argument("Invalid Month. Please enter month between 1 and 12");
			}
		}
		catch (std::invalid_argument& ex)
		{
			std::cerr << "\t" << ex.what() << std::endl;
		}
	}
}
//Mutator method - Sets the year attribute
void WorkTicket::SetTicketYear(int year)
{
	bool validInput = false;

	while (!validInput)
	{
		//Try/Catch for exception handling
		try
		{
			std::cout << "\nEnter Year: ";
			std::cin >> year;

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}
			//If number is greater than 0, set the ticketYear
			if (year <= 2099 && year >= 2000)
			{
				ticketYear = year;
				validInput = true;
			}
			else
			{
				//Throw the exception
				throw std::invalid_argument("Invalid Year. Please enter year between 2000 and 2099.");
			}
		}
		catch (std::invalid_argument& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
}
//Mutator method - Sets the description
void WorkTicket::SetIssueDescription(std::string description)
{
	bool validInput = false;


	std::cout << "\nEnter Descriptive Issue: ";
	while (!validInput)
	{
		std::getline(std::cin, description);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}
		//If number is greater than 0, set the issueDescription
		if (description.length() > 0)
		{
			issueDescription = description;
			validInput = true;
		}
	}
}


//Accessor method - returns the ticket number
int WorkTicket::GetTicketNumber()
{
	return ticketNumber;
}

//Accessor method - returns the client ID
std::string WorkTicket::GetClientID()
{
	return clientID;
}

//Accessor method - returns the ticket day
int WorkTicket::GetTicketDay()
{
	return ticketDay;
}

//Accessor method - returns the ticket month
int WorkTicket::GetTicketMonth()
{
	return ticketMonth;
}

//Accessor method - returns the ticket year
int WorkTicket::GetTicketYear()
{
	return ticketYear;
}

//Accessor method - returns the issue description
std::string WorkTicket::GetIssueDescription()
{
	return issueDescription;
}
