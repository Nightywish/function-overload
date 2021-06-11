// FO.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using namespace std;



void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    string First = "Lucas";
    string Last = "Lin";

    swap(a, b);
    swap(First, Last);
    cout << "a:=" << a << "\t b:=" << b << endl;
    cout << "first name is " << First << "\t last name is " << Last << endl;
}
