/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 3, 2018, 12:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const double PENNY = 0.01;
    const double NICKEL = 0.05;
    const double DIME = 0.10;
    const double QUARTER = 0.25;
    
    double pennies, nickels, dimes, quarters, total;
    
    cout << "Enter number of pennies: ";
    cin >> pennies;
    cout << "Enter number of nickels: ";
    cin >> nickels;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of quarters: ";
    cin >> quarters;
    
    total = (pennies * PENNY) + (nickels * NICKEL) + (dimes * DIME) + (quarters * QUARTER);
    
    if (total == 1.00)
        cout << "You won!";
    else if (total < 1.00)
        cout << "You got less than $1";
    else if (total > 1.00)
        cout << "You got more than $1";
    
    return 0;
}

