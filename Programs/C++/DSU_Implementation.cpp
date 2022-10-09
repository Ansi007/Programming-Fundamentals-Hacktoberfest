// DSU
class DSU{
    private:
    vector<int>par,size,rank;

   public:
    DSU(int n)
    {
        for(int i=0;i<=n;i++)
        {
            par.push_back(i);
            size.push_back(1);
            rank.push_back(0);
        }
    }

    // by size+path 
    public:
    int findPar(int node)
    {
        if(par[node]==node)return node;  // i am groot
        return par[node]=findPar(par[node]);
    }

    public:
    void UnionSize(int u, int v)
    {
        int pu=findPar(u);
        int pv=findPar(v);
        if(pu==pv)return;
        // size matters
        if(size[pu]>size[pv])
        {
            par[pv]=pu;
            size[pu]+=size[pv];
        }
        else 
        {
            par[pu]=pv;
            size[pv]+=size[pu];
        }

    }
    
    /*
     // by Rank 
    public:
    int findPar(int node)
    {
        if(par[node]==node)return node;  // i am groot
        return par[node]=findPar(par[node]);
    }

    public:
    void UnionRank(int u, int v)
    {
        int pu=findPar(u);
        int pv=findPar(v);
        if(pu==pv)return;
        // Rank matters
        if(rank[pu]>rank[pv])
        {
            par[pv]=pu;
         //   size[pu]+=size[pv];
        }
        else if(rank[pv]>rank[pu])
        {
            par[pu]=pv;
        //    size[pv]+=size[pu];
        }
        else{
            par[pu]=pv;
            rank[pv]++;
        }

    }
    */
};
