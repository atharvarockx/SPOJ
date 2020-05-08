#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a,b;
  int k=1;
  cin>>a;
  while(a.find('-')==-1){
    stack<char>st,st1;
    st.push(a[0]);
    for(int i=1;i<a.length();i++){
      if(a[i]=='}'){
        if(st.size()>0 && st.top()=='{')
          st.pop();
         else if((st.size()>0 && st.top()=='}') || (st.size()==0))
           st.push('}');
      }
      else
        st.push(a[i]);
    }
    string s1="";
    while(st.size()>0){
      st1.push(st.top());
      st.pop();
    }
    while(st1.size()>0){

      s1+=st1.top();
      st1.pop();
    }
  // cout<<s1<<endl;
    int c=0;
    if(s1.length()==0)
      cout<<k<<". "<<0<<endl;
    else{
      for(int i=0;i<s1.length()-1;i=i+2){
        if(s1[i]=='{' && s1[i+1]=='}')
          continue;
        else if (s1[i]=='{' && s1[i+1]=='{')
          c=c+1;
        else if(s1[i]=='}' && s1[i+1]=='}')
          c=c+1;
        else
          c=c+2;
      }
      cout<<k<<". "<<c<<endl;
    }
    
    cin>>a;
    k++;
  }
  
  
  return 0;
}
