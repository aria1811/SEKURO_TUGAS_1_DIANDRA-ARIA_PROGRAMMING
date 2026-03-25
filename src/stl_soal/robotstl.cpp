#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), c(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        v.push_back({x[i], c[i]});
    }

    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++) {
            if(v[j].first < v[min].first) {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }

    map<int, bool> sudah_diambil;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int kategori = v[i].second;

        if(!sudah_diambil[kategori]) {
            sudah_diambil[kategori] = true;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}