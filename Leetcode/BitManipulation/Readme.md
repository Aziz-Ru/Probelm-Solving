# Bit Manipilation
## OR 
```
11001
10111
------
11111
```

## OR 
```
11001
10111
------
10001
```

## XOR 
```
11001
10111
------
01110
```

## Find the set bit

```
bitset<32>b(n)   n<2^31-1
```
## Find the unset bit

```
int size=log2(n)+1;
int allset=(1<<size)-1;
int unsetNumber=allset-n;

```
