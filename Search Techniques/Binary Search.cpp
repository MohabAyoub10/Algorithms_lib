const int N = 1e5 + 5;
int a[N];

int bsrecursive(int lo, int hi, int val) { // O(log n)
  if (hi < lo) return -1;
  int mid = lo + (hi - lo) / 2;
  if (a[mid] == val) return mid;
  if (a[mid] > val) return bs(lo, mid - 1, val);
  return bs(mid + 1, hi, val);
}


int bsIterative(int lo, int hi, int val) { // O(log n)
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (a[mid] == val) return mid;
        else if (a[mid] > val) hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}