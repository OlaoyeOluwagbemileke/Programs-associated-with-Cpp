#include<iostream>
using namespace std;

int main()
{
string name ="Leke";
string *pName= &name;
int age= 59;
int *pAge = &age;
double gpa= 4.5;
double *pGpa= &gpa;

    cout<< pName<< endl;
    cout<< pAge<< endl;
    cout<< pGpa<< endl;

    return 0;

};

