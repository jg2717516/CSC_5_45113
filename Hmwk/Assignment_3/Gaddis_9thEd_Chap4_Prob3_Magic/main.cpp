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

    int month, day, year;
    
    cout << "Enter a month (numeric): ";
    cin >> month;
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter a year (two digit): ";
    cin >> year;
    
    if (month * day == year)
        cout << "This date is magic.";
    else
        cout << "This date is not magic.";
    
    return 0;
}

