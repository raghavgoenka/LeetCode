class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
int len=digits.size()-1;
for(int i=len;i>=0;i--){
if(digits[i]==9 && i==0){
digits[i]=0;
digits.insert(digits.begin(),1);
}
else if(digits[i]==9)
digits[i]=0;
else {
digits[i]=digits[i]+1;
break;
}
}

    return digits;
}
    
};