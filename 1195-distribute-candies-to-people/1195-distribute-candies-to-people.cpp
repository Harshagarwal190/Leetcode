class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
         vector<int> ans(num_people, 0);
         int i=0;
         int candy=1;
         while(candy<=candies){
            if(i==num_people)i=0;
         ans[i]+=candy;
         candies-=candy;
         candy +=1;
         i++;
         }
         if(candies>0){
            if(i==num_people)i=0;
            ans[i]+=candies;
         }
         return ans;
    }
};