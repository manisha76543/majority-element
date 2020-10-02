
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        
        int majority,count=0;
        
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                majority=A[i];
                count++;
            }
            else
            {
                if(A[i]==majority)
                count++;
                else
                count--;
            }
        }
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==majority)
            temp++;
        }
        if(temp>n/3)
        cout<<majority<<endl;
        else
        cout<<"-1"<<endl;
    }
}
