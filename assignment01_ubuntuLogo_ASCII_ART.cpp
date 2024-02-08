//============================================================================
// FileName : UbuntuLogo.cpp
// Name : Henry M. Rivera Osso
// Student Number : Y00575252
// Course : COEN 2210
//============================================================================
#include <iostream>
#include <string> 

using namespace std;

int main(void) {
    // The building blocks for the program
    string space = " ";
    string block = "#";
    string sign = "$";
    string modulo = "%";
    string dot = ".";
    string space10 = "          ";
    string space5 = "     ";
    string space2 = "  ";
    string space3 = "   ";
    string space4 = "    ";

// divided the program in lines for the logo for easier debugging 

    string ubuntuLogoLine1 = space10 + space10 + space5 + space + "." + "%" + "#" + "@" + "#" + "-" + "\n";
    string ubuntuLogoLine2 = space10 +space4 + space4 + "y" + "y" + "y" + "y" + "y" + "-" + "b" + "-" + "y" + "y" +"y" + "y" + "y" +"y" + "#" + "\n";
    string ubuntuLogoLine3 = space10 +space5 + "!" + "%" + "%" + "#" + "%" + "%" +"%" + "%" + "%" + "%" + "-" + "y" + "y" + "y" + "y" + "y" + "y" + "@" + "\n";
    string ubuntuLogoLine4 = space10 + "." + "#" + "#" + space2 + "." + "!" + "%" + "#" + "#" + "#" + "#" + "#" + "#" + "%" + "-" + "." + "#" + "$" + "$" + "$" + "%" + "*" + "\n";
    string ubuntuLogoLine5 = space4 + space4 + "." + "!" + "#" + "#" + "@" + "!" + space3 + "%" + "#" + "#" + "#" + "#" + "#" + "#" + "#" + "%" + "!" + "-" + "-" + "!" + "%" + "-" + "\n";
    string ubuntuLogoLine6 = space5 + space2 + "@" + "!" + "#" + "@" + "#" + "!" + "#" + "#" + "." + space + "*" + "." + "." + "*" + "*" + "*" + "." + "-" + "%" + "@" + "@" + "#" + "#" + "#" + "#" + "#" + "%" + "\n";
    string ubuntuLogoLine7 = space3 + space3 + "." + "!" + "#" + "@" + "!"+ "#" + "@" + "%" + "." + space10 + space + "*" + "#" + "$" + "$" + "$" + "@" + "@" + "#" + "%" + "\n";
    string ubuntuLogoLine8 = space + "." + "#" + "#" + "%" + "#" + "!" + "#" + "@" + "@" + "#" + "#" + "!" + space10 + space5 + "%" + "$" + "$" + "$" + "@" + "@" + "@" +"." + "\n";
    string ubuntuLogoLine9 =  modulo + block + "#" + "#" + "%" + "%" + "!" + "*" + "@" + "@" + "#" + "@" + space10 + space5 + "%" + "!" + "!" + "-" + "-" + "!" + "." + "\n";
    string ubuntuLogoLine10 = modulo + "#" + "%" + "#" + "@" + "#" + "#" + "#" + "*" + "@" + "#" + "#" + "@" + space10 +space5 + "#" + "#" + "%" + "%" + "%" + "%" + "." + "\n";
    string ubuntuLogoLine11 = space + "." + "#" + "#" + "." + "@" + "#" + "#" + "#" + "@" + "@" + "!" + "*" + space10 + space3 + "%" + "d" + "d" + "d" + "&" + "&" + "&" + "." + "\n";
    string ubuntuLogoLine12 = space3 + space3 + "." + "#" + "." + "@" + "#" + "@" + "@" + "!" + "*" + space10 + "*" + "@" + "d" + "d" + "&" + "&" + "&" + "&" + "#" + "\n";
    string ubuntuLogoLine13 = space3 + space3 + "%" + "#" + "." + "#" + "#" + "@" + "#" + "@" + "*" + "*" + "-" + "*" + "*" + "*" + "*" + "." + "!" + "@" + "&" + "d" + "&" + "&" + "&" + "&" + "&" + "#" + "\n";
    string ubuntuLogoLine14 = space3 + space4 + "*" + "!" + "@" + "#" + "#" + "#" + "b" + "*" + "@" + "&" + "&" + "&" + "&" + "&" + "&" + "&" + "&" + "y" + "@" + "#" + "#" + "@" + "$" + "!" + "\n";
    string ubuntuLogoLine15 = space5 + space4 + "." + "@" + "!" + "*" + "." + "$" + "y" + "#" + "#" + "#" + "#" + "#" + "#" + "#" + "%" + "." + "@" + "@" + "#" + "#" + "@" + "*" + "\n";
    string ubuntuLogoLine16 = space10 + space3 + "%" + "@" + "$" + "y" + "y" + "y" + "y" + "y" + "y" + "@" + "#" + "#" + "@" + "@" + "@" + "#" + "#" + "#" + "%" +  "\n";
    string ubuntuLogoLine17 = space10 + space10 + space3 + "#" + "@" + "@" + "#" + "#" + "#" + "@" + "%" + "!" + "\n";
    string ubuntuLogoLine18 = space10 + space10 + space4 + "*" + "@" + "@" + "#" + ".";

//the 3 big chunks of the ubuntu logo lines

    string ubuntu7 = ubuntuLogoLine1 + ubuntuLogoLine2 + ubuntuLogoLine3 + ubuntuLogoLine4 +ubuntuLogoLine5 + ubuntuLogoLine6 + ubuntuLogoLine7;
    string ubuntu10 = ubuntuLogoLine8 + ubuntuLogoLine9 + ubuntuLogoLine10;
    string ubuntu18 = ubuntuLogoLine11 + ubuntuLogoLine12 + ubuntuLogoLine13 + ubuntuLogoLine14 + ubuntuLogoLine15 + ubuntuLogoLine16 + ubuntuLogoLine17 + ubuntuLogoLine18;

//final string with the logo 
    string ubuntuF = ubuntu7 + ubuntu10 +ubuntu18;
    cout << ubuntuF << endl;
    return 0;
}
