
// Ques.1-> print 1 to n using (extra parameter).
// M.1->  using iteration 

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     int i = 1;
//     while(i<=n)
//     {
//     cout<<i;
//     i++;
//     }
// }
// int main()
// {
//     // print(5);
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     print(n);
// }

//12345

//Enter n 10
// 12345678910


//  print 1 to n 
// M.2-> ****  using recursion ****

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0) return ; // base case
//     print(n-1); // call
//     cout<<n; // kaam
// }
// int main()
// {
//     print(6);
// }
// // 123456


//  print 1 to n 
// using extra parameter 



// #include<iostream>
// using namespace std;
// void print(int i,int n) // i is a extra parameter
// {
//     if(i>n) return ; // base case
//     print(i, n-1); // call
//     cout<<n; // kaam
// }
// int main()
// {
//     print(1,6);  // here pass two parameters
// }
//123456




// ***** Important *****
// these two codes are very imp 
// 1st- kaam and call
// 2nd- call and kaam

// #include<iostream>
// using namespace std;
// void print(int i,int n) // i is a extra parameter
// {
//     if(i>n) return ; // base case
//         cout<<i; // kaam
//     print(i+1, n); // call

// }
// int main()
// {
//     print(1,5);  // here pass two parameters
// }
// // 12345




// #include<iostream>
// using namespace std;
// void print(int i,int n) // i is a extra parameter
// {
//     if(i>n) return ; // base case
//       print(i+1, n); // call
//         cout<<i; // kaam
  

// }
// int main()
// {
//     print(1,5);  // here pass two parameters
// }
// 54321



// Ques.3-> Actual recursion sarts from here 

// Print 1 to n ( after recursive call )
// using one parameter

// M.1-> after recursive call -> print 1 to n.

#include<iostream>
using namespace std;
void print (int n)
{
    if(n==0) return ; // base case-> terminate the loop 
    print(n-1); // call
     cout<<n;  // kaam 

}
 int main()
 {
    int n;
    cout<<"Enter the no. n : ";
    cin>>n;
    print(n);
 }
 //Enter the no. n : 4
// 1234

