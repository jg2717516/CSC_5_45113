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

    const double SUGAR = 1.5;
    const double BUTTER = 1;
    const double FLOUR = 2.75;
    
    double cookies;
    
    cout << "How many cookies would you like to make? ";
    cin >> cookies;
    
    cout << "Cups of sugar needed: " << SUGAR * (cookies / 48) << endl;
    cout << "Cups of butter needed: " << BUTTER * (cookies / 48) << endl;
    cout << "Cups of flour needed: " << FLOUR * (cookies / 48);
    
    return 0;
}

