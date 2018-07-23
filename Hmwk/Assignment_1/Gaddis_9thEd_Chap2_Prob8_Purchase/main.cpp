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
    
    float a, b, c, d, e, tax, subtotal; // items, tax, subtotal
    
    a = 15.95;
    b = 24.95;
    c = 6.95;
    d = 12.95;
    e = 3.95;
    tax = 0.07;
    subtotal = a + b + c + d + e;
    
    cout << "Item 1 = $" << a << "\n";
    cout << "Item 2 = $" << b << "\n";
    cout << "Item 3 = $" << c << "\n";
    cout << "Item 4 = $" << d << "\n";
    cout << "Item 5 = $" << e << "\n";
    cout << "Subtotal = $" << subtotal << "\n";
    cout << "Tax = $" << subtotal * tax << "\n";
    cout << "Total = $" << subtotal + (subtotal * tax);
    
}

