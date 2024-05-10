
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int totalHammingDistance(vector<int>& nums) {
    int hammingdistance=0;
    for(int bitpos=0;bitpos<32;bitpos++){
    int setbits=0 ;
        for(int i = 0 ;i<nums.size();i++){
            setbits+=(nums[i]>>bitpos)&1;
           
        }
        hammingdistance+=setbits * (nums.size()-setbits);
    }
    return hammingdistance;

}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=totalHammingDistance(v);
    
    cout<<ans;
}
