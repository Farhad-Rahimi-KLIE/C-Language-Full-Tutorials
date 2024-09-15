<h1>Calloc</h1>
<h3>Calloc() stands for Contiguous allocation</h3>

1 - it reserves n blocks of memory with the given amount of bytes.
2 - the return value is a void pointer to the allocated space.
3 - therefor the vioid pointer needs to be casted to the appropriate type as per the requirements.
4 - However, if the space is insufficient, allocation of memory fails and it returns a NULL pointer.
5 - All the values at allocated memory are initialized to 0.

Syntax ->

 ptr = (ptr-type*) calloc(n, size-in-bytes);