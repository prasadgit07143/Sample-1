// import java.io.*;
// import java.lang.*;
// import java.util.*;

public class WeightedQuickUnion {
    private int id[], sz[], n;

    public WeightedQuickUnion(int n) {
        id = new int[n];
        sz = new int[n];
        this.n = n;
        for (int i = 0; i < this.n; ++i) {
            id[i] = i;
            sz[i] = 1;
        }
    }

    public int root(int i) {
        while (i != id[i])
            i = id[i];
        return i;
    }

    public void union(int p, int q) {
        int i = root(p);
        int j = root(q);
        if (sz[i] < sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
        } else {
            id[j] = i;
            sz[i] += sz[j];
        }
    }

    public boolean find(int p, int q) {
        return (root(p) == root(q));
    }

    public static void main(String[] args) {
        int n = StdIn.readInt();
        WeightedQuickUnion q1 = new WeightedQuickUnion(n);
        while (!StdIn.isEmpty()) {
            int p, q;
            p = StdIn.readInt();
            q = StdIn.readInt();
            if (!q1.find(p, q)) {
                q1.union(p, q);
                System.out.println(p + " and " + q + " connected successfully !");
            } else {
                System.out.println(p + " and " + q + " already connected !");
            }
        }
    }
}