#include<iostream>
using namespace std;
int main()
{
    float ca1[10],ca2[10],ca[10],mte[10],ete[10],f[10];
    int i,a;
    cout<<"Enter the no. of students\n";
    cin>>a;
    cout<<"Enter your Ca 1  and 2marks\n";
    for(i=0;i<a;i++)
    {
        cout<<"Roll no."<<i+1<<"\n";
        {
          cin>>ca1[i]>>ca2[i];
        }
    }
    cout<<"Enter your mte marks\n";
    for(i=0;i<a;i++)
    {
         cout<<"Roll no."<<i+1<<"\n";
        {
          cin>>mte[i];
        }
    }
    cout<<"Enter your ete marks\n";
    for(i=0;i<a;i++)
    {
         cout<<"Roll no."<<i+1<<"\n";
        {
          cin>>ete[i];
        }
    }
        for(i=0;i<a;i++)
    {
        if(ca1[i]>=0&&ca1[i]<=30&&ca2[i]>=0&&ca2[i]<=30)
        {
          ca[i]=ca1[i]+ca2[i];
          ca[i]=(ca[i]*25)/60.00;
        }
        cout<<"Ca Weightage roll "<<i+1<<"\t"<<ca[i]<<endl;
    }
     for(i=0;i<a;i++)
    {
        cout<<"Mte Weightage of roll " <<i+1<<"\t";
        if(mte[i]>=0&&mte[i]<=50)

        {
          mte[i]=((mte[i]*25)/50.00);
        }
        cout<<mte[i]<<endl;
    }

    for(i=0;i<a;i++)
    {
        cout<<"ete Weightage roll "<<i+1<<"\t";
        if(ete[i]>=0&&ete[i]<=70)
        {
          ete[i]=((ete[i]*50)/70.00);
        }
        cout<<ete[i]<<endl;
    }
     for(i=0;i<a;i++)
    {
      cout<<"Cgpa of roll "<<i+1<<"\t";
      f[i]=ca[i]+mte[i]+ete[i];
      f[i]=((f[i]*9.5)/100);
      cout<<f[i]<<endl;
    }
    for(i=0;i<a;i++)
        {
            cout<<" Roll no "<<i+1;
    if(f[i]>5.00)
    {
        cout<<" is pass";
    }
    else
        cout<<"fail";
        }

}
