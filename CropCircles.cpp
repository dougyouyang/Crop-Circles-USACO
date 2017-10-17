//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x[500], y[500];
    double r[500], di[500][500];
    int s=0, sum;
    int i, j;
    
    cin >> n;
    for(i=0;i<n;i++)
        cin >> x[i] >> y[i] >> r[i];
    
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            di[i][s++]=sqrt(abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j]));
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0, s=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(r[i]+r[j]>di[i][s++])
                sum++;
        }
        cout << sum << endl;
    }
    
    return 0;
}
