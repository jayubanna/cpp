#include <iostream>
using namespace std;

class Phone
{
public:
    virtual void call()
    {
        cout << "basic phone:       Calling..." << endl;
    }
    void massage()
    {
        cout << "basic phone:       massageing..." << endl << endl;
    }
};

class SmartPhone : public Phone 
{
public:
    void call()
    {
        cout << "smartPhone phone:  video Calling..." << endl;
    }
    void massage()
    {
        cout << "smartPhone phone:  massageing..." << endl<< endl;
    }
};

class SimplePhone : public Phone
{
public:
    void call()
    {
        cout << "simple phone:      Calling..." << endl;
    }
    void massage()
    {
        cout << "simple phone:      massage..." << endl
             << endl;
    }
};

int main()
{
    Phone phone;
    SmartPhone smartphone;
    SimplePhone simplePhone;

    phone.call();
    phone.massage();
    smartphone.call();
    smartphone.massage();
    simplePhone.call();
    simplePhone.massage();

    return 0;
}
