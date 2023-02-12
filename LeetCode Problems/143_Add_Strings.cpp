/* Approach
In this Question , we add two strings which has numbers and after adding both digit return answer . So , first we made two pointer 'i' and 'j' , 'i' pointed to the last element of first string whereas 'j' 
pointed last element of second string.Now we consider carry as '0'
and made another string ans which will return the answer.Now we made a function add in which we passes both strings , carry , ans (with reference) , i and j .
So , in add function the base case if 'i' and 'j' out of string and carry will be 0 , these three condition satisfy the base case.further we made two variables first and second which is equal to the last 
element of both string.
I do {-'0'} because its a string and to convert it into integer we simply subtract 0 from this and for integer to string we simply add '0' in it.
Now we made a variable sum which is first + second + carry (suppose we want to add 33 and 39 so first = 3 , second = 9 and carry is 0 and after adding 
carry becomes 1 and the last digit is 2 , this last digit we push in ans and when i-1 and j-1 again first = 3 and second = 3 and carry = 1 after adding the answer is 7 , this 7 will be push in ans so the 
term in ans is "27"which is in integer so we add "0" in it).But the answer is "72" so we will simply reverse it.*/

class Solution {
public:
    void add(string num1,string num2, int carry,string &ans, int i , int j){
        if(i<0 && j<0 && carry==0){
            return;
        }
        int first = 0;
        int second = 0;
        if(i>=0){
            first = num1[i] - '0';
        }
        if(j>=0){
            second = num2[j] - '0';
        }
        int sum = first + second + carry;
        int lastdigit = sum % 10;
        carry = sum/10;
        ans.push_back(lastdigit + '0');
        add(num1,num2,carry,ans,i-1,j-1);
    }
    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        string ans = "";
        add(num1,num2,0,ans,i,j);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};