#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "your kth minimum/maximum position  : " << endl;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }

    cout << "kth maximum : " << arr[n - k] << endl;
    cout << "kth minimum : " << arr[k - 1] << endl;
    return 0;
}
