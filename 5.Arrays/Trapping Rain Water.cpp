// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size() ,ans=0,lmax = height[0],rmax = height[n-1];
        int l=1, r=n-2;
        while(l<=r){
            if(height[l]>=lmax){
                lmax=height[l];
                l++;
            }
            else if(height[r]>=rmax){
                rmax=height[r];
                r--;
            }
            else if(lmax<=rmax && height[l]<lmax){
                ans+=lmax-height[l];
                l++;
            }
            else{
                ans+=rmax-height[r];
                r--;
            }
            
        }
        return ans;
    }
};