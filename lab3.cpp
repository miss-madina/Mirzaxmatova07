//
// Created by Madinabonu Mirzaxmatova on 10/02/26.
//
#include <iostream>
using namespace std;
int main() {
    // 1. Integer variable
    int intNumber = 30;   // number of students in the lab

    // 2. Float variable
    float floatNumber = 3.14f;   // value of pi

    // 3. Double variable
    double doubleNumber = 45.1234;

    // 4. Boolean variable
    bool boolean = true;

    // 5. Character variable
    char charName = 'A';

    // 6. Print values and sizes
     cout << "\t \t PROBLEM1"<< endl;
    cout << "Number of Students =" << intNumber
         << ", Size = " << sizeof(intNumber) << " bytes" << endl;

    cout << "PI =" << floatNumber
         << ", Size = " << sizeof(floatNumber) << " bytes" << endl;

    cout << "double variable name= " << doubleNumber
         << ", Size = " << sizeof(doubleNumber) << " bytes" << endl;

    cout << " bool type variable name = " << boolean
         << ", Size = " << sizeof(boolean) << " bytes" << endl;

    cout << "charName = " << charName
         << ", Size = " << sizeof(charName) << " bytes" << endl;
     cout << "\t \t PROBLEM2"<< endl;

     cout << "\"I'am standing\" on the edge of some crazy cliff.\n What I have to do,"
             "I have to catch everybody\\\n if they start to go over cliff-I mean\n"
             "\\if they're running and they don't look\n where they're going I have to come out \n"
             "from somewhere and \t \t catch them."<<endl;
     cout << "\t \t PROBLEM3"<<endl;
     int a=189;
     char b='B';
     float number=a/3;
     double value=b;
     float y=(a+b)/5;
     double character=(a/10)-1;
     cout << number<<endl;
     cout<< value<<endl;
     cout<< y<<endl;
     cout << char(character+(double)b);


    return 0;

}





