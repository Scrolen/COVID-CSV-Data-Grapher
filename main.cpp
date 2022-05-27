// Zacharea Kaawan (251008043), main file of program, 2020-10-06

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "DataRecord.h"
#include "printGraphA.h"
#include "printGraphD.h"
#include "compare.h"

using namespace std;


int main() {

    int sortBy;
    int sortOrder;
    string fileName;
    string recordLine;
    vector<DataRecord> dataRecords;
    string token;
    string delimiter =",";
    vector<string> csvLine;
    string sortByField;

// User input for Order by, Sorting Order, File Name, as well as error handling for each input
    cout << "Enter CSV filename: ";
    cin >> fileName;
    cout << "Enter Order To Sort By [1 = New Confirmed Cases, 2 = New Deaths, 3 = New Recovered Cases, 4 = Total Confirmed Cases, 5 = Total Deaths, 6 = Total Recovered Cases]: ";
    cin >> sortBy;
    
    if (sortBy < 1 || sortBy > 6){
        cout << "Invalid Order to Sort By...Exiting Program";
        return 0;
    }
    cout << "Enter Sort Order [1 = Ascending, 2 = Descending]: ";
    cin >> sortOrder;

    if (sortOrder != 1 && sortOrder != 2){
        cout << "Invalid Sort Order...Exiting Program";
        return 0;
    }

// End of User input and Error Handling



    ifstream DataRecordFile(fileName);

    if (DataRecordFile.fail()){
        cout << "Invalid File or File Does Not Exist...Exiting Program";
        return 0;
    }
    getline(DataRecordFile, recordLine); // Skips the first line of the csv file




    // While Loop to get each line from the csv file and create DataRecord Objects and store in vector.
    while (getline(DataRecordFile, recordLine)){

        
        
        int indexForName = recordLine.find('"',1);
        token = recordLine.substr(0,indexForName + 1);
        recordLine.erase(0,indexForName + 2);
        token.erase(token.begin());
        token.pop_back();
        // cout<< token + "\n";
        csvLine.push_back(token);


        for(int i = 0; i < 10; i++){
            token = recordLine.substr(0,recordLine.find(delimiter));
           
           
           
           
            if(token.at(0) == '\"'){
                token.erase(token.begin());

            }

            if(token.at(token.length() -1) == '\"'){
                token.pop_back();
            }
            
            // cout<< token + "\n";
            csvLine.push_back(token);
            recordLine.erase(0, recordLine.find(delimiter) + delimiter.length());
        }


        // create new DataRecord Object for the csvLine and add it to the vector containing the DataRecord Objects.
        DataRecord dataRec(csvLine[0],csvLine[1],stoi(csvLine[3]),stoi(csvLine[4]),stoi(csvLine[5]),stoi(csvLine[8]),stoi(csvLine[9]),stoi(csvLine[10]));
        dataRecords.push_back(dataRec);

        csvLine.clear();
    }

    // SORTING VECTOR CONTAINING DATA RECORDS DEPENING ON USER INPUT AND PRINT GRAPHS.

    if (sortBy == 1 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareNCC);
        printGraphAscending(sortBy, dataRecords);

    }
    if (sortBy == 2 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareNDeaths);
        printGraphAscending(sortBy, dataRecords);

    }
    if (sortBy == 3 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareNRC);
        printGraphAscending(sortBy, dataRecords);

    }
    if (sortBy == 4 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareTCC);
        printGraphAscending(sortBy, dataRecords);
    }
    if (sortBy == 5 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareTDeaths);
        printGraphAscending(sortBy, dataRecords);

    }
    if (sortBy == 6 && sortOrder == 1){
        sort(dataRecords.begin(),dataRecords.end(), compareTRC);
        printGraphAscending(sortBy, dataRecords);

   }
    if (sortBy == 1 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareNCC);
        printGraphDescending(sortBy, dataRecords);

    }
    if (sortBy == 2 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareNDeaths);
        printGraphDescending(sortBy, dataRecords);

    }
    if (sortBy == 3 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareNRC);
        printGraphDescending(sortBy, dataRecords);

    }
    if (sortBy == 4 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareTCC);
        printGraphDescending(sortBy, dataRecords);

    }
    if (sortBy == 5 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareTDeaths);
        printGraphDescending(sortBy, dataRecords);

    }
    if (sortBy == 6 && sortOrder == 2){
        sort(dataRecords.begin(),dataRecords.end(), DcompareTRC);
        printGraphDescending(sortBy, dataRecords);

   }
    DataRecordFile.close();

    return 0;
}
