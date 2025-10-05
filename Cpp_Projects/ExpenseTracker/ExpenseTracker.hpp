/*******************************************************************************
 * @File: ExpenseTracker.hpp
 * @Brief:This file defines the ExpenseTracker class and Expense class for managing expenses.
 * 		   It includes methods for adding, viewing, and calculating total expenses.
 * @Author: Shreya S. Darade(daradeshreya85@gmail.com)
 * Date: 7-Aug-2025(Thursday) 23:04:55 PM 
 * *************************************************************/

#pragma once


//Headers
#include <iostream>
#include <vector>
#include <string>

//Expense Class Definition
class Expense
{
public:
	Expense(double amount, const std::string &description, const std::string &date = "2025-07-03")
	: m_dAmount(amount), m_strDescription(description), m_strDate(date)
	{}

	double getAmount() const
	{
		return(this->m_dAmount);
	}

	const std::string &getDescription() const
	{
		return(this->m_strDescription);
	}

	const std::string &getDate() const
	{
		return(this->m_strDate);
	}

private:
	double m_dAmount;
	std::string m_strDescription;
	std::string m_strDate;
};

//ExpenseTracker Class Definition
class ExpenseTracker
{
public:
	ExpenseTracker();

	void AddExpense();

	void ViewExpenses() const;

	double GetTotalExpenses() const;

private:
	std::vector<Expense> m_vExpenses;

	void LoadExpensesFromFile();
	void SaveExpensesToFile() const;

};