#include <iostream>

using namespace std;
int main(){

    float sum = 0, i = 6;
    while(i <= 19){
        sum+=1/i;
        i++;
    }

    cout << sum;
    return 0;
}