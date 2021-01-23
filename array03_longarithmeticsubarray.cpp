#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"how many elements : " ;
    cin>>n;
    cout<<"enter your elements : "<<endl;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int ans = 2;   // default 2 is the longest arithmethic subarray
    int pd = a[1] - a[0];
    int j=2;
    int curr = 2;  // default 2 is the longest arithmethic subarray
    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<"longest arithmethic subarray :"<<ans << endl;

    return 0;
}