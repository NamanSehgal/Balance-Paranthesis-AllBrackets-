#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[40];
    cout<<"Enter the String: ";
    cin>>a;

    int b;
    b=strlen(a);

    int i,p=0,q=0,r=0,flag=0;
    for(i=0;i<b;i++)
    {
        if(a[i]=='{')
        {
            p=p+1;
        }

        if(a[i]=='(')
        {
            q=q+1;
        }

        if(a[i]=='[')
        {
            r=r+1;
        }

        if(a[i]=='}')
        {
            p=p-1;
            if(p<0)
            {
                flag=1;
                cout<<"Wrong Expression"<<endl;
                break;
            }
        }

        if(a[i]==')')
        {
            q=q-1;
            if(q<0)
            {
                flag=1;
                cout<<"Wrong Expression"<<endl;
                break;
            }
        }

        if(a[i]==']')
        {
            r=r-1;
            if(r<0)
            {
                flag=1;
                cout<<"Wrong Expression"<<endl;
                break;
            }
        }

    }

    if(flag==0)
    {

    if(p==0 && q==0 && r==0)
    {
        cout<<"Right Expression"<<endl;
    }
    else
    {
        cout<<"Wrong Expression"<<endl;
    }
    }

    return 0;
}
