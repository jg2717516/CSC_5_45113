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

    int rect1L, rect1W, rect1A;
    int rect2L, rect2W, rect2A;
    
    cout << "Enter length of rectangle 1: ";
    cin >> rect1L;
    cout << "Enter width of rectangle 1: ";
    cin >> rect1W;
    rect1A = rect1L * rect1W;
    
    cout << "Enter length of rectangle 2: ";
    cin >> rect2L;
    cout << "Enter width of rectangle 2: ";
    cin >> rect2W;
    rect2A = rect2L * rect2W;    
    
    if (rect1A > rect2A)
        cout << "Rectangle 1 has bigger area";
    else if (rect2A > rect1A)
        cout << "Rectangle 2 has bigger area";
    else
        cout << "Rectangles have the same area";
    
    return 0;
}

