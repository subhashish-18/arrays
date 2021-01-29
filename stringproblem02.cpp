// GREATEST NUMBER FROM THE STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "238573058282";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    return 0;
}