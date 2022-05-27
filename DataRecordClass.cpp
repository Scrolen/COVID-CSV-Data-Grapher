#include "DataRecord.h"

using namespace std;

        string countryName, countryCode;
        int nConfirmCases, nDeaths, nRecovCases, tConfirmCases, tDeaths, tRecovCases;


 DataRecord::DataRecord(string name, string code, int cases1, int ndths, int recov1, int cases2, int tdths, int recov2){

     countryName = name;
     countryCode = code;
     nConfirmCases = cases1;
     nDeaths = ndths;
     nRecovCases = recov1;
     tConfirmCases = cases2;
     tDeaths = tdths;
     tRecovCases = recov2;

 }
 int DataRecord::getNewConfCases(){
     return nConfirmCases;
 }
 int DataRecord::getNewDeaths(){
     return nDeaths;
 }
 int DataRecord::getNewRecovCases(){
     return nRecovCases;
 }
 int DataRecord::getTotalConfCases(){
     return tConfirmCases;
 }
 int DataRecord::getTotalDeaths(){
     return tDeaths;
 }
 int DataRecord::getTotalRecovCases(){
     return tRecovCases;
 }
 string DataRecord::getName(){
     return countryName;
 }
 string DataRecord::getCode(){
     return countryCode;
 }
 DataRecord::~DataRecord(){

 }
