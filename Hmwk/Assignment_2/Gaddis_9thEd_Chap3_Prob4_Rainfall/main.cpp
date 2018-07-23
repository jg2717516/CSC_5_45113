/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 28, 2018, 8:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char month1[10], month2[10], month3[10];
    double rain1, rain2, rain3;
    
    cout << "Enter month 1 and inches of rain separated by a space: ";
    cin >> month1 >> rain1;
    cout << "Enter month 2 and inches of rain separated by a space: ";
    cin >> month2 >> rain2;
    cout << "Enter month 3 and inches of rain separated by a space: ";
    cin >> month3 >> rain3;
    
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << (rain1+rain2+rain3)/3 << " inches.";
    return 0;
}

