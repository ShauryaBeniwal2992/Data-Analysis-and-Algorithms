#include <bits/stdc++.h>
using namespace std;

int main() {
    int value[] = {100, 60, 120};
    int weight[] = {20, 10, 40};
    int W = 50, n = 3;

    vector<pair<double,int>> v;
    for(int i=0;i<n;i++)
        v.push_back({(double)value[i]/weight[i], i});

    sort(v.rbegin(), v.rend());

    double total = 0;

    for(auto x : v){
        int i = x.second;
        if(weight[i] <= W){
            W -= weight[i];
            total += value[i];
        } else {
            total += x.first * W;
            break;
        }
    }
    cout << "Maximum value = " << total;
}
