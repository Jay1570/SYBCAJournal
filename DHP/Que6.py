import pandas as p
import matplotlib.pyplot as plt
df=p.read_csv('sales.csv')
yearly_sales=df.groupby('year')['totalsales'].sum()
plt.figure(figsize=(10,6))
yearly_sales.plot(kind='bar',color='skyblue')
plt.title('Total Sales By Year')
plt.xlabel('Year')
plt.ylabel('Sales')
plt.xticks(rotation=45)
plt.tight_layout()
plt.show()