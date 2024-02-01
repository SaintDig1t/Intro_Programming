//============================================================================
// FileName : HelloWorld.cpp
// Name : Henry M. Rivera Osso
// Student Number : Y00575252
// Course : COEN 2210
//============================================================================
#include <iostream>
#include <string>

using namespace std;

int main()
{
  //cout << "!!!Hello World!!!" << endl;
  // prints !!!Hello World!!!
  //return 0;

  //string firstName, lastName;
  //firstName = "George ";
  //lastName = "Washington";

  //cout << firstName + lastName << endl;
  //return 0;
  string block_line = "|**|";
  string space_line = "   ";
  string space2 = space_line +space_line;
  string space4 = space_line + space_line +space_line +space_line;
  string space3 = space_line +space_line +space_line;
  string spaceBlock = space_line + "\n" + space_line;
  string block4 = block_line +block_line +block_line +block_line;
  string block3 = block_line +block_line +block_line;
  string block2 = block_line + block_line;
  string squareBlock = block_line + "\n" + block_line;
  string sideL = block_line + "\n" + block_line + block_line + block_line + block_line;
  string zBlock = block_line + block_line + "\n" + space_line + block_line + block_line;
  string sBlock = space_line + block_line + block_line + "\n" + block_line + block_line;
  string triangleBlock = space_line + block_line + space_line + "\n" + block_line + block_line +block_line;
  string lineBlock = block_line + block_line + block_line + block_line;
  string invertedL = space_line + space_line + space_line + space_line + block_line + "\n" + block_line + block_line + block_line +block_line;
  string invader1 = space4 + space3 + block4 +"\n" + space4 +space_line +block4 +block4 +"\n" + space4 + block4 +block4 +block_line +block_line +"\n" + space3 + block4 +block4 +block4 + "\n" + space2 + block2 + space_line +block2 +space_line +block2 + space_line + block2 +space_line +block2 +"\n" + space_line +block4 +block4 +block4 + block4 + "\n" + space3 +block3 + space2 +block2 +space2 +block3 + "\n" + space3 + block3 + space2 + block2 +space2 + block3 +"\n" + space_line+ block_line + space4 +space4 +block_line +"\n";


  //cout << squareBlock + "\n";
  //cout << sideL;
  //cout << zBlock;
  //cout << sBlock;
  //cout << triangleBlock;
  //cout << lineBlock;
  //cout << invertedL;
  cout << invader1;




}






