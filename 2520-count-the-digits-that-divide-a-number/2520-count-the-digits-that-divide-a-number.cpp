class Solution {
public:
    int countDigits(int num) {
        int count=0;
	    int m=num;
	  while(num>0){
		int x=num%10;
		 if(x!= 0 && m % x == 0){
		  count=count+1; 
	    }
		num=num/10;
	  }
	  return count;   
    }
};