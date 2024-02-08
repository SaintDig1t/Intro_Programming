 //============================================================================
// FileName : arturito_c3p0.cpp
// Name : Henry M. Rivera Osso
// Student Number : Y00575252
// Course : COEN 2210
//============================================================================
#include <iostream> 
#include <string>

using namespace std;
int main (void) {
//initial building blocks for the programs crated as variables 
    string space20 = "                    ";
    string space10 = "          ";
    string space3 = "   ";
    string space = " ";
    string space4 = "    ";
    string line = "-";
    string upSlash = "/";
    string downSlash = "\\";

//The actual body of the ascii drawing divided into lines to be able to debug and read better 
    string line1 = space20 + space + space + "-" + "\n";
    string line2 = space20 +space + upSlash + "~" + downSlash + "\n";
    string line3 = space20 + space + "|" + "0" + "0" + ")" + "\n";
    string line4 = space20+ space + "-" + downSlash + "=" + upSlash + "-" + "\n";
    string line5 = space4 + space3 + "-" + "-" + "-" + space10 + upSlash + space + space + "-" + space + space + downSlash + "\n";
    string line6 = space3 + space3 + "/" + space + "()" + downSlash + space4 + space4 + upSlash + upSlash + "|" + upSlash + "." + downSlash + "|" + downSlash + downSlash + "\n"; 
    string line7 = space4 + "-" + "|" + "-" + "-" + "-" + "-" + "-" + "|" + "-" + space4 + space + "|" + "|" + space + space + downSlash + "-" + upSlash + space + space + "|" + "|" + "\n";
    string line8 = space3 + "|" + space + "|" + space + "=" + "=" + "=" + space + "|" + space + "|" + space4 + "|" + "|" + space + "|" + downSlash + space + upSlash + "|" + space + "|" + "|" + "\n";
    string line9 = space3 + "|" + "-" + "|" + space + space + "0" + space + space + "|" + "-" + "|" + space4 + space + "#" + space + downSlash + "-" + space + "-" + upSlash + space + "#" + "\n";
    string line10 = space3 + "|" + "|" + "|" + space + space + "0" + space + space + "|" + "|" + "|" + space4 +space3 + "|" + space + "|" + space + "|" + "\n";
    string line11 = space3 + "|" + "|" + "|" + "-" + "-" + "*" + "-" + "-" + "|" + "|" + "|" + space4 + space3 + "|" + space + "|" + space + "|" + "\n";
    string line12 = space3 + "|" + "~" + space + downSlash + "-" + "-" + "-" + upSlash + space + "~" + "|" + space3 + space4 + "[]"+ "|" +"[]" + "\n";
    string line13 = space3 + "/=" + downSlash + space + "/=" + downSlash + space + "/=" + downSlash + space3 + space4 + "|" + space + "|" + space + "|" + "\n";
    string line14 = "---[-]-[-]-[-]------/-]-[-" + downSlash + "---";

//lines converted to chunks in order to debug and also the chunks are unified to create the final code 

    string art7 = line1 + line2 + line3 + line4 +line5 + line6 +line7;
    string art14 = line8 + line9 + line10 + line11 + line12 + line13 + line14;
    string artF = art7 + art14;

//code is called by the main function 
    //cout << downSlash;
    //cout << art7;
    cout << artF;
    return 0;

}

