
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}


int secondLargest(vector<int> &a, int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}
int secondSmallest(vector<int> &a, int n){
   int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i]!= smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
int slargest = secondLargest(a,n);
int ssmallest = secondSmallest(a,n);
return {
    slargest,ssmallest
};
}
