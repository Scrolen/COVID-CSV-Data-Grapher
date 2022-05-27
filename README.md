# Covid Data Grapher
This program takes as input a .csv file containing Data on Covid cases and outputs a graph depending on the arguments provided by the user. The y axis for the graph is the Countries and the x axis is what the user wants to view (this will be asked by the program on execution).

To Compile:

    g++ main.cpp DataRecordClass.cpp compare.cpp printGraphA.cpp printGraphD.cpp printN.cpp -o main

This will create an executable named main. To Run the program:

    ./main

 
- The program will ask for the name of the data file (example "summary.csv")
- Then the program will ask what field to sort the data on "Enter Order To Sort By [1 = New Confirmed Cases, 2 = New Deaths, 3 = New Recovered Cases, 4 = Total Confirmed Cases, 5 = Total Deaths, 6 = Total Recovered Cases]"
- Finally the program will ask what order you would like the data to be sorted in ascending or descending "Enter Sort Order [1 = Ascending, 2 = Descending]"

 A graph will be printed depending on the users choice and the program will end:
 
<img width="595" alt="Screen Shot 2022-05-27 at 12 01 33 PM" src="https://user-images.githubusercontent.com/74621126/170739551-e139613a-d234-4ec9-b93d-7051b09e32ba.png">
