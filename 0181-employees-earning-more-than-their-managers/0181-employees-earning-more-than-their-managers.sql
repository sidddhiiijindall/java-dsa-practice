# Write your MySQL query statement below
select Employee.name as Employee
from Employee
left join Employee as manager
on Employee.managerId = manager.id
where Employee.salary>manager.salary

