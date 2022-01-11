marks=int(input("Enter your marks"))


if marks>=95:
    print('A+')
elif marks>=90 and marks<95:
    print('A')
elif marks>=85 and marks<90:
    print('B+')
elif marks>=80 and marks<85:
    print('B')
elif marks>=70 and marks<80:
    print('C')
elif marks>=60 and marks<70:
    print('D')
else:
    print("fail")


