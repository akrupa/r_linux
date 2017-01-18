import matplotlib.pyplot as plt

fig = plt.figure()
axes = fig.add_subplot(111)

axes.set_autoscale_on(True)
axes.autoscale_view(True,True,True)

l1, = axes.plot([0,0.1,0.2],[1,1.1,1.2])
l2, = axes.plot([0,0.1,0.2],[-0.1,0,0.1])

#plt.show() #shows the auto scaled.

l2.set_data([0,0.1,0.2],[-1,-0.9,-0.8])

#axes.set_ylim([-2,2]) #this works, but i cannot afford to do this.  

plt.draw()
plt.show() #does not show auto scaled
