#include<iostream>  
using namespace std;  
int findSmallest (int[],int, int);  
int main ()  
{  
    
    int n;
    cout<<"How many elements are in your array?\n";
    cin>>n;
   
    int myArray[n];  
    int pos,temp,success=0;  
    
    cout<<"\nEnter array elements: ";
	for(int x=0;x<n;x++){
	        cin>>myArray[x];
	}

    for(int i=0;i<n;i++)  
    {  
        pos = findSmallest (myArray,i, n);  
        temp = myArray[i];  
        myArray[i]=myArray[pos];  
        myArray[pos] = temp; 
        success++;
    }  
    cout<<"\n Sorted list of elements is\n";  
    for(int i=0;i<n;i++)  
    {  
        cout<<myArray[i]<<"\t";  
    } 
    cout<<"\nNumber of successful steps required to sort the array: "<<success;
    return 0;  
}  
int findSmallest(int myArray[],int i, int n)  
{  
    int ele_small,position,j;  
    ele_small = myArray[i];  
    position = i;  
    for(j=i+1;j<n;j++)  
    {  
        if(myArray[j]<ele_small)  
        {  
            ele_small = myArray[j];  
            position=j;  
        }  
    }  
    return position;  
}