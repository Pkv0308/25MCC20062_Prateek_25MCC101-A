
#include <bits/stdc++.h>
using namespace std;

void permuation(int test, vector<int> size, vector<string> strings)
{

    for (int i = 0; i < test; i++)
    {
        map<char, int> charCount;
        for (char ch : strings[i])
        {
            charCount[ch] += 1;
        }
        vector<pair<int,char>> sorted_chars;
        for(auto it: charCount){
            sorted_chars.push_back({it.second,it.first});
        }
        sort(sorted_chars.begin(),sorted_chars.end());

        strings[i][strings[i].find(sorted_chars[0].second)]=sorted_chars.back().second;

        cout << strings[i] << "\n";
    }
}

int main()
{

    int t;
    cin >> t;
    vector<int> stringSize(t);
    vector<string> Strings(t);

    for (int i = 0; i < t; i++)
    {
        cin >> stringSize[i];
        cin >> Strings[i];
    }
    // input code above
    permuation(t, stringSize, Strings);
    return 0;
}