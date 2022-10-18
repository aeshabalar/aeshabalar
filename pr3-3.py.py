a=int(input("enter A:"))
e=int(input("enter B:"))
s=int(input("enter S:"))
h=int(input("enter H:"))
SI=float(a*e*s)/100
CI=float(a*(1+e) / (100*h)**h*s)
print("simple intrest is:",SI)
print("compound intrest is:",CI)

