// Ques.1-> Print sum from 1 to n (Parameterised)

//  print 1 to n

// #include<iostream>
// using namespace std;
// void print(int n) // n is a 1 parameter
// {
//     if(n==0) return ; // base case 
//     print(n-1);  // call
//     cout<<n; // kaam
// }
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     print(n); // n is a 1 arguments
//  }
 
// Enter n 5
// 12345



//  print n to 1

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0) return ; // base case 
//     cout<<n; //kaam
//     print(n-1); // call
// }
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     print(n);
//  }


// //  Enter n 5
// // 54321






// print sum from 1 to n.
//(using extra Parameter)

// #include<iostream>
// using namespace std;
// void print(int sum,int n) 
// {

//   if(n==0) 
//   {
//     cout<<sum;
//     return ;
//   }
//   print(sum+n, n-1);
 
// }
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     print(0,n);
//  }
// // Enter n 5
// // 15



// //  print sum from 1 to n.
// //(without using extra Parameter)

// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n==0) return 0; // base case 
//    return n + sum(n-1);
// }
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//    cout<<sum(n);
//  }

// // Enter n 5
// // 15

        //   **** if you write (int) as a return type in fun. than you must do cout(print) in the main fun.
       //                    **** if void so, no need to print only call them .
                    
 

 // practice - print 1 to n without using extra paramerter

// factorial of 5 = 5*4*3*2*1 = 5 * 4! =  5* fact(n-1) =>  n*fact(n-1)
//  sum of 5 = 1+2+3+4+5 or 5+4+3+2+1 = 5+sum(4) => n+sum(n-1) 

 #include<iostream>
 using namespace std;
 int sumupton(int n)
 {
    if(n==0) return 0;
    return n+sumupton(n-1);
 }
  int main()
  {
    int n;
    cout<<"enter n ";
    cin>>n;
     
    cout<<sumupton(n);
  }

// enter n 5
// 15