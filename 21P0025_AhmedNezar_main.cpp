#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5, b = 10;
    cout << "Sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
