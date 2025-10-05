#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<exception>
#include <stdexcept>

#include "ExpenseTracker.hpp"

/********************************************************************\
 * 			Public function definition of ExpenseTracker class
\*********************************************************************/

/***
 * @Function: ExpenseTracker
 * @Brief: Constructor for the ExpenseTracker class. It initializes the expense tracker by loading expenses from a file.
 * @Params: None
 * @return: None
 *****/

ExpenseTracker::ExpenseTracker()
{
	//code 

	//Load expenses from file
	LoadExpensesFromFile();
}

/***
 * @Function: AddExpense
 * @Brief: This function allows the user to add a new expense by entering the amount and description.
 * @Params: None
 * @return: None
 *****/

void ExpenseTracker::AddExpense()
{
	//Variable Declarartion

	double dAmount;
	std::string strDescription;
	std::string strDate;

	//code

	//Input amount
	std::cout << "Enter expense amount: ";
	std::cin  >> dAmount;
	if(std::cin.fail() || dAmount < 0)		//Check if input is valid and positive
	{
		throw(std::runtime_error("Invalid amount entered. Please enetr a positive number."));
	}


	//Input description
	std::cout << "Enter expense description: ";
	std::cin.ignore();  //clear the newline character from the input buffer
	std::getline(std::cin, strDescription);
	if(strDescription.empty()) 		//check if description is not empty
	{
		throw(std::runtime_error("Description cannot be empty. Please enter a valid description."));
	}


	//Input Date
	std::cout << "Enter expense date (YYYY-MM-DD); ";
	std::getline(std::cin, strDate);
	if(strDate.empty())
	{
		throw(std::runtime_error("Date cannot be empty. Please enter a valid date."));
	}

	//Create Expense object and add to vector
	m_vExpenses.push_back(Expense(dAmount, strDescription, strDate));


	//Save the expense to file
	SaveExpensesToFile();

	std::cout  <<"Expense added successfully!!" << std::endl;

}

/***
 * @Function: ViewExpense
 * @Brief: This function displays all the expenses stored in the tracker.
 *         It reads expenses from a file and prints then to console.
 * @Params: None
 * @return: None
 *****/


void ExpenseTracker::ViewExpenses() const
{
	//code

	//Display Expenses
	std::cout << "Expenses: " << std::endl;
	for(const auto &expense : m_vExpenses)
	{
		std::cout << "Account: " << expense.getAmount()
				  << ", Description: " << expense.getDescription()
				  << ",Date: " << expense.getDate() << std::endl;
	}

	//Display total expenses
	std::cout << "Total Expense: " << GetTotalExpenses() << std::endl; 
}
/***
 * @Function: GetTotalExpense
 * @Brief: This function calculates the total amount of all exepnses recorded in the tracker.
 * @Params: None
 * @return: The total amount of expenses as a double
 *****/


double ExpenseTracker::GetTotalExpenses() const
{
	//variable declaration
	double dTotal = 0.0;

	//code

	//calculate total expenses
	for (const auto &expense : m_vExpenses)
	{
		dTotal += expense.getAmount();
	}

	return dTotal;
}

/***
 * @Function: SaveExpensesToFile
 * @Brief: This function saves all expenses from the vector to a file
 * @Params: None
 * @return: None
 *****/

void ExpenseTracker::SaveExpensesToFile() const
{
	//variable declarartion
	std::ofstream file("expenses.txt");

	//code

	//check if file is open
	if (!file.is_open())
	{
		throw(std::runtime_error("Coild not open expenses file for writing"));
	}

	//write each expense to the file
	for(const auto &expense : m_vExpenses)
	{
		file << expense.getAmount() << " " << expense.getDescription() << "," << expense.getDate() << std::endl;
	}

	file.close();
}  
/***
 * @Function: LoadExpensesFromFile
 * @Brief: This function loads expenses from a file into the vector.
 * @Params: None
 * @return: None
 *****/

void ExpenseTracker::LoadExpensesFromFile()
{
	//variable declarartion
	std::ifstream file("expenses.txt");
	std::string line;

	//code

	//check if file is open
	if (!file.is_open())
	{
		throw(std::runtime_error("Could not open expenses file for reading."));
	}

	//read each line from the file
	while (std::getline(file,line))
	{
		std::istringstream iss(line);
		double amount;
		std::string description, date;


		bool isAmountValid = false;
		isAmountValid = (bool)(iss >> amount);

		bool isDescriptionValid = false;
		std::getline(iss, description, ',');
		isDescriptionValid = !description.empty();


		bool isDateValid = false;
		std::getline(iss, date);
		isDateValid = !date.empty();

		if (!isAmountValid || !isDescriptionValid || !isDateValid)
		{
			throw(std::runtime_error("Invalid expense format in file. Please check the file content"));
		}

		m_vExpenses.emplace_back(amount,description,date);


	

	
} 

   file.close();


}