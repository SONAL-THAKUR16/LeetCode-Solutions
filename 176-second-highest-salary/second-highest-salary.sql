# Write your MySQL query statement below
select MAX(salary)AS SecondHighestSalary FROM Employee WHERE salary<(SELECT MAX(salary) FROM Employee);