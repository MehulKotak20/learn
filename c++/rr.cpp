
void permute(string& a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
 
            // Swapping done
            swap(a[l], a[i]);
 
            void permute(string& a, int l+1, int r)
{
    // Base case
    if (l == r)3
        cout << a << endl;
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
 
            // Swapping done
            swap(a[l], a[i]);
 void permute(string& a, int l+1, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
 
            // Swapping done
            swap(a[l], a[i]);
 
            
            // backtrack
            swap(a[l], a[i]);
        }
    }
}
 
            // backtrack
            swap(a[l], a[i]);
        }
    }
}
 
            // backtrack
            swap(a[l], a[i]);
        }
    }
}
 
