import pandas as p
#Read Data Into DataFrame
student_data={'sno':[1,2,3,4,5],
              'sname':['Parth','Jay','Vivek','Maan','Dev'],
              'age':[18,17,18,20,21],
              'total_marks':[85,86,82,84,90]}
df=p.DataFrame(student_data,index=student_data['sno'])
print("Table Data into Dataframe :- ")
print(df)
#top three data from DataFrame
print('Top Three Records From DataFrame :- ')
print(df.head(3))
#Displaying Records Whose age is not less than 18
print('Records Whose Age is not Less Than 18 :- ')
print(df[df['age']>=18])
#Displaying Age Of Student whose sno is 5 using loc & iloc
print('Age Of Student whose sno 5 using iloc :- ',df.iloc[4]['age'])
print('Age Of Student whose sno 5 using loc :- ',df.loc[df['sno']==5,'age'].values[0])