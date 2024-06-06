#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int c;
    int b;
    int d;
    int n;
    int min = 10;
    int smin = 0;

    cout << "Input your number: ";
    do {
    cin >> n;
     a = n;
    } while (n <= 0);
   
    
    while (n)
    {
        b = n % 10;
        if (b < min) {
            min = b;
        }
        n = n / 10;
        
    }
    cout << "Min number:" << min << endl;
    while (a)
    {
        c = a % 10;
        d = a / 10 % 10;
        cout << d << c;
        if (c > min&&c<d&&c>0) {
            smin = c;
        }
         else if (d<c&&d>0&&d>min) {
            smin = d;
        }
        a = a / 10;

    }
    cout << "Second min number:" << smin;
    return 0;
}