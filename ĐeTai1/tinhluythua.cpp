#include <iostream>
#include<math.h>
using namespace std;
int luythua (int x, int n){
    if (n == 0)
        return 1;
    int tmp = pow(x, n/2);
    if (n % 2 == 0)
        return tmp * tmp;
    else   
        return x * tmp * tmp;
    
}
int main (){
    int x, n;
    cin >> x >> n;
    cout << luythua(x, n);
}