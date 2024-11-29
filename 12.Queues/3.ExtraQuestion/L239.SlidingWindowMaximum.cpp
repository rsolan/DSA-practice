
// https://leetcode.com/problems/sliding-window-maximum/description/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        deque <int> dq;

        // process first window of size k
        for(int index=0;index<k;index++){
            // removal of smaller el from dq - thats too from backof dq
            int el = nums[index];
            while(!dq.empty() && el > nums[dq.back()] ){
                dq.pop_back();
            }

            // addition
            dq.push_back(index); //store indexes not element in dq
        }

        // processing remaining windows
        for(int index =k; index< nums.size(); index++){
            // store prev window ans
                ans.push_back(nums[dq.front()]);

            // removal - out of range pop from front , smaller el pop from back
                if(index - dq.front() >= k){
                    dq.pop_front();
                }

                int el = nums[index];
                while(!dq.empty() && el > nums[dq.back()] ){
                    dq.pop_back();
                }
            // addition

                dq.push_back(index);
        }

        // print last window ans
        ans.push_back(nums[dq.front()]);
        return ans;

    }
};
