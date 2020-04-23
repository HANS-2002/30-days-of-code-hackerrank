#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T=0;
    cin >> T;
    while(T--)
    {
        int n=0;
        bool prime = true;
        cin >> n;
        if (n > 1) 
        {
            for (long long i = 2  ; i <= sqrt(n) /*i*i <= n*/ ;i++) 
            {
                if ( !(n % i) ) 
                {
                    prime = false;
                    break;
                }
            }
        } 
        else 
        {
            prime = false;
        }
        if ( prime ) 
        {
            cout << "Prime" << endl;
        } 
        else 
        {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
