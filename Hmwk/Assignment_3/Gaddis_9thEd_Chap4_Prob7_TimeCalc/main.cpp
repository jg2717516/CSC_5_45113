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

    double seconds;
    
    cout << "Enter number of seconds: ";
    cin >> seconds;
    
    if (seconds >= 86400)
        cout << seconds << " seconds = " << seconds/86400 << " days.";
    else if (seconds >= 3600)
        cout << seconds << " seconds = " << seconds/3600 << " hours.";
    else if (seconds >= 60)
        cout << seconds << " seconds = " << seconds/60 << " minutes.";
    else
        cout << seconds << " seconds.";
    
    return 0;
}

