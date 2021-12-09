import numpy as np
import matplotlib.pyplot as plt
import sympy as sym
x = sym.symbols('x')
a = np.array([4,3])
b = np.array([x,5])
o = np.array([2,3])

oa = np.linalg.norm(o-a)**2
print(oa)

ob = (o-b)
ob = np.transpose(ob)@(ob)
print(OB)

S= list(sym.solveset(ob-oa, x))
b[0]=b[0].subs(x,int(str(S[0])))
print("The value of x = ",b[0])
theta = np.linspace( 0 , 2 * np.pi , 100 ) 
 
radius = np.sqrt(oa)
print(radius)
m = o[0]+ radius * np.cos( theta )
n = o[1] + radius * np.sin( theta ) 
figure, axes = plt.subplots( 1 )
axes.plot( m, n )
axes.set_aspect( 1 )
plt.grid(linestyle='--')

plt.plot(o[0], o[1],'o')
plt.text(o[0], o[1],"O")
plt.plot(a[0], a[1],'o')
plt.text(a[0], a[1],"A")
plt.plot(b[0], b[1],'o')
plt.text(b[0], b[1],"B")

x_values = [b[0], o[0]]
y_values = [b[1], o[1]]
plt.plot(x_values, y_values)
x_values = [a[0], o[0]]
y_values = [a[1], o[1]]
plt.plot(x_values, y_values)
plt.show()
plt.savefig('question1.png')

