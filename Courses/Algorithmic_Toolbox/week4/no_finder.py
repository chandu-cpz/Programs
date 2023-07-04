low=int(input("Enter the lower range of x: "))
high=int(input("Enter the max value of x: "))
while(True):
    x=((int)((low+((high-low)/2))))
    print(x)
    symbol=input("Enter wheather its greater(g) or smaller(s): ")
    if(symbol=="g"):
        low=x+1
    if(symbol=="s"):
        high=x-1
    print(f"the high is {high} and low is {low}")
