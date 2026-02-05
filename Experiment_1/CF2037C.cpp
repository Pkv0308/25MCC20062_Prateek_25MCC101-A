#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n)
{

    if (n <= 4)
    {
        return {-1};
    }
    else
    {
        vector<int> res;
        for (int j = 1; j <= n; j += 2)
        {
            if (j == 5)
            {
                continue;
            }
            res.push_back(j);
        }
        res.push_back(5);
        res.push_back(4);
        for (int j = 2; j <= n; j += 2)
        {
            if (j == 4)
            {
                continue;
            }
            res.push_back(j);
        }
        return res;
    }
}

int main()
{

    int t;
    cin >> t;
    vector<int> n(t);
    for (int i = 0; i < t; i++)
        cin >> n[i];
    for (int i = 0; i < t; i++){

        for (auto it : solve(n[i]))
        {
            cout << it << " ";
        }
        cout<<"\n";
    }
    return 0;
}