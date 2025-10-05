#include<iostream>
#include <stdexcept>

#include "ExpenseTracker.hpp"

//Entry Point Function
int main()
{
    //variable declaration
    ExpenseTracker expenseTracker;

    //Display the welcome message
    std::cout << "Welcome to the Expense Tracker!"  << std::endl;

    //Main loop for the expense tracker
    while(true) 
    {
        //display the menu options
        std::cout <<"\nMenu:\n";
        std::cout <<"1.Add Expense\n";
        std::cout <<"2.View Expense\n";
        std::cout <<"3.Get Total Expenses\n";
        std::cout <<"4.Exit\n";
        std::cout <<"Please select an option: ";

        int choice;
        std::cin >> choice;

        try
        {
            switch (choice)
            {
            case 1:
                expenseTracker.AddExpense();
                break;
            case 2:
                expenseTracker.ViewExpenses();
                break;
            case 3:
                std::cout << "Total Expenses: Rs " << expenseTracker.GetTotalExpenses() << std::endl;
                break;
            case 4:
                std::cout << "Exiting the Expense Tracker. Goodbye!" << std::endl;
                return(0);
            default:
                throw(std::runtime_error("Invalid choice. Please select a valid option drom the menu"));
                break;

            }

        }

        catch (const std::exception &except)
        {
            std::cerr << "Exception: " << except.what() << std::endl;
            std::cout << "Please try again." << std::endl;
        }

        catch(...)
        {
            std::cerr << "An unexcepted error occurred." << std::endl;
            std::cout << "Please try again." << std::endl;
        }

    }

    return(0);
    
}


        
    

