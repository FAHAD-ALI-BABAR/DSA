#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"How many numbers you want to insert in array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long,long>mpp;
    for(int j=0;j<n;j++){
        mpp[arr[j]]++;
    }
    //for iteration on map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    cout<<"your searches"<<endl;
    int s;
    cin>>s;
    while(s--){
        int num;
        cin>>num;
        cout<<"it has appeared"<< mpp[num]<<endl;
    }

    return 0;
}