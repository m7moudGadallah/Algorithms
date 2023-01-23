#include<bits/stdc++.h>

using namespace std;

class UnionFind {
    private:
        int *id;
    public:
        UnionFind(int n) {
            id = new int[n];
            for (int i = 0; i < n; ++i)
                id[i] = i;
        }

        ~UnionFind() {
            delete [] id;
        }

        void unionOP(int p, int q) {
            int pid = find(p);
            int qid = find(q);
            id[pid] = qid;
        }

        int find(int p) {
            if (id[p] == p)     return p;
            return find(id[p]);
        }

        bool connected(int p, int q) {
            return find(p) == find(q);
        }
};