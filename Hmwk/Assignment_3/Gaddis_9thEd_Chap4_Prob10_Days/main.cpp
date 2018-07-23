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

    int month, year;
    bool leapYear = false;
    
    cout << "Enter a month 1-12: ";
    cin >> month;
    cout << "Enter a year (4 digit): ";
    cin >> year;
    
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            leapYear = true;
    }
    else
    {
        if (year % 4 == 0)
            leapYear = true;
    }
    
    switch (month)
    {
        case 1:
            cout << "31 days";
            break;
        case 2:
            if (leapYear)
                cout << "29 days";
            else
                cout << "28 days";
            break;
        case 3:
            cout << "31 days";
            break;
        case 4:
            cout << "30 days";
            break;
        case 5:
            cout << "31 days";
            break;
        case 6:
            cout << "30 days";
            break;
        case 7:
            cout << "31 days";
            break;
        case 8:
            cout << "31 days";
            break;
        case 9:
            cout << "30 days";
            break;
        case 10:
            cout << "31 days";
            break;
        case 11:
            cout << "30 days";
            break;
        case 12:
            cout << "31 days";    
            break;
    }
    
    return 0;
}

