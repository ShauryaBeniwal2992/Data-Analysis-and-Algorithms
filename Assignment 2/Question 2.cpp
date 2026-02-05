#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {900, 910, 920, 1100, 1120};
    int dep[] = {940, 1200, 950, 1130, 1140};
    int n = 5;

    sort(arr, arr+n);
    sort(dep, dep+n);

    int i=0, j=0, platforms=0, ans=0;

    while(i<n && j<n){
        if(arr[i] < dep[j]){
            platforms++;
            ans = max(ans, platforms);
            i++;
        } else {
            platforms--;
            j++;
        }
    }
    cout << "Minimum platforms = " << ans;
}
