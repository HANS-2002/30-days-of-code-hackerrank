#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1=0,d2=0,m1=0,m2=0,y1=0,y2=0,fine=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y1 < y2)fine=0;
    else if(y1 == y2)
    {
        if(m1 == m2)
        {
            if(d1<=d2)fine =0;
            else fine = abs(d1-d2)*15;
        }
        else if(m1 < m2)fine = 0;
        else fine = 500 * abs(m1-m2);
    }
    else fine = 10000;
    cout<<fine;
    return 0;
}
