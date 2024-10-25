// Ques.1-> print n to 1 
// Method-1 using for loops / using Iteration.
// normal printing 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the no. b/w n to 1 ";
//     cin>>n;

//     while(n>0)
//     {
//         cout<<n;
//         n--;
//     }
// }
 //5 4 3 2 1


// using function

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     while(n>0)
//     {
//         cout<<n<<" ";
//         n--;
//     }
// }
//  int main()
//  {
//     print(5);
//  }
 //5 4 3 2 1


 // *** using recursion ***


//  #include<iostream>
//  using namespace std;
//  void print(int n)
//  { 
//     cout<<n; // kaam
//     if(n==1) return ; // base case 
//     print(n-1); // call

//  }
// int main()
//     {
//         print(5);
//     }
//   //54321




 #include<iostream>
 using namespace std;
 void print(int n)
 { 
  
    if(n==0) return ; // base case 
      cout<<n; // kaam
     print(n-1); // call

 }
int main()
    {
        print(5);
    }
// 54321

