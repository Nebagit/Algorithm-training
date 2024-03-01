
#include <iostream>
using namespace std;
void display(int a[],int n){
	for(int i=0;i<n;i++)
	  cout<<a[i]<<" ";
	  
	cout<<endl;
}
void bubble_sort(int a[],int n){
	         int temp;
	        int isthereswap=0;
	         int total_comparisons=0;
	for(int pass=1;pass<=n-1;pass++){
		for(int j=0;j<n-pass;j++){
			 total_comparisons++;
                         cout<<a[j]<<">"<<a[j+1]<<" ";
			if(a[j]>a[j+1]){
				//swap
				isthereswap=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(isthereswap==0)
		   break;
		cout<<"output of pass "<<pass<<" is:\n";
		display(a,n);
	}
}
int binary_search(int a[],int n,int key){
	int left=0;
	int right=n-1;
	int middle;
	while(left<=right){
		middle=(left+right)/2;
		if(a[middle]==key)
		   return middle;
		else if(key<a[middle])
		  right=middle-1;
		else
		 left=middle+1;
	}
	return -1;
	
}
int linear_search(int a[],int n,int key){
	
	for(int i=0;i<a[i];i++){
		if(a[i]==key)
		   return i;
	}
	return -1;
	
}

int main(int argc, char** argv) {
	
	int a[]={10,5,7,4,6,8,1,9};
	int b[]={1,2,3,4,5,6,7,8};
	int choice;
	char ans;
	int key;
	int index;
	do{
	cout<<"=====MENU===========\n"	;
	cout<<"Press 1 for linear search.\n";
	cout<<"Press 2 for binary search.\n";
	cout<<"Press 3 for bubble sort.\n";
	cout<<"Your choice:";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the number you want to search:";
			cin>>key;
			index=linear_search(a,8,key);
			if(index !=-1)
			 cout<<key<<" is found at index "<<index<<endl;
			else
			 cout<<key<<" is not found.\n";
		  break;
		  
		case 2:
			cout<<"Enter the number you want to search:";
			cin>>key;
			 index=binary_search(b,8,key);
			if(index !=-1)
			 cout<<key<<" is found at index "<<index<<endl;
			else
			 cout<<key<<" is not found.\n";
		  break;
		case 3:
			cout<<"Before sorting using bubble sort\n";
			display(b,8);
			bubble_sort(b,8);
			cout<<"After sorted using bubble sort\n";
			display(b,8);
			break;
	}
	cout<<"Do want to continue?(y/n)";
	cin>>ans;
	}while(ans!='n');
	return 0;
}