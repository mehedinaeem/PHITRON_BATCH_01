#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n + 1]; 
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int pos, val;
    cin >> pos >> val;
    
    
    for(int i = n; i >= pos; i--)
    {
        ar[i] = ar[i - 1];
    }
    
    ar[pos - 1] = val; 
    
    for(int i = 0; i <= n; i++)
    {
        cout << ar[i] << " ";
    }
    
    return 0;
}
