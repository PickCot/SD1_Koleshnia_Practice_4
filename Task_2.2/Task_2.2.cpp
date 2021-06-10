#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter integer value: ";
    cin >> num;

    char* p_darr = new char[num];
    for (int i = 0; i < num; i++) 
    {
        cin >> p_darr[i];
       
    }
    for (int i = 0; i < num; i++) 
    {

        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }
    
    delete[] p_darr;
    return 0;
}