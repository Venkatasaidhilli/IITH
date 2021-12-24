import numpy as np
import matplotlib.pyplot as plt
import sympy as sym
k = sym.symbols('k')
y = sym.symbols('y')
a = np.array([-2, 2])
b = np.array([3, 7])
p = np.array([2, y])
P=((k*a)+b)/(k+1)
S= list(sym.solveset(p[0]-P[0], k))
sol = (float(S[0]))
print("The Value of k =",k)

M= list(sym.solveset(p[1]-P[1], y))
print(M[0])
Z = int(M[0].subs(k,sol))
print("The value of y =",Z)
p[1]=p[1].subs(y,Z)
print(p)

plt.plot(p[0], p[1],'o')
plt.text(p[0]+0.15, p[1]-0.25,"P")
plt.plot(a[0], a[1],'o')
plt.text(a[0]+0.15, a[1]-0.15,"A")
plt.plot(b[0], b[1],'o')
plt.text(b[0]+0.10, b[1]-0.35,"B")
x_values = [a[0], b[0]]
y_values = [a[1], b[1]]
plt.plot(x_values, y_values)
plt.grid(linestyle='--')
plt.show()
