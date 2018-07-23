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

    int num;
    
    cout << "Enter a number between 1 and 10: ";
    cin >> num;
    
    if (num <= 1 || num >= 10)
    {
        cout << "Invalid entry: number is not between 1 and 10\n";
        cout << "Re-run program";
    }
    else
    {
        switch(num)
        {
            case 1: cout << num << " = I";
                    break;
            case 2: cout << num << " = II";
                    break;
            case 3: cout << num << " = III";
                    break;
            case 4: cout << num << " = IV";
                    break;
            case 5: cout << num << " = V";
                    break;
            case 6: cout << num << " = VI";
                    break;
            case 7: cout << num << " = VII";
                    break;
            case 8: cout << num << " = VIII";
                    break;
            case 9: cout << num << " = IX";
                    break;
            case 10: cout << num << " = X";
                    break;
        }
    }
    
    return 0;
}

