import pandas as p
#Read Data Into DataFrame
employee_data={
                'eno':[1,2,3,4,5],
                'ename':['Parth','Jay','Vivek','Maan','Dev'],
                'designation':['Manager','Developer','DBA','Designner','Head'],
                'basic':[20000,23000,22500,21500,23500],
                'da':[2000,2300,2250,2150,2350],
                'gross_salary':[22000,25300,24750,23650,25850]
}
emp=p.DataFrame(employee_data)
print("DataFrame :- ")
print(emp)
#Sorting DataFrame By Gross Salary & Listing Out Bottom Two Records
sorted=emp.sort_values('gross_salary')
print("Sorted Values :-")
print(sorted)
print("Bottom Two Records :-\n",sorted.tail(2))
#Displaying Records Whose Salary is Greater Than 25000
print('Records Whose Salary is Greater Than 25000 :-\n',emp[emp['gross_salary']>=25000])
#Displaying Gross Salary Whose eno is 4
print('Gross Salry whose eno is 4 :- ',emp.loc[emp['eno']==4,'gross_salary'].values[0])