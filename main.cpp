#include <iostream>

using namespace std;

int main()
{
    int i,r,c,n,j,so=0,se=0;
    cout<<"Enter row size: ";
    cin>>r;
    cout<<"Enter col size: ";
    cin>>c;
    int a[r][c];
    for(i=0; i<r; i++) //Data input
    {
        for( j=0; j<c; j++)
        {
            cout<<"Data["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
    cout<<"you enterd"<<endl;
    for(i=0; i<r; i++)  //input data show
    {
        for(j=0; j<c; j++)

        {
            cout<<"Data["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;

        }
    }
    cout<< endl;
    for(i=0; i<r; i++)   //even data find and sum
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]%2==0)
            {
                cout<<"EVEN Data["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
                se=se+a[i][j];
            }
        }
    }

    cout<<"sum of even nmbr= "<<se<<endl;

    for(i=0; i<r; i++)  //odd data find and sum
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]%2!=0)
            {
                cout<<"ODD Data["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
                so=so+a[i][j];
            }

        }
    }

    cout<<"sum of odd nmbr= "<<so;
    return 0;
}
