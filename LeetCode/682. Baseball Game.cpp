/*
  ____        _  __   ____  _                  _     
 / ___|  __ _(_)/ _| | __ )| |_ ___  _   _ ___| |__  
 \___ \ / _` | | |_  |  _ \| __/ _ \| | | / __| '_ \ 
  ___) | (_| | |  _| | |_) | || (_) | |_| \__ \ | | |
 |____/ \__,_|_|_|   |____/ \__\___/ \__,_|___/_| |_|                                                   
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int topel=st.top();
                st.pop();
                int sum=topel+st.top();
                st.push(topel);
                st.push(sum);
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else
            {
                int num=stoi(operations[i]);
                st.push(num);
            }
        }
        int res=0;
        int siz=st.size();
        for(int i=0;i<siz;i++){
            cout<<st.top()<<endl;
            res+=st.top();
            st.pop();
        }
        return res;
    }
};