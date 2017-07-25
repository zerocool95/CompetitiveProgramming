//Disjoint set Union Template
//Akash Basudevan

//data[x] represent the number of node under the root node x
//size(int x) return size of the set in which this node lies.
//union set(int x,int y) return if both x and y are in the same set or not
// with merging the set if not in same set.
//follows 0 based numbering of the nodes.
//findset(int x, int y) return if root(x) is equal to root(y) or not

class UnionFind 
	{
		vector<int> data;
	public:
		UnionFind(int n) { data.assign(n, -1); }

		bool unionSet(int x, int y) {
			x = root(x); y = root(y);
			if(x != y) {
				if(data[y] < data[x]) swap(x, y);
				data[x] += data[y]; data[y] = x;
			}
			return x != y;
		}
		bool findSet(int x, int y) { return root(x) == root(y); }

		int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }

		int size(int x) { return -data[root(x)]; }
	};
