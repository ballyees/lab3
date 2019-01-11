#include <iostream>

using namespace std;
int main(){

    float sum = 0, i = 2;
    while(i <= 69){
        sum+=1/i;
        i++;
    }

    cout << sum;
    return 0;
}