// #include<bits/stdc++.h>
// using namespace std;   
// int N;
// double dist[20][20], memo[1<<16];
// double matching(int bit_mask)
// {
//       if(memo[bit_mask]>-.5)return memo[bit_mask];
//       if(bit_mask==(1<<2*N)-1)return memo[bit_mask]=0;

//       double matching_value=32767*32767;
//       for(int p1=0;p1<2*N;p1++){if(!(bit_mask & (1<<p1))){
//             for(int p2=p1+1;p2<2*N;p2++)
//             {
//                 if(!(bit_mask &(1<<p2)))
//                 {
//                   matching_value=min(matching_value, dist[p1][p2]+matching(bit_mask|(1<<p1)|(1<<p2)));
//                 break;  
//                 }
//             }
//       }}
//       return memo[bit_mask]= matching_value;
// }



// int main()
// {
//       char line[1000], name[1000];
//       int i,j,caseNo,x[20], y[20];
//       //testing here
//       freopen("test.txt", "r", stdin);
//       while(sscanf(gets(line), "%d", &N), N){
//             for(i=0; i<2*N; i++)
//             sscanf(gets(line),"%s %d %d", &name, &x[i], &y[i]);
//             for(i=0;i<2*N;i++)
//             {
//                   for(j=0;j<2*N;j++){
//                         dist[i][j]=sqrt(double)(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
//                   }
//             }
//             memset(memo, -1, sizeof(memo));
//             printf("Case %d: %.2f\n", caseNo++, matching(0));
//       }
//       return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int N;
double dist[20][20], memo[1 << 16];

double matching(int bit_mask) {
    if (memo[bit_mask] > -0.5) return memo[bit_mask];
    if (bit_mask == (1 << (2 * N)) - 1) return memo[bit_mask] = 0;

    double matching_value = numeric_limits<double>::max();
    for (int p1 = 0; p1 < 2 * N; ++p1) {
        if (!(bit_mask & (1 << p1))) {
            for (int p2 = p1 + 1; p2 < 2 * N; ++p2) {
                if (!(bit_mask & (1 << p2))) {
                    matching_value = min(matching_value, dist[p1][p2] + matching(bit_mask | (1 << p1) | (1 << p2)));
                      
                }
            }
            break;
           // This should be outside the inner loop to avoid premature exit
        }
    }
    return memo[bit_mask] = matching_value;
}

int main() {
    string line, name;
    int caseNo = 1;
    vector<int> x(20), y(20);

    while (true) {
        cin >> N;
        if (N == 0) break;

        cin.ignore(); // To ignore the newline character after reading N
        for (int i = 0; i < 2 * N; ++i) {
            getline(cin, line);
            stringstream ss(line);
            ss >> name >> x[i] >> y[i];
        }

        for (int i = 0; i < 2 * N; ++i) {
            for (int j = 0; j < 2 * N; ++j) {
                dist[i][j] = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            }
        }

        memset(memo, -1, sizeof(memo));
        cout << "Case " << caseNo++ << ": " << fixed << setprecision(2) << matching(0) << endl;
    }

    return 0;
}