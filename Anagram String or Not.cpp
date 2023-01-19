/*
An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, “abcd” and “dabc” are an anagram of each other.

Sort the two given strings and compare, if they are equal then they are anagram of each other.
*/

#include <bits/stdc++.h>
using namespace std;

//Function to check the string either it is anagram or not
bool anagram(string str1, string str2){
	//get the length of two strings
	int n1 = str1.length();
	int n2 = str2.length();
	
	//if the length of two strings is not same, then they are not anagram
	if(n1 != n2){
		return false;
	}
	
	//Sort both strings to check chracters
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	
	//Compare the sorted Stings
	for(int i=0; i<n1; i++){
		if(str1[i] != str2[i]){
			return false;
		}
	}

return true;
}

int main(){
	string s1 = "Atif";
	string s2 = "fAit";
	
	if(anagram(s1, s2)){
		cout<<"Anagram String";
	}
	else{
		cout<<"Not Anagram";
	}
	
return 0;
}
