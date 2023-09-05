#include<iostream>
using namespace std;


  int countZeros(int arr[],int n)
  {
   int low=0;
   int high=n-1;
    
    while(low<=high)
    {
      int mid=(low+high)/2;
      if(arr[mid]==1)
      {
        low =mid+1;
        
      }
      else
      {
        high=mid-1;
      }
    }
    return (n-low);
    }
 

int main()
{
  int n;
  int arr[n];
  cout<<"Enter the size of Array :";
  cin>>n;
  cout<<"Enter array in binary format in which first 1's followed by zeros :";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  int count=countZeros(arr,n);
  
  cout<<"Number of zeros in binary array :"<<count<<endl;
return 0;
}

