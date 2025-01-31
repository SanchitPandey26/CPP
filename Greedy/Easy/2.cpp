#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool comp(Item a, Item b){
    double r1 = (double) a.value / (double) a.weight;
    double r2 = (double) b.value / (double) b.weight;
    return r1 > r2;
}

double maxValue(int W, Item arr[], int n){
    sort(arr, arr+n, comp);
    int cw = 0;
    double ans = 0.0;

    for (int i = 0; i < n; i++){
        if (cw + arr[i].weight <= W){
            cw += arr[i].weight;
            ans += arr[i].value;
        }
        else{
            int remain = W - cw;
            ans += (arr[i].value / (double) arr[i].weight) * (double) remain;
            break;
        }
    }

    return ans;
}


int main(){

}