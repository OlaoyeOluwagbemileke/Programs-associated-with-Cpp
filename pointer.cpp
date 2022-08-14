#include<iostream>
using namespace std;

int main()
{
    int age = 21;
    int *pAge = &age;
    double gpa = 4.81;
    double *pGpa = &gpa;
    string name = "Leke";
    string *pName = &name;

    cout<< "My name is "<< pName<< endl;

    return 0;
}
