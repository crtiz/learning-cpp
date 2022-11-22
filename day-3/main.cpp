#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

void showMenu()
{
    std::cout << "********** Menu **********\n";
    std::cout << "1: Check Balance \n";
    std::cout << "2: Deposit \n";
    std::cout << "3: Widrawth \n";
    std::cout << "0: Exit \n";

    std::cout << "********** End **********\n";
}

int main()
{
    int optionChosen;
    double balance = 500;
    double widrawth;

    do{
        showMenu();
        std::cout << "Please select an option: ";
        std::cin >> optionChosen;

        switch (optionChosen) {
            case 1:
                std::cout << "Your Balance is: " << balance << "\n";
                break;
            case 2:
                double depositAmount;
                std::cout << "How much would you like to deposit? \n";
                std::cin >> depositAmount;
                std::cout << "Succesfully Deposited" << depositAmount << " into your account\n";
                std::cout << "Your new available balance is: " << balance + depositAmount << "\n";

                break;
            case 3:
                std::cout << "Please enter the amount that you would like to widrawth: ";
                std::cin >> widrawth;
                if (widrawth >= balance) {
                    std::cout << "Not enough money to do that\n";
                } else {
                    double newBalance = balance - widrawth;
                    std::cout << "You've requested to widrawth: " << widrawth << "\n";
                    std::cout << "Your new available balance is: " << newBalance << "\n";
                }
                break;

            default:
                std::cout << "Please choose a valid option\n";
                break;
        }
    } while(optionChosen != 0);

    return 0;
}
