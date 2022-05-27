#ifndef DATA_RECORD_H
#define DATA_RECORD_H
#include <string>
using namespace std;


class DataRecord {
    private:
        string countryName, countryCode;
        int nConfirmCases, nDeaths, nRecovCases, tConfirmCases, tDeaths, tRecovCases;
    public:

        DataRecord(string name, string code, int cases1, int ndths, int recov1, int cases2, int tdths, int recov2);
       
        int getNewConfCases();
        int getNewDeaths();
        int getNewRecovCases();
        int getTotalConfCases();
        int getTotalDeaths();
        int getTotalRecovCases();

        string getName();
        string getCode();
        ~DataRecord();

};

#endif