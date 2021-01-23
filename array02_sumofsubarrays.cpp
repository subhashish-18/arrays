#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter how many elements you want : "<<endl;
     cin>>n;
     cout<<"enter elements of your arrays : "<<endl;
     int a[n];
     for(int i=0 ; i<n ; i++){
         cin>> a[i];
     }
     cout<<endl;
     cout<<"sum of subarrays : " <<endl;
     int curr = 0;
     for(int i = 0; i<n ; i++){
         curr=0;
         for(int j=i;j<n;j++){
             curr +=a[j];
         //   cout<< a[j] <<endl; if you want to print all the subarrays
             cout << curr << endl;   // curr is for sum of arrays
         }
     }
    return 0;
}