#include <bits/stdc++>
using namespace std;
 
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
 
    
    if (n == 0)
        return 0;
 
    
    r = e(x, n+1);
 
   
    p = p * x;
 
    
    f = f * n;
 
    return (r + p / f);
}
 

int main()
{
    int x = 4, n = 15;
    cout<<"\n"<< e(x, n);
 
    return 0;
}


