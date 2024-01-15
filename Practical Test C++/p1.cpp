#include <iostream>
using namespace std;

int factorial(int j)
{
    if (j == 0 || j == 1)
    {
        return 1;
    }
    else
    {
        return j * factorial(j - 1);
    }
}

void printfactorial(int n)
{
    cout << endl << "Factorial Series ..." << endl<< endl;
    for (int i = 0; i <= n; ++i)
    {
        cout << "Factorial of " << i << " is:" << factorial(i) << endl;
    }
}


int main()
{
    int n;

    cout << "Enter the value : ";
    cin >> n;

    printfactorial(n);

    return 0;
}
