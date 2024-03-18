// import java.io.*;
// import java.lang.*;
// import java.util.*;

public class QuickUnion {
    private int id[], n;

    public QuickUnion(int n) {
        id = new int[n];
        this.n = n;
        for (int i = 0; i < this.n; ++i)
            id[i] = i;
    }

    public int root(int i) {
        while (i != id[i])
            i = id[i];
        return i;
    }

    public void union(int p, int q) {
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }

    public boolean find(int p, int q) {
        return (root(p) == root(q));
    }

    public static void main(String[] args) {
        int n = StdIn.readInt();
        QuickUnion q1 = new QuickUnion(n);
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