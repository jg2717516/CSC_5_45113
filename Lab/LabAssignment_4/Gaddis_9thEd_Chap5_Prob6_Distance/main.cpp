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

    int speed, time;
    
    cout << "Enter speed of vehicle in mph: ";
    cin >> speed;
    
    while (speed <= 0)
    {
        cout << "Enter speed of vehicle in mph: ";
        cin >> speed;
    }
    
    cout << "Enter time traveled in hours: ";
    cin >> time;
    
    while (time < 1)
    {
        cout << "Enter time traveled in hours: ";
        cin >> time;
    }
    
    for (int i = 1; i <= time; i++)
    {
        cout << i << "h: " << speed * i << "miles traveled\n";
    }
    
    return 0;
}

