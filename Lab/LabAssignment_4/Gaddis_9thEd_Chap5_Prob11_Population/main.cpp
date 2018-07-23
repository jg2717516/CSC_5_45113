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

    float orgnsms, 
          growth, // %
          days, 
          popu = 0;
    
    cout << "Population \n\n";
    
    cout << "Enter starting number of organisms: ";
    cin >> orgnsms;
    
    while (orgnsms < 2)
    {
       cout << "Enter starting number of organisms: ";
       cin >> orgnsms;       
    }
    
    cout << "Enter percentage growth: ";
    cin >> growth;
    
    while (growth < 0)
    {
        cout << "Enter percentage growth: ";
        cin >> growth;        
    }
    
    growth = growth / 100;
    
    cout << "Enter number of days: ";
    cin >> days;
    
    while (days < 1)
    {
        cout << "Enter number of days: ";
        cin >> days;     
    }    
    
    cout << endl;
    cout << "Day        Population\n";
    cout << "----------------------\n";
    
    for (int i = 1; i <= days; i++)
    {
        popu = popu + (orgnsms + (orgnsms * growth));
        cout << " " << i << "\t\t" << popu << endl;
    }

    return 0;
}

