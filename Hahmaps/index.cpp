#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[100]={0};
    for(int k=0;k<n;k++){
        // hash[arr[k]]=hash[arr[k]]+1;
        hash[arr[k]]++;
    }
    int numbers;
    cout<<"enter the how many numbers you want to search in array"<<endl;
    cin>>numbers;
    while(numbers--){
        int repeatednum;
        cin>>repeatednum;
        cout<<"your number has repeated "<<hash[repeatednum]<<" times in array"<<endl;
    }

    return 0;

}