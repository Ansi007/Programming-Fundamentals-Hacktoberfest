def fibo(n):
  n1 = 0
  n2 = 1
  count = 0
  
  if(n<=0):
    print("Please enter a positive integer")
  elif(n==1):
    print("Fibonacci sequence : ")
    print(n1)
  else:
    print("Fibonacci sequence : ")
    while(count<n):
      print(n1)
      n3 = n1+n2
      n1 = n2
      n2 = n3
      count+=1
      
n = int(input("Enter a number you want to find the fibonacci sequence "))
fibo(n)
