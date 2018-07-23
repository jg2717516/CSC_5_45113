/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 13, 2018, 12:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int choice;
    
    cout << "Choose a program from the following list\n";
    cout << "Type 1 for Sum of Numbers\n";
    cout << "Type 2 for Ocean Levels\n";
    cout << "Type 3 for Calories Burned\n";
    cout << "Type 4 for Membership Fees Increase\n";
    cout << "Type 5 for Distance Traveled\n";
    cout << "Type 6 for Pennies for Days\n";
    cout << "Type 7 for Hotel Occupancy\n";
    cout << "Type 8 for Average Rainfall\n";
    cout << "Type 9 for Population\n";
    cout << "Type 10 for Celsius to Fahrenheit Table\n";
    cout << "Choice: ";
    
    cin >> choice;
    
    if (choice >= 1 && choice <= 10)
    {
        switch(choice)
        {
            case 1:
            {
                cout << "\nSum of Numbers\n";
                cout << "--------------\n\n";
                int num, sum = 0;
                cout << "Enter a positive integer value: ";
                cin >> num;
                while (num <= 0){
                    cout << "Enter a positive integer value: ";
                    cin >> num;        
                }
                for (int i = 1; i <= num; i++)
                    sum += i;
                cout << "The sum is " << sum;                
                break;
            }
            case 2:
            {
                cout << "\nOcean Levels\n";
                cout << "------------\n\n";
                float sum;
                for (int i = 1; i <= 25; i++){
                    sum += 1.5;
                    cout << i << " years: " << sum << "mm\n";
                }
                break;
            }
            case 3:
            {
                cout << "\nCalories Burned\n";
                cout << "---------------\n\n";
                int intrvl = 5;
                double cal;
                for (int i = 1; i <= 30; i++){
                    cal += 3.6;
                    if (i % intrvl == 0){
                        cout << i << " minutes: " << cal << " calories\n";
                    }
                }
                break;
            }
            case 4:
            {
                cout << "\nMembership Fees Increase\n";
                cout << "------------------------\n\n";                
                float cost = 2500, perc = 0.04, years = 6;
                for (int i = 1; i <= years; i++){
                    cost = cost + (cost * perc);
                    cout << i << " years: $" << cost << endl;
                }
                break;
            }
            case 5:
            {
                cout << "\nDistance Traveled\n";
                cout << "-----------------\n\n";                
                int speed, time;
                cout << "Enter speed of vehicle in mph: ";
                cin >> speed;
                while (speed <= 0){
                    cout << "Enter speed of vehicle in mph: ";
                    cin >> speed;
                }
                cout << "Enter time traveled in hours: ";
                cin >> time;
                while (time < 1){
                    cout << "Enter time traveled in hours: ";
                    cin >> time;
                }
                for (int i = 1; i <= time; i++){
                    cout << i << "h: " << speed * i << "miles traveled\n";
                }
                break;
            }
            case 6:
            {
                cout << "\nPennies for Days\n";
                cout << "----------------\n\n";                
                int days;
                float salary = 0.005;
                cout << "Enter number of days worked: ";
                cin >> days;
                while (days < 1){
                    cout << "Enter number of days worked: ";
                    cin >> days;        
                }
                for (int i = 1; i <= days; i++){
                    salary = salary * 2;
                    cout << setprecision(2) << fixed;
                    cout << "Day " << i << ": $" << salary << endl;
                }
                break;
            }
            case 7:
            {
                cout << "\nHotel Occupancy\n";
                cout << "---------------\n\n";                
                float floors, rooms, occpd, ttlRms = 0, ttlOcp = 0;
                cout << "Enter number of floors in the hotel: ";
                cin >> floors;
                while (floors < 1){
                    cout << "Enter number of floors in the hotel: ";
                    cin >> floors;        
                }
                for (int i = 1; i <= floors; i++)
                {
                    if (i == 13) continue;
                    cout << "Enter number of rooms in floor " << i << ": ";
                    cin >> rooms;
                    while (rooms < 10){
                        cout << "Enter number of rooms in floor " << i << ": ";
                        cin >> rooms;            
                    }
                    cout << "How many rooms are occupied? ";
                    cin >> occpd;
                    ttlRms = ttlRms + rooms;
                    ttlOcp = ttlOcp + occpd;
                }
                cout << "Total rooms: " << ttlRms << endl;
                cout << "Total occupied: " << ttlOcp << endl;
                cout << "Total unoccupied: " << ttlRms - ttlOcp << endl;
                cout << "Occupied percentage: " << (ttlOcp / ttlRms) * 100 << "%\n";
                break;
            }
            case 8:
            {
                cout << "\nAverage Rainfall\n";
                cout << "----------------\n\n";                
                float years, rain, ttlRain = 0;
                cout << "Enter number of years: ";
                cin >> years;
                while (years < 0){
                    cout << "Enter number of years: ";
                    cin >> years;       
                }
                for (int i = 1; i <= years; i++){
                    cout << "\nYear " << i << endl << endl;
                    for (int x = 1; x <= 12; x++){
                        cout << "Enter inches of rainfall for month " << x << ": ";
                        cin >> rain;
                        while (rain < 0){
                            cout << "Enter inches of rainfall for month " << x << ": ";
                            cin >> rain;               
                        }
                        ttlRain = ttlRain + rain;
                    }
                }
                cout << "\nTotal number of months: " << years * 12 << endl;
                cout << "Total inches of rainfall: " << ttlRain << endl;
                cout << "Average rainfall per month: " << ttlRain / (years * 12) << "in" << endl;                    
                break;
            }
            case 9:
            {
                cout << "\nPopulation\n";
                cout << "----------\n\n";                
                float orgnsms, growth, days, popu = 0;
                cout << "Population \n\n";
                cout << "Enter starting number of organisms: ";
                cin >> orgnsms;
                while (orgnsms < 2){
                   cout << "Enter starting number of organisms: ";
                   cin >> orgnsms;       
                }
                cout << "Enter percentage growth: ";
                cin >> growth;
                while (growth < 0){
                    cout << "Enter percentage growth: ";
                    cin >> growth;        
                }
                growth = growth / 100;
                cout << "Enter number of days: ";
                cin >> days;
                while (days < 1){
                    cout << "Enter number of days: ";
                    cin >> days;     
                }    
                cout << endl;
                cout << "Day        Population\n";
                cout << "----------------------\n";
                for (int i = 1; i <= days; i++){
                    popu = popu + (orgnsms + (orgnsms * growth));
                    cout << " " << i << "\t\t" << popu << endl;
                }                
                break;
            }
            case 10:
            {
                cout << "\nCelsius to Fahrenheit\n";
                cout << "---------------------\n\n";                
                float fahren, celsius;
                cout << "Celsius      Fahrenheit\n";
                cout << "-----------------------\n";
                for (celsius = 0; celsius <= 20; celsius++){
                    fahren = ((1.8) * celsius) + 32;
                    cout << celsius << "C   \t\t" << fahren << "F\n";
                }
                break;
            }            
        }
    }
    else
    {
        cout << "Exiting menu";
    }
    
    return 0;
}

