#include<iostream>
using namespace std;
void sum()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    for(int i=-a;i<=a;i++)
    {
        cout <<"\t"<<i;
    }
    
}
int main()
{
    sum();
    return 0;
}
/*
-12     -11     -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       12       3       4       5       6       7       8       9       10      11      12
*/