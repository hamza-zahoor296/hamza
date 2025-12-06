#include<iostream>
using namespace std;
int main()
{
	int matrix_A[5][5];
    int matrix_B[5][5];
    int matrix_Mult[5][5];
    int row,col;
    
       for(row=0; row<5; row++)
          {
            for(col=0; col<5; col++)
             {
               cout << "Enter the Value at index A[" << row + 1 << "][" << col + 1 << "]: ";
            cin >> matrix_A[row][col];
             }
             cout<<endl;
          }
          
          cout<<"\n";
          
          for(row=0; row<5; row++)
          {
            for(col=0; col<5; col++)
             {
               cout << "Enter the Value at index B[" << row + 1 << "][" << col + 1 << "]: ";
               cin >> matrix_B[row][col];
             }
             cout<<endl;
          }
                    
          for(row=0; row<5; row++)
            {
                for(col=0; col<5; col++)
                  {
                  	
                  matrix_Mult[row][col]=matrix_A[row][col]*matrix_B[row][col];
                  
                  }
                  cout<<endl;
            }
			
	        cout<<"Multiplication  of matrix is as under\n";
	        
	        for(row=0; row<5; row++)
                   {
                    for(col=0; col<5; col++)
                       {
                       	 
                         cout<<matrix_Mult[row][col]<<"\t";
                                                  
                        }
                        cout<<endl;
                   }
    return 0;
}