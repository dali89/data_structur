#include <bits/stdc++.h>
#include <set>
using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}

int main() {
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int n1=b.size();
   std:: set<int> st;
    for(int i=0;i<n;i++){
      st.insert(a[i]);
    }
    for(int k=0;k<n1;k++){
      st.insert(b[k]);
    }
   vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;

}