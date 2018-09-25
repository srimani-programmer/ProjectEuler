#include<iostream>

using namespace std;

int main(){
    int number;
    cin>>number;
   unsigned int sum = 0;
   int count;
    for(int i=2;i<=number;i++){
        count = 0;
    for(int j=2;j<=i/2;j++){
        if(i%j == 0){
            count++;
            break;
        }        
    }   
        if(count == 0)
            sum = sum + i;
    }

    cout<<sum<<endl;
    return 0;
}