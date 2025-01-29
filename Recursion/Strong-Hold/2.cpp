#include<bits/stdc++.h>
using namespace std;

double pow(double x, long n){
    if (n==0) return 1;
    if (n < 0) return 1.0 / pow(x,-n);
    if (n % 2 == 1) return x * pow(x * x, (n-1)/2);
    else return pow(x * x, n/2);
}
double myPow(double x, int n) {
    return pow(x, (long) n);
}

int main(){
    double n;
    int x;
    cin >> n >> x;
    cout << myPow(n, x);
}