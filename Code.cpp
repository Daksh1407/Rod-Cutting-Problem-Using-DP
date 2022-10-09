// A Dynamic Programming solution for Rod cutting problem
#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution{
  public:
    int cutRod(int price[], int n) {
        int length=n;
        int dp[n+1][length+1];

        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=0;
                }
            }
        }
         for(int i=1;i<n+1;i++){
           for(int j=1;j<n+1;j++){
               if(i<=j){
                  dp[i][j]=max(price[i-1]+dp[i][j-i],dp[i-1][j]); 
               }
               else{
                   dp[i][j]=dp[i-1][j];
               }
            }
        }
       return dp[n][n];                 //Returns the best obtainable price for a rod of length n
    }
};
int main(){
    int n;
    cout<<"Enter the length of rod: \n";
    cin >> n;
    int a[n];
    cout<<"\nEnter price array: \n";
    for (int i = 0; i < n; i++)
    cin >> a[i];
    Solution ob;
    cout<<"\nMaximum profit: "<<ob.cutRod (a, n) << endl;
    return 0;
}

