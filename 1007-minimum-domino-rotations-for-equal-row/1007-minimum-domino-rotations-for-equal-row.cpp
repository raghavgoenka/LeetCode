class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> cnt(7,0);
        for(int x: tops)
            cnt[x]++;
        for(int x: bottoms)
            cnt[x]++;
        int number = *max_element(cnt.begin(), cnt.end());
        cout<<number<<" ";
        int num = 0;
        for(int i=0; i<cnt.size(); ++i){
            if(cnt[i] == number)
                num = i;
        }
        int top = 0, bottom = 0;
        for(int i=0; i<tops.size(); ++i){
            if(tops[i] != num && bottoms[i] != num)
                return -1;
            if(tops[i] == num && bottoms[i] == num)
                continue;
            else if(tops[i] == num)
                top++;
            else if(bottoms[i] == num)
                bottom++;
        }
        if(bottom > top)
            return top;
        else
            return bottom;
        return -1;
    }
};