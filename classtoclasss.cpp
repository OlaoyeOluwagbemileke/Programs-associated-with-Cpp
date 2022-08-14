#include <bits/stdc++.h>
using namespace std;

class type_one
{
    string a= "Leke";

public:
    string get_string()
    {
        return (a);
    }

    void display()
    {
        cout<<a<<endl;
    }

    class type_two
    {
        string b;

public:

    void operator=(type_one a)
    {
    b= a.get_string();
    }

    void display()
    {
     cout<<b<<endl;
    }
    };

    int main()
    {
        type_one a;
        type_two b;

        b = a;

        a.display();
        b.display();

        return 0;
    }
};
