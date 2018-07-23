/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 7, 2018, 8:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int days;
    float salary = 0.005;
    
    cout << "Enter number of days worked: ";
    cin >> days;
    
    while (days < 1)
    {
        cout << "Enter number of days worked: ";
        cin >> days;        
    }
    
    for (int i = 1; i <= days; i++)
    {
        salary = salary * 2;
        cout << setprecision(2) << fixed;
        cout << "Day " << i << ": $" << salary << endl;
    }
    
    return 0;
}

