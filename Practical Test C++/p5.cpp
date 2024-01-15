#include <iostream>
using namespace std;

class oneBasic
{
public:
    void show()
    {
        cout<<"basic class details..."<<endl<<endl;
        cout << "i am 1 basic class." << endl;
    }
};

class twoBasic
{
public:
    void show()
    {
        cout << "i am 2 basic class." << endl;
    }
};

class threeBasic : public oneBasic, public twoBasic
{
};

int main()
{
    threeBasic three;

    three.oneBasic::show();
    three.twoBasic::show();

    return 0;
}