// Program for subset of the given problem
class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        int totalSubset=pow(2,A.size());
        for(int i=0; i<totalSubset; i++){
            vector<int>temp;
            for(int j=0; j<A.size(); j++){
                if(i&(1<<j)){
                    temp.push_back(A[j]);
                }
            }
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// Given a set of positive integers, find all its subsets.

// Example 1 :

// Input : 
// array = {1, 2, 3}
// Output :
// // this space denotes null element. 
// 1
// 1 2
// 1 2 3
// 1 3
// 2
// 2 3
// 3
// Explanation: 
// The following are the subsets 
// of the array {1, 2, 3}.
// Example 2 :

// Input :
// array = {1, 2}
// Output :

// 1 
// 1 2
// 2
// Explanation :
// The following are the 
// subsets of {1, 2}.
// Your task :
// You don't have to read input or print anything. Your task is to complete the function subsets() which takes the array of integers as input and returns the list of list containing the subsets of the given set of numbers in lexicographical order.
 
// Expected Time Complexity : O(2^n)))
// Expected Auxiliary Space : O(2^n*length of each subset)
 
// Constraints :
// 1 <= n <= 20
// 1 <= arr[i] <=10
