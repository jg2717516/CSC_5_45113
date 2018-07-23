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

    float years, 
          rain, 
          ttlRain = 0;
    
    cout << "Average Rainfall\n\n";
    
    cout << "Enter number of years: ";
    cin >> years;
    
    while (years < 0)
    {
        cout << "Enter number of years: ";
        cin >> years;       
    }
    
    for (int i = 1; i <= years; i++)
    {
        cout << "\nYear " << i << endl << endl;
        
        for (int x = 1; x <= 12; x++)
        {
            cout << "Enter inches of rainfall for month " << x << ": ";
            cin >> rain;
            
            while (rain < 0)
            {
                cout << "Enter inches of rainfall for month " << x << ": ";
                cin >> rain;               
            }
            
            ttlRain = ttlRain + rain;
        }
    }
    
    cout << "\nTotal number of months: " << years * 12 << endl;
    cout << "Total inches of rainfall: " << ttlRain << endl;
    cout << "Average rainfall per month: " << ttlRain / (years * 12) << "in" << endl;
    
    return 0;
}

