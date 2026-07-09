#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int sum(vector <int> arr,int size){
  int ans=0;
  for(int i=0;i<size;i++){
    ans+=arr[i];
  }
  return ans;
}

int main(){
  int size;
  cout << "enter the number of books : ";
  cin >> size;
  vector <int> arr(size,0);
  for(int i=0;i<size;i++){
    cout << "enter the number of pages of " << i+1 << "th book : ";
    cin >> arr[i];
  }
  int start=0;
  int end=sum(arr,size);
  int ans=INT_MAX;
  int n;
  cout << "enter the number of students : ";
  cin >> n;
   if(n>size){
    cout << -1;
  }
  if(n<=size){
  while(start<=end){
   int mid=start+(end-start)/2;
   int std=1;
   int sum=0;
   bool possible = true;
   for(int i=0;i<size;i++){
    if(arr[i]>mid){
      possible=false;
      break;
    }
    if(sum+arr[i]<=mid){
      sum+=arr[i];
    }
    else{
      sum=arr[i];
      std++;
    }
   }
   if(std<=n && mid<ans && possible){
    ans=mid;
    end=mid-1;
   }
   else{
    start=mid+1;
   }
  }
  if(ans!=INT_MAX){
    cout << ans;
  }
  else{
    cout << -1;
  }
}
  return 0;
}