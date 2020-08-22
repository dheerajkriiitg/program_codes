 /*Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), 
 Assume that there is only one duplicate number, find the duplicate one.*/   
    int findDuplicate(vector<int>& nums) 
    {
        int slow=0,fast=0;
        do
        {
            slow=nums[slow]; //jump by 1
            fast=nums[nums[fast]]; //jump by 2
        }
        while(slow != fast);

        fast = 0; //move fast to start
        do
        {
            slow=nums[slow]; //jump by 1
            fast=nums[fast]; //jump by 1
        }
        while(slow != fast);
        
        return fast;
    }