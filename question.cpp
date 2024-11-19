// 1.Calculate the time complexity for the following code snippet.
// int c = 0;
// for (int i = n; i > 0; i /= 2)
// {
//     c++;
// }
answer=> O(logn)


// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 1; i /= i) {
// c++;
// }
answer=> O(1)


// Calculate the time complexity for the following code snippet where k is some constant (k<<n).
// int c = 0;
// for(int i = 0; i < n; i += k) {
// c++;
// }
answer=> O(n)



// Calculate the time complexity for the following code snippet.
// int c = 0;
// for (int i = 1; i < n; i *= 2)
// {
//     c++;
// }
answer=> O(logn)


// Calculate the time complexity for the following code snippet.
// int c = 0;
// for (int i = 0; i < n; i++)
// {
//     c += i;
// }
answer=> O(logn)


// Calculate the time complexity for the following code snippet.
// int c = 0;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         c++;
//     }
// }       
answer=> O(n^2)
