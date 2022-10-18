class rational:
    p = 0
    q = 0
# ration number check
def rationalNumber(a):
    if a.q == 0:
        print(a.p,"/",a.q,"is not a rational Number")
    else:
        print(a.p,"/",a.q,"is a rational Number")
 # example of usage of rational number
def main():
    print("enter the answer of equation to check whether it is rational or not")
    x = rational()
    x.p = int(input("enter the numenator of the answer"))
    x.q= int(input("enter the denominator of the answer"))
    rationalNumber(x)
main()



