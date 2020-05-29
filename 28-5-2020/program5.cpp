
Skip to content
Using Gmail with screen readers
Enable desktop notifications for Gmail.   OK  No thanks
MeetNew
Start a meeting
Join a meeting
Chat
1 of 5,906
Program 5
Inbox
	x
Varshitha . <poojaryvarsha321@gmail.com>
	
1:15 PM (1 hour ago)
	
to Pruthvireddy98448
.Write a  program  to find the last remaining element in the array after reducing the array.
	
	
	#include <iostream> 
	using namespace std; 
	
	int find_value(int a[], int n, int k) 
	{ 
	    
	    int sum = 0; 
	  
	   
	    for (int i = 0; i < n; i++) { 
	        sum += a[i]; 
	    } 
	 
	    return sum % k; 
	} 
	  
	
	int main() 
	{ 
	    int n = 5, k = 3; 
	    int a[] = { 12, 4, 13, 0, 5 }; 
	    cout << find_value(a, n, k); 
	    return 0; 
	}
	
	
	
