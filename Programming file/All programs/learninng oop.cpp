#include<iostream>
using namespace std;


class Employee{
public:
    string name;
    string company;
    int rate;

    void introduceYourself(){
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};


int main()
{
    Employee emp1;
    emp1.name="Tauseef";
    emp1.company="Google";
    emp1.rate=100;
    emp1.introduceYourself();
}