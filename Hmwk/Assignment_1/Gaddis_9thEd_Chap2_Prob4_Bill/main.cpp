/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 24, 2018, 2:53 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float bill = 88.67;
    float tax = 0.0675;
    float tip_perc = 0.2;
    
    cout << "Meal: $" << bill << endl;
    cout << "Tax: $" << bill * tax << endl;
    cout << "Tip: $" << bill * tip_perc << endl;
    cout << "Total: $" << bill + (bill * tax) + (bill * tip_perc) << endl;
}

