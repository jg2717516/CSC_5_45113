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

    int num, 
        sum = 0;
    
    cout << "Enter a positive integer value: ";
    cin >> num;
    
    while (num <= 0)
    {
        cout << "Enter a positive integer value: ";
        cin >> num;        
    }
    
    for (int i = 1; i <= num; i++)
        sum += i;
    
    cout << "The sum is " << sum;
    
    return 0;
}

