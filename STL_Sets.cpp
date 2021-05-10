#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

void printSet(set<string> s){
	for(string value : s){
		cout << value << endl;
	}
}
int main(){

// set<container/primitive types> s; Every element in Set in UNique and lexiographical Sorting is done inside Set similat to Map T.C. is also same as Map... Inserting and Accessing is O(log(n));

// unordered_set<int> us;

set<string> s;
s.insert("LOL");	 // O(log(n)) - Red-Black Trees are used in Set as in Maps.
s.insert("HAHAHAH");
s.insert("DAMN BRO");
cout << "Previous Set :" << endl;
printSet(s);

cout << endl << endl;
cout << "Set after modification : " << endl;
// set<string> s:: iterator it;    OR u can also use  below 'auto' keyword to create directly
auto it = s.find("LOL");    //O(log(n)) - Searching     -   UNordered Set-  O(1) (where order/sorting doesnot matter)
if(it != s.end()){
	s.erase(it);
}
printSet(s);
	return 0;
}