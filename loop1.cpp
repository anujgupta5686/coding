#include <iostream>
using namespace std;
int main()
{

    // for(int i=0;i<5;i++){
    //     cout<<i<<" "<<"-> ";
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"============================================================="<<endl;
    // cout<<"Square Pattern"<<endl<<"\n";
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Rectagle Pattern"<<endl<<"\n";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<7;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Hollow Rectagle Pattern"<<endl<<"\n";
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==0 || i==3 || j==0 || j==4){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout<<"Enter Number: ";
    // cin>>n;
    // cout<<"Half Pyramid Pattern"<<endl<<"\n";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cout<<"Enter Number: ";
    // cin>>n;
    // cout<<"Reverse Half Pyramid Pattern"<<endl<<"\n";
    // for(int i=1;i<=n;i++){
    //     // for(int j=1;j<=n-i+1;j++){
    //     for(int j=i;j<=n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cout << "Enter Number: ";
    // cin >> n;
    // cout << "Hollow Half Pyramid Pattern" << endl
    //      << "\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i == 1 || i == 2 || i == n || j == 1 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {

    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter Number: ";
    // cin >> n;
    // cout << "Reverse Hollow Half Pyramid Pattern" << endl
    //      << "\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         if (i == 1 || j == 1 || j == n - i + 1 || j == 4 || j == 5)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {

    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //* * * * * *

    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}