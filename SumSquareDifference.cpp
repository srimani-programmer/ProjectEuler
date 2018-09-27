#include<iostream>
#include<math.h>

using namespace std;

int main(){
    unsigned long long int squaresum = 0,sumsquare = 0;

    for(int i=1;i<=100;i++){
        squaresum = squaresum + pow(i,2);
        sumsquare = sumsquare + i;
    }

    sumsquare = pow(sumsquare,2);

    unsigned long long int diff = sumsquare - squaresum;

    cout<<diff<<endl;

    return 0;
}