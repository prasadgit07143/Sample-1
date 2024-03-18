// import java.util.*;
// import java.io.*;
// import java.lang.*;

public class QuickFind {

    private int id[], n;

    public QuickFind(int n) {
        this.n = n;
        id = new int[n];
        for (int i = 0; i < n; ++i)
            id[i] = i;
    }

    public void union(int p, int q) {
        int pid = id[p];
        int qid = id[q];
        for (int i = 0; i < n; ++i) {
            if (id[i] == pid)
                id[i] = qid;
        }
    }

    public boolean find(int p, int q) {
        return (id[p] == id[q]);
    }

    public static void main(String[] args) {
        int n = StdIn.readInt();
        QuickFind q1 = new QuickFind(n);
        while (!StdIn.isEmpty()) {
            int p = StdIn.readInt();
            int q = StdIn.readInt();
            if (!q1.find(p, q)) {
                q1.union(p, q);
                System.out.println(p + " and " + q + " connected successfully !");
            } else {
                System.out.println(p + " and " + q + " already connected !");
            }
        }
    }
}