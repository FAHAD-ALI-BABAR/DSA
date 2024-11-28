#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s ;
   
    cin>>s;
    
    
    int hash[256]={0};
    for(int k=0;k<s.size();k++){
        // hash[arr[k]]=hash[arr[k]]+1;
        hash[s[k]-'a']++;
    }
    int numbers;
    cout<<"enter the how times you want to serach"<<endl;
    cin>>numbers;
    while(numbers>0){
        char repeatedchar;
        cin>>repeatedchar;
        cout<<"your character has repeated "<<hash[repeatedchar-'a']<<" times in string"<<endl;
        numbers--;
    }

    return 0;

}
//if yoor string also have uppercase and lowercase letters then you have to change only these lines
//hash[256]={0};
//hash[s[k]]++
//hash[repeatedchar];