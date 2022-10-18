#!/usr/bin/env python
# coding: utf-8

# # python ka chilla with baba ammar
# ## learning basics of jupyter notebook
# ### learning python
# **1. my first program**
# 

# In[1]:


a = "idueyfgqe8fg221@#e7217"
i = 0
s = 0
c = 0
while i < len(a):
    if ord(a[i]) >= ord("0") and  ord(a[i]) <= ord("9"):
        s = s + int(a[i])
        c = c + 1
    else:
        pass
    i = i + 1
avg = s/c
print("the sum of all the numbers in the string is",s)
print("the count of all the numbers in the string is",c)
print("the average of all the numbers in the string is",avg)


# **2.my second program**

# In[2]:


h = int(input("enter the half height of diamond"))
for x in range(h):
    print(" " * (h - x), "*" * (2*x + 1))
for x in range(h - 2, -1, -1):
    print(" " * (h - x), "*" * (2*x + 1))


# In[ ]:




