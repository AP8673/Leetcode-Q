class Solution {
public:
    void findCombination(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &tempDS){
        if(index == arr.size())
        {
            if (target == 0)//if target is met 0 that is satisfied include taht combination in the answer
            {
                ans.push_back(tempDS);
            }
            return;
        }
        //picking up element
        if(arr[index] <= target) //checking if element is velid to pick or not
        {
            tempDS.push_back(arr[index]);
            findCombination(index, target-arr[index], arr, ans, tempDS);
            tempDS.pop_back();
        }
        findCombination(index+1, target, arr, ans, tempDS);//not picking th element
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tempDS;//to store combination while checking with target
        vector<vector<int>> ans;// to store the valid combinations this will be the final answer
        findCombination(0, target, candidates, ans, tempDS);
        return ans;
    }
};