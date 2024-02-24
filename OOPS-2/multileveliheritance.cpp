#include<iostream>
using namespace std;

class fruit
{
public:
    string name;
};

class mango : public fruit
{
public:
    int weight;
};

class alphanso : public mango
{
public:
    int sugarlevel;
};

int main()
{
    alphanso a;

    // You need to initialize the variables before printing
    a.name = "Alphanso Mango";
    a.weight = 300;         // Example weight
    a.sugarlevel = 15;      // Example sugar level

    cout << "Name: " << a.name << endl;
    cout << "Weight: " << a.weight << " grams" << endl;
    cout << "Sugar Level: " << a.sugarlevel << " grams" << endl;

    return 0;
}
