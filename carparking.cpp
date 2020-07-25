#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int t=0;
    int b=0;
    int u_input;
    int amount=0,counting=0;

    //menu
    while(true)
    {
    cout<<"=========================================\n";
    cout<<"* press 1 for bike:"<<endl;
    cout<<"* press 2 for cars:"<<endl;
    cout<<"* press 3 for bus:"<<endl;
    cout<<"* press 4 for old record:"<<endl;
    cout<<"* press 5 for delete record:"<<endl;
    cout<<"* press 6 to delete bike:"<<endl;
    cout<<"* press 7 to delete car:"<<endl;
    cout<<"* press 8 to delete bus:"<<endl;
    cout<<"=========================================\n";
    cin>>u_input;
{
    if(u_input==1)
        {
            t++;
        amount=amount+100;
        counting=counting+1;
    }
    else if(u_input==2)
    {
        c++;
        amount=amount+200;
        counting=counting+1;
    }
    else if(u_input==3)
    {
        b++;
        amount=amount+300;
        counting=counting+1;
    }
    else if(u_input==4)
    {
        cout<<"\t\t*********************************************"<<endl;
        cout<<"\t\t\tthe total amount="<<amount<<endl;
        cout<<"\t\t\tthe total no of vehicles="<<counting<<endl;
        cout<<"\t\t\tthe total no of bikes parked="<<t<<endl;
        cout<<"\t\t\tthe total no of cars parked="<<c<<endl;
        cout<<"\t\t\tthe total no of bus parked="<<b<<endl;
        cout<<"\t\t*********************************************"<<endl;
    }
    else if(u_input==5)
    {
        amount=0;
        counting=0;
        t=0;
        c=0;
        b=0;
    }
    else if(u_input==6)
    {
        t--;
        counting=counting-1;
    }
    else if(u_input==7)
    {
        c--;
        counting=counting-1;
    }
    else if(u_input==8)
    {
        b--;
        counting=counting-1;
    }
    else
    {
        cout<<"invalid no"<<endl;
    }
}
}
    return 0;
}
