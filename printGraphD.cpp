// Zacharea Kaawan (251008043), printGraphD implementation file, 2020-10-06

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "DataRecord.h"
#include "printN.h"
#include "printGraphD.h"
using namespace std;


// PrintGraphDescending, Prints graph in descending order based off of user chosen parameter,
// int srtBy is a integer corresponding to the field the graph is printing for, vect is a vector containing the Data records
// there is no return value.

void printGraphDescending(int srtBy, vector<DataRecord> vect){
   int highest;
   int numbPerSymbol;
   
    if (srtBy == 1){
        highest = vect.at(0).getNewConfCases();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getNewConfCases()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"New Confirmed Cases; Each # is approx. "<< numbPerSymbol << " cases" << endl;        

    }


    else if (srtBy == 2){
        highest = vect.at(0).getNewDeaths();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getNewDeaths()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"New Deaths; Each # is approx. "<< numbPerSymbol << " deaths" <<endl;    


    }


    else if (srtBy == 3){
        highest = vect.at(0).getNewRecovCases();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getNewRecovCases()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"New Recovered Cases; Each # is approx. "<< numbPerSymbol << " cases" << endl;
    }


    else if (srtBy == 4){
        highest = vect.at(0).getTotalConfCases();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getTotalConfCases()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"Total Confirmed Cases; Each # is approx. "<< numbPerSymbol << " cases" << endl;

    }


    else if (srtBy == 5)
    {
        highest = vect.at(0).getTotalDeaths();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getTotalDeaths()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"Total Deaths; Each # is approx. "<< numbPerSymbol << " deaths" << endl;

    }


    else if (srtBy == 6)
    {
        highest = vect.at(0).getTotalRecovCases();
        if (highest >= 70){
            numbPerSymbol = highest/70;
        }
        else if (highest == 0)
        {
            numbPerSymbol = 1;
        }
        else
        {
            numbPerSymbol = highest%70;
        }
        int symbNum;

        for (int k = 0; k < 10; k++){
            cout<< vect.at(k).getCode() << "  |  ";
            symbNum = vect.at(k).getTotalRecovCases()/numbPerSymbol;
            printN('#',symbNum);
        }
        printN('-',75);
        cout<<"Total Recovered Cases; Each # is approx ."<< numbPerSymbol << " cases"<< endl;
    }
}
