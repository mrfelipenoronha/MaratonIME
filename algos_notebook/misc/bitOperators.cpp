
// BIT MANIPULATION

// Check if i-th bit is turned on
bool isTurn(int x, int i){
	return ((x&(1 << i)) != 0);
}
/*
	Get least significant bit, LSB. Last ocurrence of a
	turned bit. For exemple, in 10100, the lsb is 100.
*/
int lsb(int x){
	return x&-x;
}
// Count the total number of turned bits.
int countBits(int x){
	int cnt = 0;
	while(x != 0){
		cnt++;
		x -= x&-x;
	}
	return cnt;
}
// Check if a number is power of 2.
bool is_power_of_two(int x) {
	if (x == 0) return 0;
	return ((x&(x - 1)) == 0)
}
// Turn i-th bit on a number
int turnBit(int x, int i){
	x |= (1 << i);
	return x;
}
// Turn i-th bit off.
int offBit(int x, int i){
	x |= (1 << i); // Turn it
	x ^= (1 << i); // XOR it
	return x;
}
// BIT MASK
/*	Using a number to represent a set. This number is our
	bitmask. First, we need our elements to be ordered. 
	Then, our bitmask will have its i-th bit turned on
	only if the set it represents have the i element.

	If mask is equal to 10 in decimal, 1010 in decimal,
	it contais the second and the fouth element.   */
// Add element to the set.
int add(int i, int mask){
	mask |= (1 << i);
	return mask;
}
// Check if the set has an element.
bool isIn(int mask, int i){
	return ((mask&(i << 1)) != 0);
}
// Union of two sets
int unin(int a, int b){
	return (a|b);
}
// Intersection of two sets
int intersection(int a, int b){
	return (a&b);
}
// Complement set

int complement(int mask){
	return ~(mask); // Binary complement
}
// Getting bit representation as string
bitset<30> bt(x); // 30 is the number of bits, x is the value
string str = bt.to_string();
