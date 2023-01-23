public class UnionFind {
    private int [] id;

    public UnionFind(int n) {
        id = new int[n];

        for (int i = 0; i < n; ++i)
            id[i] = i;
    }

    public void union(int p, int q) {
        int pid = find(p);
        int qid = find(q);
        id[pid] = qid;
    }

    public int find(int p) {
        if (id[p] == p)     return p;
        return find(id[p]);
    }

    public boolean connected(int p, int q) {
        return id[p] == id[q];
    }
}