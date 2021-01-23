#include<iostream>
using namespace std;

int main(){
    int mx = -99999999;
    int n;
    cout<<"enter how many elements you want in your array :"<<endl;
    cin>>n;
    cout<<"enter elements of your array : "<<endl;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"the maximum till i :"<<endl;
    for(int i=0; i<n; i++){
        mx = max(mx,a[i]);
        cout<< mx <<endl;
    }   
    return 0;
}