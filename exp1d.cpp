#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >>a;
    if (a % 2 == 0)
    {
        cout << "It is an even number. ";
    }
    else
    {
        cout << "It is an odd number. ";
    }
    return 0;
}
/*
Output:
Enter a number: 57
It is an odd number. 
*/
