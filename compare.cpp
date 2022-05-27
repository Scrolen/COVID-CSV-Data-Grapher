// Zacharea Kaawan (251008043), Compare functions implementation file, 2020-10-06

#include <iostream>
#include "DataRecord.h"
#include "compare.h"

using namespace std;

// These functions are compare functions which compare Data Record Object on the specifc attribute, The input are 2 Data record objects i and j
// return value is a boolean, True or False.

// USED TO SORT IN ASCENDING ORDER
bool compareNCC(DataRecord i, DataRecord j){
    return (i.getNewConfCases() < j.getNewConfCases());
}
bool compareNDeaths(DataRecord i, DataRecord j){
    return (i.getNewDeaths() < j.getNewDeaths());
}
bool compareNRC(DataRecord i, DataRecord j){
    return (i.getNewRecovCases() < j.getNewRecovCases());
}
bool compareTCC(DataRecord i, DataRecord j){
    return (i.getTotalConfCases() < j.getTotalConfCases());
}
bool compareTDeaths(DataRecord i, DataRecord j){
    return (i.getTotalDeaths() < j.getTotalDeaths());
}
bool compareTRC(DataRecord i, DataRecord j){
    return (i.getTotalRecovCases() < j.getTotalRecovCases());
}

// USED TO SORT IN DESCENDING ORDER
bool DcompareNCC(DataRecord i, DataRecord j){
    return (j.getNewConfCases() < i.getNewConfCases());
}
bool DcompareNDeaths(DataRecord i, DataRecord j){
    return (j.getNewDeaths() < i.getNewDeaths());
}
bool DcompareNRC(DataRecord i, DataRecord j){
    return (j.getNewRecovCases() < i.getNewRecovCases());
}
bool DcompareTCC(DataRecord i, DataRecord j){
    return (j.getTotalConfCases() < i.getTotalConfCases());
}
bool DcompareTDeaths(DataRecord i, DataRecord j){
    return (j.getTotalDeaths() < i.getTotalDeaths());
}
bool DcompareTRC(DataRecord i, DataRecord j){
    return (j.getTotalRecovCases() < i.getTotalRecovCases());
}
