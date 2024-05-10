#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    int count=0;
    sort(costs.begin(),costs.end());
    for(int i=0;i<costs.size();i++){
        if(costs[i] <= coins){
            coins-=costs[i];
            count++;
        }
        else break;
    }
    return count;
}

int main()
{
    int N;
    cout<<"Number of coins=";
    cin>>N;
    vector<int>v(0);
    cout<<"Costs=";
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int p;
    cout<<"coins=";
    cin>>p;
    cout<<maxIceCream(v,p);
	
}
