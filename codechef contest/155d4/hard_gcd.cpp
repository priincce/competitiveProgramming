#include <iostream>
#include <vector>
using namespace std;

void constructMatrix(int N, int M) {
    vector<vector<int>> matrix(N, vector<int>(M, 2));
     if(M==N)
     {
      for (int i=0;i<N;i++)
      {
            matrix[i][i]=3;
      }
     }
  else if (M > N) {
        for (int j = 0; j < M; ++j) {
            matrix[j % N][j] = 3; 
        }
    } else if (N > M) {
        for (int i = 0; i < N; ++i) {
            matrix[i][i % M] = 3;
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        constructMatrix(N, M);
    }
    return 0;
}
