//  int myAtoi(string s) {
        
//         // helper variables
//         int res=0;
//         int i=0;
//         int sign=1;
		
//         while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        
//         if(s[i]=='-'||s[i]=='+')          //check if number positve or negative
//         {
//             sign=s[i]=='-'?-1:1;
//             i++;
//         }
      
//         while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  
//         {
//             int digit=(s[i]-'0')*sign;
//             if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
//             if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
//             res=res*10+digit; // update res
//             i++;
//         }
    
//     return res;