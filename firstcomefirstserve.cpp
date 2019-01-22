#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter number of process "; 
	cin>>n;
	float AT[n],BT[n],TAT[n],CT[n],WT[n];
	cout<<"\n enter Airrival time ";
	for(i=0;i<n;i++)
	 cin>>AT[i];
	 cout<<"\n enter Bust time ";
	for(i=0;i<n;i++)
	 cin>>BT[i];
	 CT[-1]=0;
	for(i=0;i<n;i++)
	 { if(AT[i]<CT[i-1])
	   {CT[i]=CT[i-1]+BT[i];
	   }
	   else {
	   	CT[i]=AT[i]+BT[i];
	   }
	}
	for(i=0;i<n;i++)
	  {TAT[i]=CT[i]-AT[i];
	   
     }
     
	for(i=0;i<n;i++)
     WT[i]=TAT[i]-BT[i];
	     for(i=0;i<n;i++)
	 cout<<"\nArrival time "<<AT[i]<<" Bust time "<<BT[i]<<"Complition Time"<<CT[i]<<" Turn Arround time "<<TAT[i]<<"  Wait Time "<<WT[i]; 
}
