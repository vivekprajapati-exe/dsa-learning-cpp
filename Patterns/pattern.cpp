#include <iostream>
using namespace std;

void pattern1(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <n-i+1 ; j++)
        {
            cout<<"*";
        };
        cout<<endl;
    };



};
void pattern6(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n-i+1; j++)
        {
            cout<<j;
        };
        cout<<endl;
    };
    
};

void pattern7(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j<=n-i-1; j++)
        {
            cout<<" ";
        };
        for (int j = 1; j<=2*i+1; j++)
        {
            cout<<"*";
        };
        for (int j = 1; j<=n-i-1; j++)
        {
            cout<<" ";
        };
        cout<<endl;
    };
    
};
void pattern8(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            cout<<"-";
        };
        for (int j = 0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        };
        for (int j = 0; j<i; j++)
        {
            cout<<"-";
        };
        cout<<endl;
    };
    
};
void pattern9(int n){
      for (int i = 0; i <n/2; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            cout<<"-";
        };
        for (int j = 0; j<2*i+1; j++)
        {
            cout<<"*";
        };
        for (int j = 0; j<n-i-1; j++)
        {
            cout<<"-";
        };
        cout<<endl;
    };
     for (int i = n/2; i <n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            cout<<"-";
        };
        for (int j = 0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        };
        for (int j = 0; j<i; j++)
        {
            cout<<"-";
        };
        cout<<endl;
    };
    
};

void pattern10(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i; 
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        };
        
      cout<<endl;  
    };
    

};
void pattern11(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) num = 1;
        else num = 0;

        for (int j= 0; j <= i; j++)
        {
            cout<<num;
            num = 1-num;
        }
      cout<<endl;  
    };

};


void pattern12(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<"-";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<i-j+1;
        }
        
      cout<<endl;  
    };
    
};
void pattern13(int n){
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A'+i; j++)
        {
            cout<<j<< " ";
        }
                
      cout<<endl;  
    };
    
};
int main() {
    int n;
    cin>>n;
    // pattern1(n);
    pattern13(n);

    return 0;
}