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

    int num1, num2, answer;
    num1 = (rand() % 100) + 1;
    num2 = (rand() % 100) + 1;
    answer = num1 + num2;
    int input;
    
    // I have no idea why it's only producing 8 and 50
    
    cout << num1 << " + " << num2 << " = [Enter Answer] "; 
    cin >> input;
    
    if (answer == input)
        cout << "Correct!";
    else
        cout << "Wrong. Correct answer is " << answer;
    
    return 0;
}

