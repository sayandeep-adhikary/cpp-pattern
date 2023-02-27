#include <iostream.h>
using namespace;
int main()
{
    int n
    cout << "Enter Row Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k=1;
        for (int j = 1; j <= (2*n); j++)
        {
            if (j>=(n+2-i) && j<=(n-1+i))
            {
                cout << "* ";
                if(j==n) 
                    k--;
            }
            else {
                cout<<t<<" " ;
                if(j<n) k++;
                else if(j>n) k--;   
            }
        }
        cout << "\n";
    }
    return
}
