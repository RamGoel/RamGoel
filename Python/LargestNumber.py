a=int(input("First No. "))
b=int(input("Second No."))
c=int(input("Third No."))

ref=a

if b>ref:
    ref=b
if c>ref:
    ref=c


print(ref, "is greater")
