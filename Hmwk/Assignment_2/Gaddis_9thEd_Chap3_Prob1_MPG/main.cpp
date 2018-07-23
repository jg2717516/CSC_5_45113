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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int gallons, miles;
    
    cout << "Enter number of gallons: ";
    cin >> gallons;
    cout << "Enter number of miles that can be driven: ";
    cin >> miles;
    cout << "Miles per gallon: " << miles/gallons << endl;
    
    return 0;
}

