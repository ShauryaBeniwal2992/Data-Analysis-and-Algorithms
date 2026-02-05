#include <bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int deadline, profit;
};

int main() {
    Job jobs[] = {{'J1',2,100},{'J2',1,19},{'J3',2,27},{'J4',1,25},{'J5',3,15}};
    int n = 5;

    sort(jobs, jobs+n, [](Job a, Job b){
        return a.profit > b.profit;
    });

    int slot[10] = {0};
    int totalProfit = 0;

    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline;j>0;j--){
            if(slot[j]==0){
                slot[j]=jobs[i].profit;
                totalProfit+=jobs[i].profit;
                break;
            }
        }
    }
    cout << "Maximum Profit = " << totalProfit;
}
