#include<iostream>

using namespace std;
template<typename Type>
 Type swap(Type a,Type b)
{
Type  temp=a;
a=b;
b=temp;
}

int main()
{int a=5,b=4;
cout<<a<<" "<<b<<endl;
 swap(a,b);
cout<<a<<" "<<b<<endl;

char a='c',b='d';
cout<<a<<" "<<b<<endl;
swap(a,b);
cout<<a<<" "<<b<<endl;

}
