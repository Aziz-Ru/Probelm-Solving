def fun():
    print("Hello world I,Here 192.168.0.111")

def fib(val):
    if val==1 or val==0: return val
    return fib(val-1)+fib(val-2)


fun()
for i in range(1,11):
    print(fib(i))
