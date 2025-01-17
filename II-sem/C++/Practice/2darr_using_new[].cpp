//
//
//
//

#include<bits/stdc++.h>
using namespace std;
                      // Suggested article : https://gsamaras.wordpress.com/code/dynamic-2d-array-in-c/
class MATRIX{
    int **matrix;
    int rows,cols;

    public:

    MATRIX(){}
    MATRIX( int  rows, int cols )
    {
      matrix = new int*[rows];

      for( int i = 0 ; i < rows ; i++ )
       matrix[i] = new int[cols];
     
     this->rows = rows;
     this->cols = cols;

    }
    friend istream& operator >> ( istream&, MATRIX& );
    friend ostream& operator << ( ostream&, MATRIX& );
    void free();
};
    
    istream& operator >> ( istream& input, MATRIX& m )
    {

     for( int i = 0 ; i < m.rows ; i++ )
     {
      cout << endl;
      for( int j = 0 ; j < m.cols ;j++ )
      {
        cout << "M[" << i + 1 << "][" << j + 1 << "] : ";
        input >> m.matrix[i][j];
      }   
     }
    }
    
    ostream& operator << ( ostream& out, MATRIX& m )
    {
      for( int i = 0 ; i < m.rows ; i++ )
      {
        out << endl;
       for( int j = 0 ; j < m.cols ;j++ )
          out << m.matrix[i][j] << "\t";
      }
    }

    void MATRIX::free()
    {
       for(int i = 0; i < rows; ++i)
          delete [] matrix[i]; // first delete all the pointer stored in 'array of pointers to int'
     delete [] matrix; // at last delete the 'array of pointers'
    }

int main()
{
    MATRIX m;
    int rows,cols;

    cout << endl << "Enter no. rows : ";
    cin >> rows;

    cout << endl << "Enter no. of columns : ";
    cin >> cols;

    m = MATRIX(rows, cols);

    cout << endl << "Enter Matrix Elements:";
    cin >> m;

    cout << endl << "Matrix is as follows: ";
    cout << m;
    
    m.free();
    return 0;
}