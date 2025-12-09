#include<iostream>
using namespace std;

int main()
{

float avg;

float Grades[3];



cout << "please enter grade one " << endl;
cin >> Grades[0];

cout << "please enter grade two " << endl;
cin >> Grades[1];

cout << "please enter grade three " << endl;
cin >> Grades[2];

cout << "*********************************" << endl;

avg = (Grades[0] + Grades[1] + Grades[2]) / 3;

cout <<"Your  avrege is : " << avg << endl;


}
