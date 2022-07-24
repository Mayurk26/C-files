#include<bits/stdc++.h>
using namespace std;



// use of precomputation technique to reduce the time complexity


// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         int a[n];
//         int forward[n+10];
//         int backward[n+10];
//         forward[0]=backward[n+1]=0;
//         for(int i=1;i<=n;i++)
//         {
//             cin>>a[i];
//         }
//         for(int i=1;i<=n;i++)
//         {
//             forward[i]= __gcd(forward[i-1],a[i]);
//         }
//         for(int i=n;i>=1;i--)
//         {
//             backward[i]=__gcd(backward[i+1],a[i]);
//         }
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//             cout<<__gcd(forward[l-1],backward[r+1])<<endl;         
//         }
//     }
// }
// const int N=1e7+10;
// long long int arr[N];

// int main()
// {
//     int n,m;
//     cin>>n>>m;
    
//     while(m--)
//     {
//         int a ,b,d;
//         cin>>a>>b>>d;
//         arr[a] += d;
//         arr[b+1] -= d;
//     }
//     for (int i=1;i<=n;i++)
//     {
//         arr[i] += arr[i-1];
//     }
//     long long int mx=-1;
//     for(int i=1;i<=n;i++)
//     {
//         if(mx<arr[i])
//         {
//             mx=arr[i];
//         }
//     }
//     cout<<mx<<endl;
// }



//problem on precomputation and hashing combine use


// const int N=1e5+10;
// int hsh[N][26];
// int main()
// {

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         for(int i=0;i<N;i++)
//         {
//             for(int j=0;j<26;j++)
//             {
//                 hsh[i][j]=0;
//             }
//         }
//         int n,q;
//         cin>>n>>q;
//         string s;
//         cin>>s;
//         for(int i=0;i<n;i++)
//         {
//             hsh[i+1][s[i]-'a']++;
//         }
//         for(int i=0;i<26;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 hsh[j][i] += hsh[j-1][i];
//             }
//         }
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//             int odd_cnt=0;
//             for(int i=0;i<26;i++)
//             {
//                 int char_ct = hsh[r][i] - hsh[l-1][i];
//                 if(char_ct%2 !=0)
//                 {
//                     odd_cnt++;
//                 }
//             }
//             if(odd_cnt>1)
//             {
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
//         }
//     }
// }



// Recursion 

// sum of array using recursion

// int sum(int n,int arr[])
// {
//     if(n<0) 
//        return 0;
//     else
//        return sum(n-1,arr) + arr[n];
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<sum(n-1,arr);

// }

//digit sum 

int digitsum(int n)
{
    if(n==0)
       return 0;
    else
       return digitsum(n/10)+ (n%10);
}
int main()
{
    int n;
    cin>>n;
    cout<<digitsum(n)<<endl;
}
//no of function calls := digits in the n
//complexity of each function = log(n) because 0f(n/10)

