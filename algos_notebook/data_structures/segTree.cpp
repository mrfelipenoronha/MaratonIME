// SEGTREE
// Reference code - Range update and point querie

#define maxn 100000

struct SegTree {

	int tree[maxn * 2];
	int n; // array size

	void build() {
		for (int i = n-1; i > 0; i--)
			tree[i] = tree[i<<1] + tree[i<<1|1];
	}

	// update in [l, r), 0-indexed
	void update(int l, int r, int val) {
		for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
			if (l&1) tree[l++] += val;
			if (r&1) tree[--r] += val;
		}
	} 

	// value at position p
	int query(int p) {
		int ans = 0;
		for (p += n; p > 0; p >>= 1) 
			ans += tree[p];
		return ans;
	}

	// push all modifications to leaves
	void push() {
		for (int i = 1; i < n; i++) {
			tree[i<<1] += tree[i];
			tree[i<<1|1] += tree[i];
			seg[i] = 0;
		}
	}
};

int main() {
	cin >> n;
	
	SegTree seg;
	for (int i = 0; i < n; i++)
		cin >> seg.tree[i+n]; // put direct in leaf nodes;

	seg.build();
}