// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(st.empty()){
//                 st.push(s[i]);
//             }
//             else if((st.top()== '(' && s[i]==')') || (st.top()== '[' && s[i]==']') || (st.top== '{' && s[i]=='}')){
//                 st.pop();
//             }
//         else{
//             st.push(s[i]);
//         }
//         }
//         if(st.empty()){
//             return true;
//         }
//         return false;
        
//     }
// };



// Method -2
class Solution {
public:
unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
    bool isValid(string s) {
        stack<char> st;
        for(char brackets: s){
            if(symbols[brackets]<0){
                st.push(brackets);
            }
            else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(symbols[top] + symbols[brackets]){
                    return false;
                }

            }

        }
        if(st.empty()) return true;
        return false;
        
    }
};