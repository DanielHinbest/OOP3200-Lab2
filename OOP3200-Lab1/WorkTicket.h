#pragma once

#ifndef __WORK_TICKET__
#define __WORK_TICKET__
#include <string>

// class declaration 
class WorkTicket
{
	//start of private
private:
	//private data members
	int ticketNumber;	// user ticket input
	std::string clientID; // user client ID
	int ticketDay;			//user day
	int ticketMonth;		//user month
	int ticketYear;			//user year
	std::string issueDescription; // user issue description

	//start of public
public:
	//Default constructor. If parameters aren't declared, the ticket takes in these default parameters
	WorkTicket(int ticketNumber = 0, std::string clientID = "", int ticketDay = 1, int ticketMonth = 1,
		int ticketYear = 2000, std::string issueDescription = "");

	//All Accessors Declarations. "Getters"
	int GetTicketNumber();
	std::string GetClientID();
	int GetTicketDay();
	int GetTicketMonth();
	int GetTicketYear();
	std::string GetIssueDescription();
	void ShowWorkTicket() const;

	//All Mutators "Setters"
	void SetTicketNumber(int ticketNumber);
	void SetClientID(std::string clientID);
	void SetTicketDay(int ticketDay);
	void SetTicketMonth(int ticketMonth);
	void SetTicketYear(int ticketYear);
	void SetIssueDescription(std::string issueDescription);
	bool SetWorkTicket(int number, std::string id, int day, int month, int year, std::string description);

	// end of public	
};// end of class

#endif
