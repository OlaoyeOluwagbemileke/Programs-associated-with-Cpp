#include<iostream>
using namespace std;

class vehicle
{
public:
    vehicle(){
    cout<< "This is a vehicle"<<endl;
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout<< "This is a front wheeler"<<endl;
    }
};

class car: public vehicle, public fourwheeler

{

};

int main()
{
    car obj;
    return 0;
}
