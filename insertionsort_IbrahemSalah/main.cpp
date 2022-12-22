#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{

int key,m;       //0 1 2 3 4 5 6
for (int i=1;i<n;i++) // 80|90 60 30 50 70 40
{

key = arr[i]; //90
m=i -1 ;//0


while (m>=0&&arr[m]>key)
{

arr [m+1]=arr[m];
m=m-1;


}

arr[m+1]=key;//90


  }


}


void printArray(int arr[],int n)
{

for (int i=0; i<n ;i++)
cout << arr[i] <<" ";


}
int main()
{

int arr[]= {80,90,60,30,50,70,40};
int n = sizeof(arr) / sizeof(arr[0]);

insertionsort(arr,n);
printArray(arr,n);


}
