#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   cout << "Problem 1: Print an ID card\n\n";
    cout << "+----------------------------------+\n";
    cout << "|         STUDENT ID CARD          |\n";
    cout << "+----------------------------------+\n";
    cout << "|Name:        Madinabonu           |\n";
    cout << "|Student ID:  Lab1_250135          |\n";
    cout << "|Course:      CS102                |\n";
    cout << "|Term:        Spring 2026          |\n";
    cout << "+----------------------------------+\n" << endl;;





    cout << "He said:   \"I like C++ \"\n";



    cout << "Name\tScore\n";
    cout << "Madinabonu\t\90";





    cout << "+------------+----------+-----------+----------+-----------+\n";
    cout << "|    Time    |    Mon   |    Tue    |    Wed   |    Thu    |\n";
    cout << "+------------+----------+-----------+----------+-----------+\n";
    cout << "||||||\n" << endl;




    cout << "+--------------------------------------+\n";
    cout << "|            CS102 TOOl MENU           |\n";
    cout << "+--------------------------------------+\n";
    cout << "| 1) Print ID card                     |\n";
    cout << "| 2) SHow schedule                     |\n";
    cout << "| 3) Generate receipt                  |\n";
    cout << "| 4) About                             |\n";
    cout << "| 5) Exit                              |\n";
    cout << "+--------------------------------------+\n";
    cout << "|  Author:\tMadinabonu\tLab#2          |\n";
    cout << "+--------------------------------------+\n" << endl;


    cout << left << setw(12) << "Item"
    << right << setw(10) << "Price" << endl;
    cout << left << setw(12) << "Pen"
    << right << setw(10) << fixed << setprecision(2) << 1.5 << endl;
    cout << left << setw(12) << "Notebook"
    << right << setw(10) << fixed << setprecision(2) << 4.25 << endl;

    cout << "============= RECEIPT ============\n";
    cout << left << setw(19) << "Item"
    << right << setw(10) << "Qty\tPrice\tSubtotal" << endl;

    return 0;
}