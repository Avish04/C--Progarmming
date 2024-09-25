#include<iostream>
#include<vector>
using namespace std;

class Solution{   
public:

    int ans(vector<int> row,int mid){
        int s=0;
        int e= row.size()-1;
        
        while(s<=e){
            int md_col = (s+e)/2;
            if(row[md_col]<=mid){
                s=md_col+1;
            }
            else{
                e=md_col-1;
            }
        }
        return s;
    }
    
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here    
        int s=0;
        int e=2000;
        while(s<=e){
            int mid = (s+e)/2;
            int cnt = 0;
            for(int i=0; i<R; i++){
                cnt+=ans(matrix[i],mid);
            }
            if(cnt<=(R*C)/2){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
};