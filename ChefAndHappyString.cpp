//Chef has a string
//
//S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2
//in which all its characters are vowels.
//
//Determine whether Chef is happy or not.


#include <iostream>
using namespace std;

int main() {

	int tc;
	cin>>tc;

	while( tc-- ) {
	    string s;
	    cin>>s;
	    int bl = 0;

	    for ( int i = 0; i < s.size() - 2;  i++) {
	        int a = i + 3;
	        for ( int j = i; j < a; j++) {
	            if ( s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' )
                    bl = bl + 1;

	                else bl = 0;
	              // cout<<"The j is "<<j<<" Vowel number is "<<bl<<endl;
	         }

	         if ( bl > 2 ) {
	             bl = 3;
	             break;
	         }
	         else bl = 0;
	    }

	    if (bl == 3 ) cout<<"Happy"<<endl;
	    else cout<<"Sad"<<endl;
	}
	return 0;
}

