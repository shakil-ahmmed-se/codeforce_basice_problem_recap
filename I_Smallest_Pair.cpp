#include<bits/stdc++.h>
using namespace std;

int main(){
     int q;
     cin>>q;
     while(q--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int mn = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
              sum = arr[i] + arr[j] + j-i;
               mn = min(mn, sum);
               
            }
            
        }

        cout<<mn<<endl;
        
        
     }
    return 0;
}